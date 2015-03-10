set (CORE_HEADERS
    abstractapi.h
    api.h
    asserter.h
    connection.h
    constants.h
    cryptoutils.h
    dc.h
    dcauth.h
    dcprovider.h
    endpoint.h
    eventtimer.h
    inboundpkt.h
    outboundpkt.h
    query.h
    querymethods.h
    session.h
    sessionmanager.h
    settings.h
    tlvalues.h
    utils.h)

if(NOT CLICK_MODE)
INSTALL(FILES ${CORE_HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram/core)
endif(NOT CLICK_MODE)
    
