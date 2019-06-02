cmake_minimum_required(VERSION 3.10)

add_executable(pomodoro_timer main.cpp)

# External libraries
target_link_libraries(pomodoro_timer
  curses
)