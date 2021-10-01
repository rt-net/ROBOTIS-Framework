# Ref: https://github.com/ROBOTIS-GIT/ROBOTIS-THORMANG-P-MPC/tree/master/thormang3_p_manager/config

[ control info ]
control_cycle = 8   # milliseconds

[ port info ]
# PORT NAME  | BAUDRATE | DEFAULT JOINT
/dev/ttyUSB0 | 3000000  | joint1

[ device info ]
# TYPE    | PORT NAME    | ID  | MODEL           | PROTOCOL | DEV NAME     | BULK READ ITEMS
dynamixel | /dev/ttyUSB0 | 2   | XM430-W350      | 2.0      | joint1       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 3   | XM540-W270      | 2.0      | joint2       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 4   | XM430-W350      | 2.0      | joint3       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 5   | XM430-W350      | 2.0      | joint4       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 6   | XM430-W350      | 2.0      | joint5       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 7   | XM430-W350      | 2.0      | joint6       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 8   | XM430-W350      | 2.0      | joint7       | present_current, present_position
dynamixel | /dev/ttyUSB0 | 9   | XM430-W350      | 2.0      | joint_hand   | present_current, present_position