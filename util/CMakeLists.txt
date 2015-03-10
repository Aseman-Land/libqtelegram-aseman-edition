set(UTIL_HEADERS
    asserter.h
    constants.h
    cryptoutils.h
    tlvalues.h
    utils.h)

if(NOT CLICK_MODE)
INSTALL(FILES ${UTIL_HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram/util)
endif(NOT CLICK_MODE)    

