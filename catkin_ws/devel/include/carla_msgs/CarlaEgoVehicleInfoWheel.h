// Generated by gencpp from file carla_msgs/CarlaEgoVehicleInfoWheel.msg
// DO NOT EDIT!


#ifndef CARLA_MSGS_MESSAGE_CARLAEGOVEHICLEINFOWHEEL_H
#define CARLA_MSGS_MESSAGE_CARLAEGOVEHICLEINFOWHEEL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace carla_msgs
{
template <class ContainerAllocator>
struct CarlaEgoVehicleInfoWheel_
{
  typedef CarlaEgoVehicleInfoWheel_<ContainerAllocator> Type;

  CarlaEgoVehicleInfoWheel_()
    : tire_friction(0.0)
    , damping_rate(0.0)
    , steer_angle(0.0)
    , disable_steering(false)  {
    }
  CarlaEgoVehicleInfoWheel_(const ContainerAllocator& _alloc)
    : tire_friction(0.0)
    , damping_rate(0.0)
    , steer_angle(0.0)
    , disable_steering(false)  {
  (void)_alloc;
    }



   typedef float _tire_friction_type;
  _tire_friction_type tire_friction;

   typedef float _damping_rate_type;
  _damping_rate_type damping_rate;

   typedef float _steer_angle_type;
  _steer_angle_type steer_angle;

   typedef uint8_t _disable_steering_type;
  _disable_steering_type disable_steering;





  typedef boost::shared_ptr< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const> ConstPtr;

}; // struct CarlaEgoVehicleInfoWheel_

typedef ::carla_msgs::CarlaEgoVehicleInfoWheel_<std::allocator<void> > CarlaEgoVehicleInfoWheel;

typedef boost::shared_ptr< ::carla_msgs::CarlaEgoVehicleInfoWheel > CarlaEgoVehicleInfoWheelPtr;
typedef boost::shared_ptr< ::carla_msgs::CarlaEgoVehicleInfoWheel const> CarlaEgoVehicleInfoWheelConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace carla_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'carla_msgs': ['/home/carla/carla-apollo/nemodrive/catkin_ws/src/carla_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "73e85d22cc2145b0a4cf17f2e801c1dd";
  }

  static const char* value(const ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x73e85d22cc2145b0ULL;
  static const uint64_t static_value2 = 0xa4cf17f2e801c1ddULL;
};

template<class ContainerAllocator>
struct DataType< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "carla_msgs/CarlaEgoVehicleInfoWheel";
  }

  static const char* value(const ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n"
"# Copyright (c) 2019 Intel Coporation.\n"
"#\n"
"# This work is licensed under the terms of the MIT license.\n"
"# For a copy, see <https://opensource.org/licenses/MIT>.\n"
"#\n"
"float32 tire_friction\n"
"float32 damping_rate\n"
"float32 steer_angle\n"
"bool disable_steering\n"
;
  }

  static const char* value(const ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tire_friction);
      stream.next(m.damping_rate);
      stream.next(m.steer_angle);
      stream.next(m.disable_steering);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarlaEgoVehicleInfoWheel_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::carla_msgs::CarlaEgoVehicleInfoWheel_<ContainerAllocator>& v)
  {
    s << indent << "tire_friction: ";
    Printer<float>::stream(s, indent + "  ", v.tire_friction);
    s << indent << "damping_rate: ";
    Printer<float>::stream(s, indent + "  ", v.damping_rate);
    s << indent << "steer_angle: ";
    Printer<float>::stream(s, indent + "  ", v.steer_angle);
    s << indent << "disable_steering: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_steering);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARLA_MSGS_MESSAGE_CARLAEGOVEHICLEINFOWHEEL_H