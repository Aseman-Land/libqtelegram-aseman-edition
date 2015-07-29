#include "uploadfile.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"

UploadFile::UploadFile(UploadFileType classType, InboundPkt *in) :
    m_mtime(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

UploadFile::UploadFile(InboundPkt *in) :
    m_mtime(0),
    m_classType(typeUploadFile)
{
    fetch(in);
}

void UploadFile::setBytes(const QByteArray &bytes) {
    m_bytes = bytes;
}

QByteArray UploadFile::bytes() const {
    return m_bytes;
}

void UploadFile::setMtime(qint32 mtime) {
    m_mtime = mtime;
}

qint32 UploadFile::mtime() const {
    return m_mtime;
}

void UploadFile::setType(const StorageFileType &type) {
    m_type = type;
}

StorageFileType UploadFile::type() const {
    return m_type;
}

bool UploadFile::operator ==(const UploadFile &b) {
    return m_bytes == b.m_bytes &&
           m_mtime == b.m_mtime &&
           m_type == b.m_type;
}

void UploadFile::setClassType(UploadFile::UploadFileType classType) {
    m_classType = classType;
}

UploadFile::UploadFileType UploadFile::classType() const {
    return m_classType;
}

bool UploadFile::fetch(InboundPkt *in) {

    int x = in->fetchInt();
    switch(x) {
    case typeUploadFile: {
        m_type.fetch(in);
        m_mtime = in->fetchInt();
        m_bytes = in->fetchBytes();
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool UploadFile::push(OutboundPkt *out) const {

    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUploadFile: {
        m_type.push(out);
        out->appendInt(m_mtime);
        out->appendBytes(m_bytes);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

