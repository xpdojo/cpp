cmake_minimum_required(VERSION 3.23)

include_directories(../lib)

set(UNIT_TEST_LIST
  utility
)

foreach(NAME IN LISTS UNIT_TEST_LIST)
  list(APPEND UNIT_TEST_SOURCE_LIST ${NAME}_test.cpp)
endforeach()

set(TARGET_NAME tests)

add_executable(${TARGET_NAME}
  test_main.cpp
  ${UNIT_TEST_SOURCE_LIST}
)

target_link_libraries(${TARGET_NAME}
  PUBLIC
  utility
)
