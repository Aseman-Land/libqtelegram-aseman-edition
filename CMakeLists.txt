project(libqtelegram-ae C CXX)
cmake_minimum_required(VERSION 2.8.10)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Select a pedantic set of compiler flags and enable C++11 support.
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wno-deprecated-register -Wno-extra-semi -Wno-gnu-zero-variadic-macro-arguments -fvisibility=hidden")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -fno-strict-aliasing -fvisibility=hidden -fvisibility-inlines-hidden -Wextra -Wno-deprecated-register -Wno-extra-semi -Wno-gnu-zero-variadic-macro-arguments")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(SO_VERSION_MAJOR "0")
set(SO_VERSION_MINOR "5")
set(SO_VERSION_PATCH "0")
set(SO_VERSION "${SO_VERSION_MAJOR}.${SO_VERSION_MINOR}.${SO_VERSION_PATCH}")

include(GNUInstallDirs)
include(CTest)

# make the .h files visible on qtcreator
file(GLOB_RECURSE H_FILES **/*.h)
add_custom_target(dot_h_files ALL SOURCES ${H_FILES})

#defining library
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Enable handy automoc functionality.
add_definitions(-DQT_NO_KEYWORDS)
add_definitions(-DSERIALIZED_SETTINGS)

find_package(PkgConfig REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Multimedia REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")

include_directories(
    ${OPENSSL_INCLUDE_DIR}/openssl
    ${ZLIB_INCLUDE_DIR}
)

set(LIB_NAME qtelegram-ae)

aux_source_directory(. TG_SRC)
aux_source_directory(core TG_CORE_SRC)
aux_source_directory(file TG_FILES_SRC)
aux_source_directory(secret TG_SECRET_SRC)
aux_source_directory(util TG_UTIL_SRC)
aux_source_directory(telegram TG_TELEGRAM_SRC)
aux_source_directory(telegram/functions TG_TELEGRAM_FUNCTIONS_SRC)
aux_source_directory(telegram/types TG_TELEGRAM_TYPES_SRC)

add_library(${LIB_NAME} SHARED
    ${TG_SRC}
    ${TG_CORE_SRC}
    ${TG_FILES_SRC}
    ${TG_SECRET_SRC}
    ${TG_UTIL_SRC}
    ${TG_TELEGRAM_SRC}
    ${TG_TELEGRAM_FUNCTIONS_SRC}
    ${TG_TELEGRAM_TYPES_SRC}
)

set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${SO_VERSION} SOVERSION ${SO_VERSION_MAJOR}
)

target_link_libraries(${LIB_NAME}
    Qt5::Core
    Qt5::Network
    Qt5::Multimedia
    ${OPENSSL_LIBRARIES}
    ${OPENSSL_LDFLAGS}
    ${ZLIB_LIBRARIES}
)

install(TARGETS ${LIB_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

#.h files
#install(DIRECTORY . DESTINATION include/${PROJECT_NAME} FILES_MATCHING PATTERN "*.h")
file(GLOB ROOT_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file(GLOB CORE_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/core/*.h)
file(GLOB FILE_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/file/*.h)
file(GLOB SECRET_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/secret/*.h)
file(GLOB TELEGRAM_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/telegram/*.h)
file(GLOB TYPES_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/telegram/types/*.h)
file(GLOB FUNCTIONS_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/telegram/functions/*.h)
file(GLOB UTIL_H_FILES ${CMAKE_CURRENT_SOURCE_DIR}/util/*.h)
install(FILES ${ROOT_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME})
install(FILES ${CORE_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/core)
install(FILES ${FILE_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/file)
install(FILES ${SECRET_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/secret)
install(FILES ${TELEGRAM_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/telegram)
install(FILES ${TYPES_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/telegram/types)
install(FILES ${FUNCTIONS_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/telegram/functions)
install(FILES ${UTIL_H_FILES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${LIB_NAME}/util)

# Compose the pkg-config file needed to find the library using that tool
set(PREFIX "${CMAKE_INSTALL_PREFIX}") # /usr
set(LIBDIR "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}") # /usr/lib
set(INCLUDEDIR "${CMAKE_INSTALL_PREFIX}/include") # /usr/include
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/${LIB_NAME}.pc.in
    ${CMAKE_CURRENT_BINARY_DIR}/${LIB_NAME}.pc
    @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${LIB_NAME}.pc
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig)

add_subdirectory(tests)
