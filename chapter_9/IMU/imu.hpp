#ifndef IMU_HPP
#define IMU_HPP

class IMU
{
    public:

        IMU() : _ax{0.0}, _ay{0.0}, _az{0.0}, 
                _wx{0.0}, _wy{0.0}, _wz{0.0}, 
                _isInitialized{false}, _isCalibrated{false}, _isSensorHealthy{true} {}

    private:

        double _ax, _ay, _az;
        double _wx, _wy, _wz;

        bool _isInitialized;
        bool _isCalibrated;
        bool _isSensorHealthy;
};

#endif
