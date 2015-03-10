set(SECRET_HEADERS
    decryptedmessagebuilder.h
    decrypter.h
    encrypter.h
    secretstate.h
    secretchatmessage.h
    secretchat.h)

if(NOT CLICK_MODE)
INSTALL(FILES ${SECRET_HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram/secret)
endif(NOT CLICK_MODE)    

