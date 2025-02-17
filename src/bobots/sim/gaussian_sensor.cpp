#include "bobots/sim/gaussian_sensor.h"

bobot::GaussianSensor_t::GaussianSensor_t(unsigned int period, double stddev) 
: SimSensor_t(period) {
	m_stddev = stddev;
}

std::any bobot::GaussianSensor_t::getReading() {
	return std::any{5.0};
}
