/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Roberto Mier
 *      Tiago Herrmann
 */

#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "photosize.h"
#include "documentattribute.h"

class Document
{
public:

    enum DocumentType {
       typeDocument = 0xf9a39f4f,
       typeDocumentEmpty = 0x36f8c871
    };

    Document(DocumentType classType) :
        m_id(0),
        m_dcId(0),
        m_mimeType(""),
        m_thumb(PhotoSize::typePhotoSizeEmpty),
        m_date(0),
        m_accessHash(0),
        m_size(0),
        m_classType(classType) {}

    void setId(qint64 id) {
        m_id = id;
    }
    qint64 id() const {
        return m_id;
    }
    void setAccessHash(qint64 accessHash) {
        m_accessHash = accessHash;
    }
    qint64 accessHash() const {
        return m_accessHash;
    }
    void setDate(qint32 date) {
        m_date = date;
    }
    qint32 date() const {
        return m_date;
    }
    void setMimeType(const QString & mimeType) {
        m_mimeType = mimeType;
    }
    QString mimeType() const {
        return m_mimeType;
    }
    void setSize(qint32 size) {
        m_size = size;
    }
    qint32 size() const {
        return m_size;
    }
    void setThumb(PhotoSize thumb) {
        m_thumb = thumb;
    }
    PhotoSize thumb() const {
        return m_thumb;
    }
    void setDcId(qint32 dcId) {
        m_dcId = dcId;
    }
    qint32 dcId() const {
        return m_dcId;
    }
    void setAttributes(QList<DocumentAttribute> attrs) {
        m_attributes = attrs;
    }
    QList<DocumentAttribute> attributes() const {
        return m_attributes;
    }
    void setClassType(DocumentType classType) {
        m_classType = classType;
    }
    DocumentType classType() const {
        return m_classType;
    }

private:
    qint64 m_id;
    qint32 m_dcId;
    QString m_mimeType;
    PhotoSize m_thumb;
    qint32 m_date;
    qint64 m_accessHash;
    qint32 m_size;
    QList<DocumentAttribute> m_attributes;
    DocumentType m_classType;
};
#endif // DOCUMENT_H
