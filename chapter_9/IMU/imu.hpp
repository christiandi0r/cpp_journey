#ifndef IMU_HPP
#define IMU_HPP

class IMU
{
    public:




    private:

        double _ax, _ay, _az;
        double _wx, _wy, _wz;

        bool _isInitialized;
        bool _isCalibrated;
        bool _isSensorHealthy;


};

#endif
