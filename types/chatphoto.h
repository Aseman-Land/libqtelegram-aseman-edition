#ifndef LQTG_CHATPHOTO
#define LQTG_CHATPHOTO

#include "telegramtypeobject.h"
#include "filelocation.h"

class ChatPhoto : public TelegramTypeObject
{
public:
    enum ChatPhotoType {
        typeChatPhotoEmpty = 0x37c1011c,
        typeChatPhoto = 0x6153276a
    };

    ChatPhoto(ChatPhotoType classType = typeChatPhotoEmpty, InboundPkt *in = 0);
    ChatPhoto(InboundPkt *in);
    virtual ~ChatPhoto();

    void setPhotoBig(const FileLocation &photoBig);
    FileLocation photoBig() const;

    void setPhotoSmall(const FileLocation &photoSmall);
    FileLocation photoSmall() const;

    void setClassType(ChatPhotoType classType);
    ChatPhotoType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChatPhoto &b);

private:
    FileLocation m_photoBig;
    FileLocation m_photoSmall;
    ChatPhotoType m_classType;
};

#endif // LQTG_CHATPHOTO
