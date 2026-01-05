add_executable(${PROJECT_NAME} main.cpp)
# target_sources(${PROJECT_NAME} aux.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE vendor)
