execute_process(COMMAND "/home/carla/carla-apollo/nemodrive/catkin_ws/build/carla-apollo-ros-bridge/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/carla/carla-apollo/nemodrive/catkin_ws/build/carla-apollo-ros-bridge/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
