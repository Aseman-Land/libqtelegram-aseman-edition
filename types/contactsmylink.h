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

#ifndef CONTACTSMYLINK_H
#define CONTACTSMYLINK_H
class ContactsMyLink
{
public:

    enum ContactsMyLinkType {
       typeContactsMyLinkRequested = 0x6c69efee,
       typeContactsMyLinkContact = 0xc240ebd9,
       typeContactsMyLinkEmpty = 0xd22a1c60
    };

    ContactsMyLink(ContactsMyLinkType classType = typeContactsMyLinkEmpty) :
        m_contact(0),
        m_classType(classType) {}

    void setContact(bool contact) {
        m_contact = contact;
    }
    bool contact() const {
        return m_contact;
    }
    void setClassType(ContactsMyLinkType classType) {
        m_classType = classType;
    }
    ContactsMyLinkType classType() const {
        return m_classType;
    }

private:
    bool m_contact;
    ContactsMyLinkType m_classType;
};
#endif // CONTACTSMYLINK_H
