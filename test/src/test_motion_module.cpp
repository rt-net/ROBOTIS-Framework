
#include <iostream>
#include "test_motion_module.hpp"

namespace test
{

TestMotionModule::TestMotionModule()
  : control_cycle_msec_(8)
{
  enable_       = false;
  module_name_  = "test_motion_module";
  control_mode_ = robotis_framework::PositionControl;

  result_["joint5"] = new robotis_framework::DynamixelState();
  result_["joint6"] = new robotis_framework::DynamixelState();
  result_["joint7"] = new robotis_framework::DynamixelState();
}

TestMotionModule::~TestMotionModule()
{
}

void TestMotionModule::initialize(const int control_cycle_msec, robotis_framework::Robot *robot)
{
  control_cycle_msec_ = control_cycle_msec;
}

void TestMotionModule::process(std::map<std::string, robotis_framework::Dynamixel *> dxls,
                                   std::map<std::string, double> sensors)
{
  if (enable_ == false)
    return;

  for (std::map<std::string, robotis_framework::DynamixelState *>::iterator state_iter = result_.begin(); state_iter != result_.end();
      state_iter++)
  {
    int32_t p_pos = dxls[state_iter->first]->dxl_state_->present_position_;
    int32_t g_pos = dxls[state_iter->first]->dxl_state_->goal_position_;
  }

  // ...

  result_["joint5"]->goal_position_ = 0;
  result_["joint6"]->goal_position_ = 0;
  result_["joint7"]->goal_position_ = 0;
}

void TestMotionModule::stop()
{
  return;
}

bool TestMotionModule::isRunning()
{
  return false;
}

}
