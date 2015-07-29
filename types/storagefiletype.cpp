#include "storagefiletype.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

StorageFileType::StorageFileType(StorageFileTypeType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

StorageFileType::StorageFileType(InboundPkt *in) :
    m_classType(typeStorageFileUnknown)
{
    fetch(in);
}

bool StorageFileType::operator ==(const StorageFileType &b) {
    Q_UNUSED(b);
    return true;
}

void StorageFileType::setClassType(StorageFileType::StorageFileTypeType classType) {
    m_classType = classType;
}

StorageFileType::StorageFileTypeType StorageFileType::classType() const {
    return m_classType;
}

bool StorageFileType::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeStorageFileUnknown: {
        return true;
    }
        break;
    
    case typeStorageFileJpeg: {
        return true;
    }
        break;
    
    case typeStorageFileGif: {
        return true;
    }
        break;
    
    case typeStorageFilePng: {
        return true;
    }
        break;
    
    case typeStorageFilePdf: {
        return true;
    }
        break;
    
    case typeStorageFileMp3: {
        return true;
    }
        break;
    
    case typeStorageFileMov: {
        return true;
    }
        break;
    
    case typeStorageFilePartial: {
        return true;
    }
        break;
    
    case typeStorageFileMp4: {
        return true;
    }
        break;
    
    case typeStorageFileWebp: {
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool StorageFileType::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeStorageFileUnknown: {
        return true;
    }
        break;
    
    case typeStorageFileJpeg: {
        return true;
    }
        break;
    
    case typeStorageFileGif: {
        return true;
    }
        break;
    
    case typeStorageFilePng: {
        return true;
    }
        break;
    
    case typeStorageFilePdf: {
        return true;
    }
        break;
    
    case typeStorageFileMp3: {
        return true;
    }
        break;
    
    case typeStorageFileMov: {
        return true;
    }
        break;
    
    case typeStorageFilePartial: {
        return true;
    }
        break;
    
    case typeStorageFileMp4: {
        return true;
    }
        break;
    
    case typeStorageFileWebp: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

