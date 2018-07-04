# libqtelegram-aseman-edition
Most powerfull telegram library. It created using C++/Qt and supports both client and bots API. It's free and opensource and released under the GPLv3 license.
It's a fork of libqtelegram by Aseman Team which is porting to windows and mac alongside linux support.

### [Developer Documents](documents/start.md)

### How to Compile
#### Install dependencies

Install gcc, g++, openssl, git, Qt5Core, Qt5DBus, Qt5Gui, Qt5Multimedia, Qt5MultimediaQuick_p, Qt5Network, Qt5PrintSupport, Qt5Qml, Qt5Quick, Qt5Sql, Qt5Svg, and Qt5Widgets.
on Ubuntu:

    sudo apt-get install g++ gcc git qtbase5-dev libqt5sql5-sqlite libqt5multimediaquick-p5 libqt5multimedia5-plugins libqt5multimedia5 libqt5qml5 libqt5qml-graphicaleffects libqt5qml-quickcontrols qtdeclarative5-dev libqt5quick5 

on Fedora (tested on Fedora 20):

    yum install qt5-qtbase qt5-qtbase-devel qt5-qtdeclarative qt5-qtquick1 qt5-qtquick1-devel kde-plasma-applicationname kde-plasma-nm qt5-qtdeclarative-devel qt5-qtdeclarative-static qt5-qtgraphicaleffects qt5-qtquickcontrols openssl-devel libappindicator-devel

For other distributions search for the corresponding packages.

#### Get libqtelegram

Get libqtelegram using below command

    git clone https://github.com/Aseman-Land/libqtelegram-aseman-edition.git

#### Configure as Qt Module:

To build libqtelegram as Qt module (You can add libqtelegram to your project using `Qt += telegram` keyword latter) run below qmake command:

```bash
cd libqtelegram-aseman-edition
qmake -r ../telegram.pro
```

#### Configure as normal Library (Deprecated):

    mkdir build && cd build
    qmake -r PREFIX=/usr ../libqtelegram-ae.pro

You can also use below flag to qmake to make qt-objects type available:

    qmake -r PREFIX=/usr CONFIG+=typeobjects ../libqtelegram-ae.pro

####Build and Install:

    make
    sudo make install
