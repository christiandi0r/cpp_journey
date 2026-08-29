#ifndef IMU_HPP
#define IMU_HPP

class IMU
{
    public:

        IMU() : _ax{0.0}, _ay{0.0}, _az{0.0}, 
                _wx{0.0}, _wy{0.0}, _wz{0.0}, 
                _isInitialized{false}, _isCalibrated{false}, _isSensorHealthy{true} {}

        void initialize();
        void calibrate();
        
        bool isInitialized() const;
        bool isCalibrated() const;
        bool isSensorHealthy() const;
        bool measurementsValid() const;
        bool reportFault();

        void updateMeasurements(double ax, double ay, double az,
                                double wx, double wy, double wz);
        
        double getax() const { return _ax; }
        double getay() const { return _ay; }
        double getaz() const { return _az; }
        double getwx() const { return _wx; }
        double getwy() const { return _wy; }
        double getwz() const { return _wz; }

    private:

        double _ax, _ay, _az;
        double _wx, _wy, _wz;

        bool _isInitialized;
        bool _isCalibrated;
        bool _isSensorHealthy;
};

#endif
