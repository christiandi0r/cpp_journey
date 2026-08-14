#include "imu.hpp"

void IMU::initialize() 
{ 
    if (_isSensorHealthy) { _isInitialized = true; }
}

void IMU::calibrate()  
{
    if (_isSensorHealthy && _isInitialized)  { _isCalibrated = true; }
}

bool IMU::isInitialized() const { return _isInitialized; }

bool IMU::isCalibrated() const { return _isCalibrated; }

bool IMU::isSensorHealthy() const { return _isSensorHealthy; }

bool IMU::measurementsValid() const { return _isInitialized && _isCalibrated && _isSensorHealthy; }

bool IMU::reportFault() { _isSensorHealthy = false; }

void IMU::updateMeasurements(double ax, double ay, double az, double wx, double wy, double wz)
{
    if (measurementsValid())
    {
        _ax = ax;
        _ay = ay;
        _az = az;
        _wx = wx;
        _wy = wy;
        _wz = wz;
    }
}

