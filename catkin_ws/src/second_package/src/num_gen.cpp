#include "ros/ros.h"
#include "std_msgs/Int64.h"
#include "my_roscpp_library/my_super_roscpp_library.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "num_gen");
    ros::NodeHandle n;
    ros::Rate loop_rate(20);
    while (ros::ok()) {
        ROS_INFO("%d", 3);
        sayHello();
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}