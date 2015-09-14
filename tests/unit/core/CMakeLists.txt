# Adding the current source dir as it is required when
# compiling the testing framework.
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(settings-test
    settings_test.cpp
    ${CMAKE_BINARY_DIR}/tests/tests_config.cpp
)

add_test(settings-test settings-test)
target_link_libraries(settings-test qtelegram-ae gmock gmock_main)
