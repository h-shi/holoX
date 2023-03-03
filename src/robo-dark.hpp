#include "main.h"
#include "lsd-koyori.hpp"
#include <map>
#include <memory>
#include <string>
#include <vector>
#include <deque>

using namespace pros;

struct Robot 
{
    static Controller dom;
    static Motor L1;
    static Motor L2;
    static Motor L3;
    static Motor R1;
    static Motor R2;
    static Motor R3;
    static Motor IntakeRoller;
    static Motor Flywheel;
    static Imu IMU;
    static ADIEncoder xEncoder;
    static ADIEncoder yEncoder;
    // Above declarations are for controller, motors, encoders, and IMU
    static lsd_koyori rotationPID;
    static lsd_koyori travelPID;
    static lsd_koyori flywheelPID;
    ;

};