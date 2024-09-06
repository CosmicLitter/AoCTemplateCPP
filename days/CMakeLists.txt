# Add additional days here after creating their respective directories
set(DAYS
  day01
)

foreach(day ${DAYS})
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${day})
    file(GLOB DAY_SOURCES ${day}/*.cpp ${day}/*.h)
    add_library(${day} STATIC ${DAY_SOURCES})
    target_include_directories(${day} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/${day})
    target_link_libraries(${day} PUBLIC solution)
  endif()
endforeach()

set(DAY_LIBS ${DAYS} PARENT_SCOPE)
