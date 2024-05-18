
set(COMMON_SRCS
"../def1.cpp"
"../def2.cpp"
"../def3.cpp"
"../def4.cpp"
"../def5.cpp"
"../def6.cpp"
"../def7.cpp"
"../def8.cpp"
)

add_executable(tests test.cpp ${COMMON_SRCS})
target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR})
target_link_libraries(tests PUBLIC gtest gtest_main)