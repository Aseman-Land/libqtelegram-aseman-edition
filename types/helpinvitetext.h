#ifndef LQTG_HELPINVITETEXT
#define LQTG_HELPINVITETEXT

#include "telegramtypeobject.h"
#include <QString>

class HelpInviteText : public TelegramTypeObject
{
public:
    enum HelpInviteTextType {
        typeHelpInviteText = 0x18cb9f78
    };

    HelpInviteText(HelpInviteTextType classType = typeHelpInviteText, InboundPkt *in = 0);
    HelpInviteText(InboundPkt *in);
    virtual ~HelpInviteText();

    void setMessage(const QString &message);
    QString message() const;

    void setClassType(HelpInviteTextType classType);
    HelpInviteTextType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const HelpInviteText &b);

private:
    QString m_message;
    HelpInviteTextType m_classType;
};

#endif // LQTG_HELPINVITETEXT
