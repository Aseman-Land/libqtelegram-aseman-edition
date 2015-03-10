set(FILE_HEADERS
    file.h
    downloadfile.h
    filehandler.h
    fileoperation.h
    uploadfile.h)

if(NOT CLICK_MODE)
INSTALL(FILES ${FILE_HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libqtelegram/file)
endif(NOT CLICK_MODE)    
