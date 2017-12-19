cmake_minimum_required(VERSION 2.8.3)
project(hello_world)


find_package(catkin REQUIRED COMPONENTS roscpp)
catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})


add_executable(my_name my_name.cpp)
target_link_libraries(my_name ${catkin_LIBRARIES})

