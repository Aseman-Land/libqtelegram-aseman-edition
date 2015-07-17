#ifndef RECEIVEDNOTIFYMESSAGE
#define RECEIVEDNOTIFYMESSAGE

#include <QtGlobal>

class ReceivedNotifyMessage
{
public:

    enum ReceivedNotifyMessageType {
       typeReceivedNotifyMessage = 0xa384b779
    };

    ReceivedNotifyMessage(ReceivedNotifyMessageType classType) :
        m_id(0),
        m_flags(0),
        m_classType(typeReceivedNotifyMessage) {}

    qint32 id() const {
        return m_id;
    }
    void setId(const qint32 &id) {
        m_id = id;
    }
    qint32 flags() const {
        return m_flags;
    }
    void setFlags(const qint32 &flags) {
        m_flags = flags;
    }
    void setClassType(ReceivedNotifyMessageType classType) {
        m_classType = classType;
    }
    ReceivedNotifyMessageType classType() const {
        return m_classType;
    }

private:
    qint32 m_id;
    qint32 m_flags;
    ReceivedNotifyMessageType m_classType;
};

#endif // RECEIVEDNOTIFYMESSAGE


