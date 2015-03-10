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

#ifndef CONTACTSLINK_H
#define CONTACTSLINK_H

#include "contactsforeignlink.h"
#include "contactsmylink.h"
#include "user.h"

class ContactsLink
{
public:

    enum ContactsLinkType {
       typeContactsLink = 0xeccea3f5
    };

    ContactsLink() :
        m_foreignLink(ContactsForeignLink::typeContactsForeignLinkUnknown),
        m_myLink(ContactsMyLink::typeContactsMyLinkEmpty),
        m_user(User::typeUserEmpty),
        m_classType(typeContactsLink) {}

    ~ContactsLink() {}

    void setMyLink(ContactsMyLink myLink) {
        m_myLink = myLink;
    }
    ContactsMyLink myLink() const {
        return m_myLink;
    }
    void setForeignLink(ContactsForeignLink foreignLink) {
        m_foreignLink = foreignLink;
    }
    ContactsForeignLink foreignLink() const {
        return m_foreignLink;
    }
    void setUser(User user) {
        m_user = user;
    }
    User user() const {
        return m_user;
    }
    void setClassType(ContactsLinkType classType) {
        m_classType = classType;
    }
    ContactsLinkType classType() const {
        return m_classType;
    }

private:
    ContactsForeignLink m_foreignLink;
    ContactsMyLink m_myLink;
    User m_user;
    ContactsLinkType m_classType;
};
#endif // CONTACTSLINK_H
