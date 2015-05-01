set (CORE_HEADERS
    abstractapi.h
    api.h
    connection.h
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
    settings.h)

if(NOT CLICK_MODE)
INSTALL(FILES ${CORE_HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram/core)
endif(NOT CLICK_MODE)
    
