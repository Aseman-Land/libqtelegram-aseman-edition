find_package(Qt5Network REQUIRED)
set(CMAKE_AUTOMOC ON)

set(LIB_NAME qtelegram)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-DLIBQTELEGRAM_LIBRARY)
add_library(${LIB_NAME} SHARED
    telegram.cpp
    core/connection.cpp
    core/settings.cpp
    core/inboundpkt.cpp
    core/outboundpkt.cpp
    core/dcprovider.cpp
    core/eventtimer.cpp
    core/api.cpp
    core/query.cpp
    core/eventtimer.cpp
    core/abstractapi.cpp
    core/session.cpp
    core/dcauth.cpp
    core/sessionmanager.cpp
    util/asserter.cpp
    util/cryptoutils.cpp
    util/utils.cpp
    secret/decrypter.cpp
    secret/encrypter.cpp
    secret/secretstate.cpp
    secret/secretchat.cpp
    secret/decryptedmessagebuilder.cpp
    file/filehandler.cpp
    file/downloadfile.cpp
    file/uploadfile.cpp
    file/fileoperation.h
    file/file.h)
set_property(TARGET ${LIB_NAME} PROPERTY COMPILE_FLAGS "${COMPILE_FLAGS} -fpermissive")
set_target_properties(${LIB_NAME} PROPERTIES VERSION ${VERSION} SOVERSION 1)
qt5_use_modules(${LIB_NAME} Network Multimedia)
target_link_libraries(${LIB_NAME} ${OPENSSL_LDFLAGS})

INSTALL(TARGETS ${LIB_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

set(HEADERS
    telegram.h
    libqtelegram_global.h)
if(NOT CLICK_MODE)
INSTALL(FILES ${HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram)
endif(NOT CLICK_MODE)
    
set(PREFIX "${CMAKE_INSTALL_PREFIX}")
set(EXEC_PREFIX "${CMAKE_INSTALL_PREFIX}")
set(LIBDIR "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
set(INCLUDEDIR "${CMAKE_INSTALL_PREFIX}/include/libqtelegram")
CONFIGURE_FILE(
    ${CMAKE_CURRENT_SOURCE_DIR}/qtelegram.pc.in
    ${CMAKE_CURRENT_BINARY_DIR}/qtelegram.pc
    @ONLY)
if(NOT CLICK_MODE)
INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtelegram.pc
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig)
endif(NOT CLICK_MODE)

add_subdirectory(types)
add_subdirectory(core)
add_subdirectory(file)
add_subdirectory(secret)
add_subdirectory(util)

# make the .h files visible on qtcreator
file(GLOB H_FILES *.h **/*.h)
add_custom_target(dot_h_files ALL SOURCES ${H_FILES})
