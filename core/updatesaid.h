#ifndef KEEPALIVE_H
#define KEEPALIVE_H

#include <QTimer>
#include <QLoggingCategory>
#include <core/dcprovider.h>

Q_DECLARE_LOGGING_CATEGORY(TG_CORE_KEEPALIVE)

/**
 * @brief The UpdatesAid class
 *
 * Before calling updatesGetDifferences, this class starts a timer
 * to see if a response is received before expiring.
 * If not received a response, re-create main session and call updatesGetDifferences().
 * This solves the problem of not updating the app after missing the connection but having
 * the QTcpSocket not aware of such a connection miss.
 */
class UpdatesAid : public QObject
{
    Q_OBJECT
public:
    explicit UpdatesAid(Api *mApi, DcProvider *dcProvider, QObject *parent = 0);
    virtual ~UpdatesAid();
    void waitForResponseInTime(qint32 pts, qint32 date, qint32 qts);

protected Q_SLOTS:
    void onTimeout();
    //void onPong(qint64);
    void onServerAlive();
    void onMainSessionReady();

private:
    static const qint32 TIMEOUT = 5000; // five seconds to get a pong

    Api *mApi;
    DcProvider *mDcProvider;
    QTimer mTimer;
    //QList<qint64> mPendingPings;
    qint32 mPts;
    qint32 mDate;
    qint32 mQts;
};

#endif // KEEPALIVE_H
