set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY} ${SOURCES})

llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(${BINARY} ${llvm_libs})

add_library(${BINARY}_lib STATIC ${SOURCES})
