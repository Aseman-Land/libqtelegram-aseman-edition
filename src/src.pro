TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS = \
    telegram \
    qml

qml.depends += telegram
