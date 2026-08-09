#include "imu.hpp"

void IMU::initialize()
{
    if (_isSensorHealthy) { _isInitialized = true; }
}

void IMU::calibrate()
{
    
}
