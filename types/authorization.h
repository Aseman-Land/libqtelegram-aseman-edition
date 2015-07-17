#ifndef AUTHORIZATION
#define AUTHORIZATION

#include <QtGlobal>

class Authorization 
{
public:

    enum AuthorizationType {
       typeAuthorization = 0x7bf2e6f6
    };

    Authorization() :
        mHash(0),
        mFlags(0),
        mApiId(0),
        mDateCreated(0),
        mDateActive(0),
        mClassType(typeAuthorization) {}

    qint64 hash() const {
        return mHash;
    }
    void setHash(const qint64 &hash) {
        mHash = hash;
    }
    qint32 flags() const {
        return mFlags;
    }
    void setFlags(const qint32 &flags) {
        mFlags = flags;
    }
    QString deviceModel() const {
        return mDeviceModel;
    }
    void setDeviceModel(const QString &deviceModel) {
        mDeviceModel = deviceModel;
    }
    QString platform() const {
        return mPlatform;
    }
    void setPlatform(const QString &platform) {
        mPlatform = platform;
    }
    QString systemVersion() const {
        return mSystemVersion;
    }
    void setSystemVersion(const QString &systemVersion) {
        mSystemVersion = systemVersion;
    }
    qint32 apiId() const {
        return mApiId;
    }
    void setApiId(const qint32 &apiId) {
        mApiId = apiId;
    }
    QString appName() const {
        return mAppName;
    }
    void setAppName(const QString &appName) {
        mAppName = appName;
    }
    QString appVersion() const {
        return mAppVersion;
    }
    void setAppVersion(const QString &appVersion) {
        mAppVersion = appVersion;
    }
    qint32 dateCreated() const {
        return mDateCreated;
    }
    void setDateCreated(const qint32 &dateCreated) {
        mDateCreated = dateCreated;
    }
    qint32 dateActive() const {
        return mDateActive;
    }
    void setDateActive(const qint32 &dateActive) {
        mDateActive = dateActive;
    }
    QString ip() const {
        return mIp;
    }
    void setIp(const QString &ip) {
        mIp = ip;
    }
    QString country() const {
        return mCountry;
    }
    void setCountry(const QString &country) {
        mCountry = country;
    }
    QString region() const {
        return mRegion;
    }
    void setRegion(const QString &region) {
        mRegion = region;
    }
    void setClassType(AuthorizationType classType) {
        mClassType = classType;
    }
    AuthorizationType classType() const {
        return mClassType;
    }

private:
    qint64 mHash;
    qint32 mFlags;
    QString mDeviceModel;
    QString mPlatform;
    QString mSystemVersion;
    qint32 mApiId;
    QString mAppName;
    QString mAppVersion;
    qint32 mDateCreated;
    qint32 mDateActive;
    QString mIp;
    QString mCountry;
    QString mRegion;
    AuthorizationType mClassType;
};

#endif // AUTHORIZATION

