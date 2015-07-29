#ifndef LQTG_DCOPTION
#define LQTG_DCOPTION

#include "telegramtypeobject.h"
#include <QString>
#include <QtGlobal>

class DcOption : public TelegramTypeObject
{
public:
    enum DcOptionType {
        typeDcOption = 0x2ec2a43c
    };

    DcOption(DcOptionType classType = typeDcOption, InboundPkt *in = 0);
    DcOption(InboundPkt *in);
    virtual ~DcOption();

    void setHostname(const QString &hostname);
    QString hostname() const;

    void setId(qint32 id);
    qint32 id() const;

    void setIpAddress(const QString &ipAddress);
    QString ipAddress() const;

    void setPort(qint32 port);
    qint32 port() const;

    void setClassType(DcOptionType classType);
    DcOptionType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const DcOption &b);

private:
    QString m_hostname;
    qint32 m_id;
    QString m_ipAddress;
    qint32 m_port;
    DcOptionType m_classType;
};

#endif // LQTG_DCOPTION
