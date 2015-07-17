#ifndef SENDMESSAGEACTION_H
#define SENDMESSAGEACTION_H

#include <QtGlobal>

class SendMessageAction {

public:

    enum SendMessageActionType {
        typeSendMessageTypingAction = 0x16bf744e,
        typeSendMessageCancelAction = 0xfd5ec8f5,
        typeSendMessageRecordVideoAction = 0xa187d66f,
        typeSendMessageUploadVideoAction = 0xe9763aec,
        typeSendMessageRecordAudioAction = 0xd52f73f7,
        typeSendMessageUploadAudioAction = 0xf351d7ab,
        typeSendMessageUploadPhotoAction = 0xd1d34a26,
        typeSendMessageUploadDocumentAction = 0xaa0cd9e4,
        typeSendMessageGeoLocationAction = 0x176f8ba1,
        typeSendMessageChooseContactAction = 0x628cbc6f
    };

    SendMessageAction(SendMessageActionType classType = typeSendMessageCancelAction) :
        m_progress(0),
        mClassType(classType) {
    }

    qint32 progress() const {
        return m_progress;
    }
    void setProgress(const qint32 &progress) {
        m_progress = progress;
    }
    void setClassType(SendMessageActionType classType) {
        mClassType = classType;
    }
    SendMessageActionType classType() const {
        return mClassType;
    }

private:
    qint32 m_progress;
    SendMessageActionType mClassType;
};

#endif // SENDMESSAGEACTION_H
