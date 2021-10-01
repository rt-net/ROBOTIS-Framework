
#include <iostream>
#include "robotis_controller/robotis_controller.h"
#include "test_motion_module.hpp"

int main()
{
  test::TestMotionModule module;

  robotis_framework::RobotisController *controller = robotis_framework::RobotisController::getInstance();

  std::string offset_file = "offset_file.csv";
  std::string robot_file = "robot_file.csv";
  std::string init_file = "init_file.csv";

  if (robot_file == "")
  {
    std::cerr<<("NO robot file path in the ROS parameters.")<<std::endl;
    return -1;
  }

  if (controller->initialize(robot_file, init_file) == false)
  {
    std::cerr<<("ROBOTIS Controller Initialize Fail!")<<std::endl;
    return -1;
  }

  if (offset_file != "")
    controller->loadOffset(offset_file);

  sleep(1);

  /* Add Motion Module*/
  controller->addMotionModule((robotis_framework::MotionModule *)test::TestMotionModule::getInstance());
  controller->startTimer();

  while (true)
  {
    usleep(1000 * 1000);
  }
  return 0;
}
