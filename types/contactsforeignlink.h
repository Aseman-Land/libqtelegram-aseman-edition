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

#ifndef CONTACTSFOREIGNLINK_H
#define CONTACTSFOREIGNLINK_H
class ContactsForeignLink
{
public:

    enum ContactsForeignLinkType {
       typeContactsForeignLinkMutual = 0x1bea8ce1,
       typeContactsForeignLinkRequested = 0xa7801f47,
       typeContactsForeignLinkUnknown = 0x133421f8
    };

    ContactsForeignLink(ContactsForeignLinkType classType = typeContactsForeignLinkUnknown) :
        m_hasPhone(false),
        m_classType(classType) {}

    void setHasPhone(bool hasPhone) {
        m_hasPhone = hasPhone;
    }
    bool hasPhone() const {
        return m_hasPhone;
    }
    void setClassType(ContactsForeignLinkType classType) {
        m_classType = classType;
    }
    ContactsForeignLinkType classType() const {
        return m_classType;
    }

private:
    bool m_hasPhone;
    ContactsForeignLinkType m_classType;
};
#endif // CONTACTSFOREIGNLINK_H
