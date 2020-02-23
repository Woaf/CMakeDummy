set (HEADERS
    Atl_Headers/Person.hpp
)

SET (SOURCES 
    Sources/Person.cpp
)

add_library (ATLAS_MODULE
    ${HEADERS}
    ${SOURCES}
)

target_include_directories (
    ATLAS_MODULE 
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}"
)