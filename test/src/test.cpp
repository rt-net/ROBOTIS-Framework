
#include <iostream>
#include "robotis_controller/robotis_controller.h"
#include "test_motion_module.hpp"

int main(int argc, char *argv[])
{
  if(argc < 4){
    std::cerr << "引数が" << argc << "個です。足りません" << std::endl;
    std::cerr << "例: $ ./test test.robot init.yaml offset.yaml" << std::endl;
    return -1;
  }

  robotis_framework::RobotisController *controller = robotis_framework::RobotisController::getInstance();

  std::string robot_file = argv[1];
  std::string init_file = argv[2];
  std::string offset_file = argv[3];

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
