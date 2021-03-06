# game_project/CMakeLists.txt
# Created by Tushar Gupta 2019-01-24
# License MIT open source

cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(Project game_project)
project(${Project})
enable_testing()
file(STRINGS sources.cmake SOURCES)

add_executable(game_project ${SOURCES} game_project.cpp)
if(NOT WIN32 AND NOT APPLE)
  target_link_libraries(game_project rt pthread)
endif(NOT WIN32 AND NOT APPLE)

add_executable(test_Card ${SOURCES} test/test_Card.cpp)
add_test(test_Card test_Card)
add_executable(test_Hand ${SOURCES} test/test_Hand.cpp)
add_test(test_Hand test_Hand)
add_executable(test_Deck ${SOURCES} test/test_Deck.cpp)
add_test(test_Deck test_Deck)
add_executable(test_Player ${SOURCES} test/test_Player.cpp)
add_test(test_Player test_Player)
add_executable(test_Dealer ${SOURCES} test/test_Dealer.cpp)
add_test(test_Dealer test_Dealer)
add_executable(test_Table ${SOURCES} test/test_Table.cpp)
add_test(test_Table test_Table)
add_executable(test_Chip ${SOURCES} test/test_Chip.cpp)
add_test(test_Chip test_Chip)
add_executable(test_Seat ${SOURCES} test/test_Seat.cpp)
add_test(test_Seat test_Seat)
add_executable(test_Bank ${SOURCES} test/test_Bank.cpp)
add_test(test_Bank test_Bank)
add_executable(test_Pot ${SOURCES} test/test_Pot.cpp)
add_test(test_Pot test_Pot)
add_executable(game_server ${SOURCES} game_server.cpp)
if(NOT WIN32 AND NOT APPLE)
  target_link_libraries(game_server rt pthread)
endif(NOT WIN32 AND NOT APPLE)

