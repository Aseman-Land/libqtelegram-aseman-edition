#ifndef WEBPAGE
#define WEBPAGE

#include <QtGlobal>
#include "photo.h"

class WebPage 
{
public:

    enum WebPageType {
       typeWebPageEmpty = 0xeb1477e8,
       typeWebPagePending = 0xc586da1c,
       typeWebPage = 0xa31ea0b5
    };

    WebPage(WebPageType classType = typeWebPageEmpty) :
        mId(0),
        mDate(0),
        mFlags(0),
        mEmbedWidth(0),
        mEmbedHeight(0),
        mDuration(0),
        mClassType(classType) {}

    qint64 id() const {
        return mId;
    }
    void setId(const qint64 &id) {
        mId = id;
    }

    qint32 date() const {
        return mDate;
    }
    void setDate(const qint32 &date) {
        mDate = date;
    }

    QString url() const {
        return mUrl;
    }
    void setUrl(const QString &url) {
        mUrl = url;
    }

    QString displayUrl() const {
        return mDisplayUrl;
    }
    void setDisplayUrl(const QString &displayUrl) {
        mDisplayUrl = displayUrl;
    }

    qint32 flags() const {
        return mFlags;
    }
    void setFlags(const qint32 &flags) {
        mFlags = flags;
    }

    QString type() const {
        return mType;
    }
    void setType(const QString &type) {
        mType = type;
    }

    QString siteName() const {
        return mSiteName;
    }
    void setSiteName(const QString &siteName) {
        mSiteName = siteName;
    }
    QString title() const {
        return mTitle;
    }
    void setTitle(const QString &title) {
        mTitle = title;
    }

    QString description() const {
        return mDescription;
    }
    void setDescription(const QString &description) {
        mDescription = description;
    }

    Photo photo() const {
        return mPhoto;
    }
    void setPhoto(const Photo &photo) {
        mPhoto = photo;
    }

    QString embedUrl() const {
        return mEmbedUrl;
    }
    void setEmbedUrl(const QString &embedUrl) {
        mEmbedUrl = embedUrl;
    }

    QString embedType() const {
        return mEmbedType;
    }
    void setEmbedType(const QString &embedType) {
        mEmbedType = embedType;
    }

    qint32 embedWidth() const {
        return mEmbedWidth;
    }
    void setEmbedWidth(const qint32 &embedWidth) {
        mEmbedWidth = embedWidth;
    }

    qint32 embedHeight() const {
        return mEmbedHeight;
    }
    void setEmbedHeight(const qint32 &embedHeight) {
        mEmbedHeight = embedHeight;
    }

    qint32 duration() const {
        return mDuration;
    }
    void setDuration(const qint32 &duration) {
        mDuration = duration;
    }

    QString author() const {
        return mAuthor;
    }
    void setAuthor(const QString &author) {
        mAuthor = author;
    }

    void setClassType(WebPageType classType) {
        mClassType = classType;
    }
    WebPageType classType() const {
        return mClassType;
    }

private:
    qint64 mId;
    qint32 mDate;
    QString mUrl;
    QString mDisplayUrl;
    qint32 mFlags;
    QString mType;
    QString mSiteName;
    QString mTitle;
    QString mDescription;
    Photo mPhoto;
    QString mEmbedUrl;
    QString mEmbedType;
    qint32 mEmbedWidth;
    qint32 mEmbedHeight;
    qint32 mDuration;
    QString mAuthor;
    WebPageType mClassType;
};

#endif // WEBPAGE
