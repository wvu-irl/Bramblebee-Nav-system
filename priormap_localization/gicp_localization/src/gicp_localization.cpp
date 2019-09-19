#include <ros/ros.h>
#include <gicp_localization/GICPLocalization.h>

int main(int argc, char** argv){
	ros::init(argc, argv, "gicp_localization_node");
	ros::NodeHandle n("~");

	GICPLocalization gicplocalization;
	if(!gicplocalization.Initialize(n)){
		ROS_ERROR("%s: Failed to initialize gicp localization.",
			ros::this_node::getName().c_str());
		return EXIT_FAILURE;
	}
	ros::spin();

	return EXIT_SUCCESS;
}