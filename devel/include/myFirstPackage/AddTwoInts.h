// Generated by gencpp from file myFirstPackage/AddTwoInts.msg
// DO NOT EDIT!


#ifndef MYFIRSTPACKAGE_MESSAGE_ADDTWOINTS_H
#define MYFIRSTPACKAGE_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <myFirstPackage/AddTwoIntsRequest.h>
#include <myFirstPackage/AddTwoIntsResponse.h>


namespace myFirstPackage
{

struct AddTwoInts
{

typedef AddTwoIntsRequest Request;
typedef AddTwoIntsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInts
} // namespace myFirstPackage


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::myFirstPackage::AddTwoInts > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::myFirstPackage::AddTwoInts&) { return value(); }
};

template<>
struct DataType< ::myFirstPackage::AddTwoInts > {
  static const char* value()
  {
    return "myFirstPackage/AddTwoInts";
  }

  static const char* value(const ::myFirstPackage::AddTwoInts&) { return value(); }
};


// service_traits::MD5Sum< ::myFirstPackage::AddTwoIntsRequest> should match
// service_traits::MD5Sum< ::myFirstPackage::AddTwoInts >
template<>
struct MD5Sum< ::myFirstPackage::AddTwoIntsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::myFirstPackage::AddTwoInts >::value();
  }
  static const char* value(const ::myFirstPackage::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::myFirstPackage::AddTwoIntsRequest> should match
// service_traits::DataType< ::myFirstPackage::AddTwoInts >
template<>
struct DataType< ::myFirstPackage::AddTwoIntsRequest>
{
  static const char* value()
  {
    return DataType< ::myFirstPackage::AddTwoInts >::value();
  }
  static const char* value(const ::myFirstPackage::AddTwoIntsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::myFirstPackage::AddTwoIntsResponse> should match
// service_traits::MD5Sum< ::myFirstPackage::AddTwoInts >
template<>
struct MD5Sum< ::myFirstPackage::AddTwoIntsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::myFirstPackage::AddTwoInts >::value();
  }
  static const char* value(const ::myFirstPackage::AddTwoIntsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::myFirstPackage::AddTwoIntsResponse> should match
// service_traits::DataType< ::myFirstPackage::AddTwoInts >
template<>
struct DataType< ::myFirstPackage::AddTwoIntsResponse>
{
  static const char* value()
  {
    return DataType< ::myFirstPackage::AddTwoInts >::value();
  }
  static const char* value(const ::myFirstPackage::AddTwoIntsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MYFIRSTPACKAGE_MESSAGE_ADDTWOINTS_H
