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

#ifndef INPUTMEDIA_H
#define INPUTMEDIA_H

#include "inputaudio.h"
#include "inputphoto.h"
#include "inputdocument.h"
#include "inputvideo.h"
#include "inputfile.h"
#include "inputgeopoint.h"
#include "documentattribute.h"

class InputMedia
{
public:

    enum InputMediaType {
       typeInputMediaUploadedDocument = 0xffe76b78,
       typeInputMediaVideo = 0x936a4ebd,
       typeInputMediaUploadedThumbDocument = 0x41481486,
       typeInputMediaUploadedPhoto = 0xf7aff1c0,
       typeInputMediaDocument = 0xd184e841,
       typeInputMediaUploadedThumbVideo = 0x96fb97dc,
       typeInputMediaUploadedVideo = 0xe13fd4bc,
       typeInputMediaUploadedAudio = 0x4e498cab,
       typeInputMediaGeoPoint = 0xf9c44144,
       typeInputMediaPhoto = 0xe9bfb4f3,
       typeInputMediaEmpty = 0x9664f57f,
       typeInputMediaContact = 0xa6e45987,
       typeInputMediaAudio = 0x89938781,
       typeInputMediaVenue = 0x2827a81a
    };

    InputMedia(InputMediaType classType) :
        m_audioId(InputAudio::typeInputAudioEmpty),
        m_photoId(InputPhoto::typeInputPhotoEmpty),
        m_videoId(InputVideo::typeInputVideoEmpty),
        m_documentId(InputDocument::typeInputDocumentEmpty),
        m_firstName(""),
        m_mimeType(""),
        m_file(InputFile::typeInputFile),
        m_thumb(InputFile::typeInputFile),
        m_geoPoint(InputGeoPoint::typeInputGeoPointEmpty),
        m_duration(0),
        m_h(0),
        m_phoneNumber(""),
        m_w(0),
        m_lastName(""),
        m_classType(classType) {}

    void setFile(const InputFile &file) { m_file = file; }
    InputFile file() const { return m_file; }
    void setMimeType(const QString & mimeType) { m_mimeType = mimeType; }
    QString mimeType() const { return m_mimeType; }
    void setPhotoId(const InputPhoto &photoId) { m_photoId = photoId; }
    InputPhoto photoId() const { return m_photoId; }
    void setAudioId(const InputAudio &audioId) { m_audioId = audioId; }
    InputAudio audioId() const { return m_audioId; }
    void setVideoId(const InputVideo &videoId) { m_videoId = videoId; }
    InputVideo videoId() const { return m_videoId; }
    void setDocumentId(const InputDocument &documentId) { m_documentId = documentId; }
    InputDocument documentId() const { return m_documentId; }
    void setThumb(const InputFile &thumb) { m_thumb = thumb; }
    InputFile thumb() const { return m_thumb; }
    void setDuration(qint32 duration) { m_duration = duration; }
    qint32 duration() const { return m_duration; }
    void setW(qint32 w) { m_w = w; }
    qint32 w() const { return m_w; }
    void setH(qint32 h) { m_h = h; }
    qint32 h() const { return m_h; }
    void setGeoPoint(const InputGeoPoint &geoPoint) { m_geoPoint = geoPoint; }
    InputGeoPoint geoPoint() const { return m_geoPoint; }
    void setPhoneNumber(const QString & phoneNumber) { m_phoneNumber = phoneNumber; }
    QString phoneNumber() const { return m_phoneNumber; }
    void setFirstName(const QString & firstName) { m_firstName = firstName; }
    QString firstName() const { return m_firstName; }
    void setLastName(const QString & lastName) { m_lastName = lastName; }
    QString lastName() const { return m_lastName; }
    void setAttributes(QList<DocumentAttribute> attrs) { m_attributes = attrs; }
    QString caption() const { return m_caption; }
    void setCaption(const QString &caption) { m_caption = caption; }
    QList<DocumentAttribute> attributes() const { return m_attributes; }
    QString address() const { return m_address; }
    void setAddress(const QString &address) { m_address = address; }
    QString title() const { return m_title; }
    void setTitle(const QString &title) { m_title = title; }
    QString provider() const { return m_provider; }
    void setProvider(const QString &provider) { m_provider = provider; }
    QString venueId() const { return m_venueId; }
    void setVenueId(const QString &venueId) { m_venueId = venueId; }
    void setClassType(InputMediaType classType) { m_classType = classType; }
    InputMediaType classType() const { return m_classType; }

private:
    InputAudio m_audioId;
    InputPhoto m_photoId;
    InputVideo m_videoId;
    InputDocument m_documentId;
    QList<DocumentAttribute> m_attributes;
    QString m_firstName;
    QString m_mimeType;
    QString m_caption;
    InputFile m_file;
    InputFile m_thumb;
    InputGeoPoint m_geoPoint;
    qint32 m_duration;
    qint32 m_h;
    QString m_phoneNumber;
    qint32 m_w;
    QString m_lastName;
    QString m_address;
    QString m_title;
    QString m_provider;
    QString m_venueId;
    InputMediaType m_classType;
};
#endif // INPUTMEDIA_H
