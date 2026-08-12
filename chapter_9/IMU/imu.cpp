#include "imu.hpp"

void IMU::initialize() 
{ 
    if (_isSensorHealthy) { _isInitialized = true; }
}

void IMU::calibrate()  
{
    if (_isSensorHealthy == true && _isInitialized == true)  { _isCalibrated = true; }
}

bool IMU::isInitialized() const { return _isInitialized; }

bool IMU::isCalibrated() const { return _isCalibrated; }

bool IMU::isSensorHealthy() const { return _isSensorHealthy; }

bool IMU::measurementsValid() const { return _isInitialized && _isCalibrated && _isSensorHealthy; }

