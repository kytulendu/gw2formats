project(examples)

# Create the executable
add_executable(enumerate-strings src/enumerate-strings.cpp)
add_executable(eula src/eula.cpp)
add_executable(texture-dump src/texture-dump.cpp)
add_executable(bxml2-test src/bxml2-test.cpp)

target_link_libraries(enumerate-strings
    gw2formats
)

target_link_libraries(eula
    gw2formats
)

target_link_libraries(texture-dump
    gw2dattools
    gw2formats
)

target_link_libraries(bxml2-test
    gw2formats
)
