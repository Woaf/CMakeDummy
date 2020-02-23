set (HEADERS
    Gem_Headers/Wolf.hpp
)

set (SOURCES 
    Sources/Wolf.cpp
)

add_library (GEMINI_MODULE
    ${HEADERS}
    ${SOURCES}
)

target_include_directories (
    GEMINI_MODULE 
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}"
)
