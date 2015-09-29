find_package(Qt5Test)

# Adding the current source dir as it is required when
# compiling the testing framework.
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(login-test
    login_test.cpp
    ${CMAKE_BINARY_DIR}/tests/tests_config.cpp
)

add_test(login-test login-test)
target_link_libraries(login-test qtelegram-ae Qt5::Test gmock gmock_main)
