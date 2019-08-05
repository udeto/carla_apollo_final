#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/carla/carla-apollo/nemodrive/catkin_ws/src/carla-apollo-ros-bridge"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/carla/carla-apollo/nemodrive/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/carla/carla-apollo/nemodrive/catkin_ws/install/lib/python2.7/dist-packages:/home/carla/carla-apollo/nemodrive/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/carla/carla-apollo/nemodrive/catkin_ws/build" \
    "/home/carla/virtual_envs/carla/bin/python2" \
    "/home/carla/carla-apollo/nemodrive/catkin_ws/src/carla-apollo-ros-bridge/setup.py" \
    build --build-base "/home/carla/carla-apollo/nemodrive/catkin_ws/build/carla-apollo-ros-bridge" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/carla/carla-apollo/nemodrive/catkin_ws/install" --install-scripts="/home/carla/carla-apollo/nemodrive/catkin_ws/install/bin"