TEMPLATE = subdirs
SUBDIRS = \
    telegram \
    qml

qml.depends += telegram
