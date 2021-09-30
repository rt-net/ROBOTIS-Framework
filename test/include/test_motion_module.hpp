
#include "robotis_framework_common/motion_module.h"

namespace test
{

class TestMotionModule :
    public robotis_framework::MotionModule,
    public robotis_framework::Singleton<TestMotionModule>
{
private:
  int control_cycle_msec_;

public:
  TestMotionModule();
  virtual ~TestMotionModule();

  void initialize(const int control_cycle_msec, robotis_framework::Robot *robot);
  void process(std::map<std::string, robotis_framework::Dynamixel *> dxls, std::map<std::string, double> sensors);

  void stop();
  bool isRunning();

public:
};

}