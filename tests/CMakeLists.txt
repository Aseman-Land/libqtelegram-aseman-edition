# There is a known issue with initializing a pthread mutex in gtest.
# Disable the respective warning selectively for tests only.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-missing-field-initializers")

# Build with system gmock and embedded gtest
set (GMOCK_INCLUDE_DIR "/usr/include/gmock/include" CACHE PATH "gmock source include directory")
set (GMOCK_SOURCE_DIR "/usr/src/gmock" CACHE PATH "gmock source directory")
set (GTEST_INCLUDE_DIR "${GMOCK_SOURCE_DIR}/gtest/include" CACHE PATH "gtest source include directory")
set (GMOCK_BOTH_LIBRARIES gmock gmock_main)
add_subdirectory(${GMOCK_SOURCE_DIR} "${CMAKE_CURRENT_BINARY_DIR}/gmock")

include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}

    # Exposing implementation-specific header files to
    # test cases.
    ${CMAKE_SOURCE_DIR}

    ${GMOCK_INCLUDE_DIR}
    ${GTEST_INCLUDE_DIR}
)

configure_file(tests_config.cpp.in tests_config.cpp)

add_subdirectory(unit)
