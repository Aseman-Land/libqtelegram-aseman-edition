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
#ifndef ASSERTER_H
#define ASSERTER_H

#include <QObject>

class Asserter : public QObject
{
    Q_OBJECT
public:
    explicit Asserter(QObject *parent = 0);

    void check(bool condition);

Q_SIGNALS:
    void fatalError();
};

#endif // ASSERTER_H
