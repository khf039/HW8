cmake_minimum_required(VERSION 2.8.3)
project(pub_sub2)

find_package(catkin REQUIRED roscpp geometry_msgs)

catkin_package()
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(pubvel pubvel.cpp)
add_executable(subpose subpose.cpp)
target_link_libraries(pubvel ${catkin_LIBRARIES})
target_link_libraries(subpose ${catkin_LIBRARIES})

