#ifndef EXPORTEDCHATINVITE
#define EXPORTEDCHATINVITE

#include <QtGlobal>

class ExportedChatInvite
{
public:

    enum ExportedChatInviteType {
       typeChatInviteEmpty = 0x69df3769,
       typeChatInviteExported = 0xfc2e05bc
    };

    ExportedChatInvite(ExportedChatInviteType classType) :
        m_classType(classType) {}

    QString link() const {
        return m_link;
    }
    void setLink(const QString &link) {
        m_link = link;
    }
    qint32 chatId() const {
        return m_chatId;
    }
    void setClassType(ExportedChatInviteType classType) {
        m_classType = classType;
    }
    ExportedChatInviteType classType() const {
        return m_classType;
    }

private:
    QString m_link;
    ExportedChatInviteType m_classType;
};

#endif // EXPORTEDCHATINVITE
