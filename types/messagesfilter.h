#ifndef LQTG_MESSAGESFILTER
#define LQTG_MESSAGESFILTER

#include "telegramtypeobject.h"

class MessagesFilter : public TelegramTypeObject
{
public:
    enum MessagesFilterType {
        typeInputMessagesFilterEmpty = 0x57e2f66c,
        typeInputMessagesFilterPhotos = 0x9609a51c,
        typeInputMessagesFilterVideo = 0x9fc00e65,
        typeInputMessagesFilterPhotoVideo = 0x56e9f0e4,
        typeInputMessagesFilterPhotoVideoDocuments = 0xd95e73bb,
        typeInputMessagesFilterDocument = 0x9eddf188,
        typeInputMessagesFilterAudio = 0xcfc87522
    };

    MessagesFilter(MessagesFilterType classType = typeInputMessagesFilterEmpty, InboundPkt *in = 0);
    MessagesFilter(InboundPkt *in);
    virtual ~MessagesFilter();

    void setClassType(MessagesFilterType classType);
    MessagesFilterType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const MessagesFilter &b);

private:
    MessagesFilterType m_classType;
};

#endif // LQTG_MESSAGESFILTER
