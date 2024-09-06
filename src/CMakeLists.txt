set(SOURCES
  main.cpp
  solution.cpp
)

add_executable(aoc ${SOURCES})

target_link_libraries(aoc PUBLIC ${DAY_LIBS} solution)

target_include_directories(aoc PUBLIC ${CMAKE_SOURCE_DIR}/days)
