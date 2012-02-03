/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-electric-multimaster-experimental-0.1.9/debian/ros-electric-multimaster-experimental/opt/ros/electric/stacks/multimaster_experimental/app_manager/msg/AppList.msg */
#ifndef APP_MANAGER_MESSAGE_APPLIST_H
#define APP_MANAGER_MESSAGE_APPLIST_H
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

#include "app_manager/App.h"
#include "app_manager/App.h"

namespace app_manager
{
template <class ContainerAllocator>
struct AppList_ {
  typedef AppList_<ContainerAllocator> Type;

  AppList_()
  : running_apps()
  , available_apps()
  {
  }

  AppList_(const ContainerAllocator& _alloc)
  : running_apps(_alloc)
  , available_apps(_alloc)
  {
  }

  typedef std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other >  _running_apps_type;
  std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other >  running_apps;

  typedef std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other >  _available_apps_type;
  std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other >  available_apps;


  ROS_DEPRECATED uint32_t get_running_apps_size() const { return (uint32_t)running_apps.size(); }
  ROS_DEPRECATED void set_running_apps_size(uint32_t size) { running_apps.resize((size_t)size); }
  ROS_DEPRECATED void get_running_apps_vec(std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other > & vec) const { vec = this->running_apps; }
  ROS_DEPRECATED void set_running_apps_vec(const std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other > & vec) { this->running_apps = vec; }
  ROS_DEPRECATED uint32_t get_available_apps_size() const { return (uint32_t)available_apps.size(); }
  ROS_DEPRECATED void set_available_apps_size(uint32_t size) { available_apps.resize((size_t)size); }
  ROS_DEPRECATED void get_available_apps_vec(std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other > & vec) const { vec = this->available_apps; }
  ROS_DEPRECATED void set_available_apps_vec(const std::vector< ::app_manager::App_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::app_manager::App_<ContainerAllocator> >::other > & vec) { this->available_apps = vec; }
private:
  static const char* __s_getDataType_() { return "app_manager/AppList"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "8a71ede6bf51909653c7c551f462cb30"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "App[] running_apps\n\
App[] available_apps\n\
\n\
================================================================================\n\
MSG: app_manager/App\n\
# app name\n\
string name\n\
# user-friendly display name of application\n\
string display_name\n\
# icon for showing app\n\
Icon icon\n\
# ordered list (by preference) of client applications to interact with this robot app.  \n\
ClientApp[] client_apps\n\
\n\
================================================================================\n\
MSG: app_manager/Icon\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
\n\
================================================================================\n\
MSG: app_manager/ClientApp\n\
# like \"android\" or \"web\" or \"linux\"\n\
string client_type\n\
\n\
# like \"intent = ros.android.teleop\" and \"accelerometer = true\", used to choose which ClientApp to use\n\
KeyValue[] manager_data\n\
\n\
# parameters which just get passed through to the client app.\n\
KeyValue[] app_data\n\
\n\
================================================================================\n\
MSG: app_manager/KeyValue\n\
string key\n\
string value\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, running_apps);
    ros::serialization::serialize(stream, available_apps);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, running_apps);
    ros::serialization::deserialize(stream, available_apps);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(running_apps);
    size += ros::serialization::serializationLength(available_apps);
    return size;
  }

  typedef boost::shared_ptr< ::app_manager::AppList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::AppList_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AppList
typedef  ::app_manager::AppList_<std::allocator<void> > AppList;

typedef boost::shared_ptr< ::app_manager::AppList> AppListPtr;
typedef boost::shared_ptr< ::app_manager::AppList const> AppListConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::app_manager::AppList_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::app_manager::AppList_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace app_manager

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppList_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::app_manager::AppList_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::app_manager::AppList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8a71ede6bf51909653c7c551f462cb30";
  }

  static const char* value(const  ::app_manager::AppList_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8a71ede6bf519096ULL;
  static const uint64_t static_value2 = 0x53c7c551f462cb30ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::AppList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "app_manager/AppList";
  }

  static const char* value(const  ::app_manager::AppList_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::app_manager::AppList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "App[] running_apps\n\
App[] available_apps\n\
\n\
================================================================================\n\
MSG: app_manager/App\n\
# app name\n\
string name\n\
# user-friendly display name of application\n\
string display_name\n\
# icon for showing app\n\
Icon icon\n\
# ordered list (by preference) of client applications to interact with this robot app.  \n\
ClientApp[] client_apps\n\
\n\
================================================================================\n\
MSG: app_manager/Icon\n\
# Image data format.  \"jpeg\" or \"png\"\n\
string format\n\
\n\
# Image data.\n\
uint8[] data\n\
\n\
================================================================================\n\
MSG: app_manager/ClientApp\n\
# like \"android\" or \"web\" or \"linux\"\n\
string client_type\n\
\n\
# like \"intent = ros.android.teleop\" and \"accelerometer = true\", used to choose which ClientApp to use\n\
KeyValue[] manager_data\n\
\n\
# parameters which just get passed through to the client app.\n\
KeyValue[] app_data\n\
\n\
================================================================================\n\
MSG: app_manager/KeyValue\n\
string key\n\
string value\n\
\n\
";
  }

  static const char* value(const  ::app_manager::AppList_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::app_manager::AppList_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.running_apps);
    stream.next(m.available_apps);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AppList_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::AppList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::app_manager::AppList_<ContainerAllocator> & v) 
  {
    s << indent << "running_apps[]" << std::endl;
    for (size_t i = 0; i < v.running_apps.size(); ++i)
    {
      s << indent << "  running_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::App_<ContainerAllocator> >::stream(s, indent + "    ", v.running_apps[i]);
    }
    s << indent << "available_apps[]" << std::endl;
    for (size_t i = 0; i < v.available_apps.size(); ++i)
    {
      s << indent << "  available_apps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::app_manager::App_<ContainerAllocator> >::stream(s, indent + "    ", v.available_apps[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_APPLIST_H
