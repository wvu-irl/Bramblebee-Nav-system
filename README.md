This repository is the ros package for 

"Localization Algorithm Design and Evaluationfor an Autonomous Pollination Robot"

pblished in ION GNSS+ 2019


Run it:

roslaunch aloam_velodyne aloam_velodyne_HDL_32.launch

roslaunch nav_filter test_online.launch

roslaunch gicp_localization test_online.launch

rosbag play --pause --clock file.bag

Result:

<img src="https://github.com/wvu-irl/Bramblebee-Nav-system/blob/master/farm_rviz.png" width = 55% height = 55%/>

Thanks for LOAM(J. Zhang and S. Singh. LOAM: Lidar Odometry and Mapping in Real-time) and [Advanced implementation of LOAM](https://github.com/HKUST-Aerial-Robotics/A-LOAM).
