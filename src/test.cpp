#include "ros/ros.h"
#include "sensor_msgs/Image.h"
#include <sstream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#define flag 1
void ImageCallBack(sensor_mags :: Image :: ConstPtr& msg)
{
  ROS_INFO("I heard: %d", msg->data[1]);
}
void main(int arg, char** argv)
{
  ros::init(argc, argv, "test");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("/cameras/head_camera/image", 1000, ImageCallback);
  ros::spin();
  return 0;
}
