#include <core/updatesaid.h>

#include <QDebug>

Q_LOGGING_CATEGORY(TG_CORE_KEEPALIVE, "tg.core.keepalive")

UpdatesAid::UpdatesAid(Api *api, DcProvider *dcProvider, QObject *parent)
    : QObject(parent)
    , mApi(api)
    , mDcProvider(dcProvider)
    , mPts(0)
    , mDate(0)
    , mQts(0)
{
    connect(mApi,
            SIGNAL(updatesDifference(qint64,QList<Message>,QList<EncryptedMessage>,QList<Update>,QList<Chat>,QList<User>,UpdatesState)),
            SLOT(onServerAlive()));
    connect(mApi,
            SIGNAL(updatesDifferenceEmpty(qint64,qint32,qint32)),
            SLOT(onServerAlive()));
    connect(mApi,
            SIGNAL(updatesDifferenceSlice(qint64,QList<Message>,QList<EncryptedMessage>,QList<Update>,QList<Chat>,QList<User>,UpdatesState)),
            SLOT(onServerAlive()));
    connect(mApi, SIGNAL(mainSessionReady()), SLOT(onMainSessionReady()));

    mTimer.setSingleShot(true);
    mTimer.setInterval(TIMEOUT);
    connect(&mTimer, SIGNAL(timeout()), SLOT(onTimeout()));
}

UpdatesAid::~UpdatesAid() {
}

void UpdatesAid::onTimeout() {
    //Got here if pong not received before timeout. Let's create a new main session and ask for updates
    qCDebug(TG_CORE_KEEPALIVE) << __PRETTY_FUNCTION__;
    if (mApi) {
        if (mApi->mainSession()) {
            DC *dc = mDcProvider->getWorkingDc();
            mApi->changeMainSessionToDc(dc);
        } else {
            qCWarning(TG_CORE_KEEPALIVE) << "Could not re-create the main session to get the updates";
        }
    }
}

void UpdatesAid::onMainSessionReady() {
    //TODO (rmescandon): don't trigger here again the timer to avoid having infinite main session re-creation (only once)
    mApi->updatesGetDifference(mPts, mDate, mQts);
}

void UpdatesAid::onServerAlive() {
    qCDebug(TG_CORE_KEEPALIVE) << __PRETTY_FUNCTION__;
    mTimer.stop();
}

void UpdatesAid::waitForResponseInTime(qint32 pts, qint32 date, qint32 qts) {
    mPts = pts;
    mDate = date;
    mQts = qts;
    mTimer.start();
}
