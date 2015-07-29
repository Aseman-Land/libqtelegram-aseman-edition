#include "sendmessageaction.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

SendMessageAction::SendMessageAction(SendMessageActionType classType, InboundPkt *in) :
    m_progress(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

SendMessageAction::SendMessageAction(InboundPkt *in) :
    m_progress(0),
    m_classType(typeSendMessageTypingAction)
{
    fetch(in);
}

void SendMessageAction::setProgress(qint32 progress) {
    m_progress = progress;
}

qint32 SendMessageAction::progress() const {
    return m_progress;
}

bool SendMessageAction::operator ==(const SendMessageAction &b) {
    return m_progress == b.m_progress;
}

void SendMessageAction::setClassType(SendMessageAction::SendMessageActionType classType) {
    m_classType = classType;
}

SendMessageAction::SendMessageActionType SendMessageAction::classType() const {
    return m_classType;
}

bool SendMessageAction::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeSendMessageTypingAction: {
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        m_progress = in->fetchInt();
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        m_progress = in->fetchInt();
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        m_progress = in->fetchInt();
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        m_progress = in->fetchInt();
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool SendMessageAction::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeSendMessageTypingAction: {
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

