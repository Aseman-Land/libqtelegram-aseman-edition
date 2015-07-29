#include "messagesfilter.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

MessagesFilter::MessagesFilter(MessagesFilterType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesFilter::MessagesFilter(InboundPkt *in) :
    m_classType(typeInputMessagesFilterEmpty)
{
    fetch(in);
}

bool MessagesFilter::operator ==(const MessagesFilter &b) {
    Q_UNUSED(b);
    return true;
}

void MessagesFilter::setClassType(MessagesFilter::MessagesFilterType classType) {
    m_classType = classType;
}

MessagesFilter::MessagesFilterType MessagesFilter::classType() const {
    return m_classType;
}

bool MessagesFilter::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeInputMessagesFilterEmpty: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotos: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideoDocuments: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterDocument: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterAudio: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesFilter::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputMessagesFilterEmpty: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotos: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideo: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterPhotoVideoDocuments: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterDocument: {
        return true;
    }
        break;
    
    case typeInputMessagesFilterAudio: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

