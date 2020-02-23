cmake_minimum_required (VERSION 3.16)
project (RenownProject VERSION 1.0.0)

add_subdirectory (GeminiModule)
add_subdirectory (AtlasModule)
add_subdirectory (Testing)

add_executable(MAIN main.cpp)

target_link_libraries (MAIN PRIVATE 
    GEMINI_MODULE
    ATLAS_MODULE
)