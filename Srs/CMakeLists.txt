file(GLOB SOURCES animal.cpp)
file(GLOB SOURCES gatito.cpp)

add_library(animal_lib ${SOURCES})
add_library(gatito_lib ${SOURCES})

target_link_libraries(gatito_lib animal_lib)
