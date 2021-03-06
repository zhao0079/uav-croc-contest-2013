/* Auto-generated by genmsg_cpp for file /home/mike/ros/croc_gs/msg/windParameters.msg */
#ifndef CROC_GS_MESSAGE_WINDPARAMETERS_H
#define CROC_GS_MESSAGE_WINDPARAMETERS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace croc_gs
{
template <class ContainerAllocator>
struct windParameters_ {
  typedef windParameters_<ContainerAllocator> Type;

  windParameters_()
  : header()
  , baseVector()
  , minAlpha(0.0)
  , maxAlpha(0.0)
  , minBeta(0.0)
  , maxBeta(0.0)
  , minGamma(0.0)
  , maxGamma(0.0)
  , minKappa(0.0)
  , maxKappa(0.0)
  {
  }

  windParameters_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , baseVector(_alloc)
  , minAlpha(0.0)
  , maxAlpha(0.0)
  , minBeta(0.0)
  , maxBeta(0.0)
  , minGamma(0.0)
  , maxGamma(0.0)
  , minKappa(0.0)
  , maxKappa(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _baseVector_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  baseVector;

  typedef float _minAlpha_type;
  float minAlpha;

  typedef float _maxAlpha_type;
  float maxAlpha;

  typedef float _minBeta_type;
  float minBeta;

  typedef float _maxBeta_type;
  float maxBeta;

  typedef float _minGamma_type;
  float minGamma;

  typedef float _maxGamma_type;
  float maxGamma;

  typedef float _minKappa_type;
  float minKappa;

  typedef float _maxKappa_type;
  float maxKappa;


  typedef boost::shared_ptr< ::croc_gs::windParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::croc_gs::windParameters_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct windParameters
typedef  ::croc_gs::windParameters_<std::allocator<void> > windParameters;

typedef boost::shared_ptr< ::croc_gs::windParameters> windParametersPtr;
typedef boost::shared_ptr< ::croc_gs::windParameters const> windParametersConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::croc_gs::windParameters_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::croc_gs::windParameters_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace croc_gs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::croc_gs::windParameters_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::croc_gs::windParameters_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::croc_gs::windParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ed4849b220add50d51f893f97b23598e";
  }

  static const char* value(const  ::croc_gs::windParameters_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xed4849b220add50dULL;
  static const uint64_t static_value2 = 0x51f893f97b23598eULL;
};

template<class ContainerAllocator>
struct DataType< ::croc_gs::windParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "croc_gs/windParameters";
  }

  static const char* value(const  ::croc_gs::windParameters_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::croc_gs::windParameters_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
\n\
geometry_msgs/Vector3 baseVector\n\
float32 minAlpha\n\
float32 maxAlpha\n\
float32 minBeta\n\
float32 maxBeta\n\
float32 minGamma\n\
float32 maxGamma\n\
float32 minKappa\n\
float32 maxKappa\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::croc_gs::windParameters_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::croc_gs::windParameters_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::croc_gs::windParameters_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::croc_gs::windParameters_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.baseVector);
    stream.next(m.minAlpha);
    stream.next(m.maxAlpha);
    stream.next(m.minBeta);
    stream.next(m.maxBeta);
    stream.next(m.minGamma);
    stream.next(m.maxGamma);
    stream.next(m.minKappa);
    stream.next(m.maxKappa);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct windParameters_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::croc_gs::windParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::croc_gs::windParameters_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "baseVector: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.baseVector);
    s << indent << "minAlpha: ";
    Printer<float>::stream(s, indent + "  ", v.minAlpha);
    s << indent << "maxAlpha: ";
    Printer<float>::stream(s, indent + "  ", v.maxAlpha);
    s << indent << "minBeta: ";
    Printer<float>::stream(s, indent + "  ", v.minBeta);
    s << indent << "maxBeta: ";
    Printer<float>::stream(s, indent + "  ", v.maxBeta);
    s << indent << "minGamma: ";
    Printer<float>::stream(s, indent + "  ", v.minGamma);
    s << indent << "maxGamma: ";
    Printer<float>::stream(s, indent + "  ", v.maxGamma);
    s << indent << "minKappa: ";
    Printer<float>::stream(s, indent + "  ", v.minKappa);
    s << indent << "maxKappa: ";
    Printer<float>::stream(s, indent + "  ", v.maxKappa);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CROC_GS_MESSAGE_WINDPARAMETERS_H

