add_subdirectory (googletest)

enable_testing()

set (SOURCES
    PersonTest.cpp
    WolfTest.cpp
)

add_executable (TESTING_MODULE
    ${SOURCES}
)

target_link_libraries (TESTING_MODULE PUBLIC 
    GEMINI_MODULE
    ATLAS_MODULE
    gtest_main
    gmock
)

add_test(
    NAME TESTING_MODULE
    COMMAND TESTING_MODULE
)