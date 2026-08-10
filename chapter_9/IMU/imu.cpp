#include "imu.hpp"

void IMU::initialize()
{
    if (_isSensorHealthy) { _isInitialized = true; }
}

void IMU::calibrate()
{
    if (_isSensorHealthy == true && _isInitialized == true) { _isCalibrated = true; }
}
