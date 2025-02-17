#include "bobots/sim/gaussian_sensor.h"
#include <memory>

bobot::GaussianSensor_t::GaussianSensor_t(std::shared_ptr<Random_t> random, 
					  unsigned int period, double error) 
: SimSensor_t(random, period) {
	m_error = error;
	m_actualValue = 5.0;
}

std::any bobot::GaussianSensor_t::getReading() {
	// m_actualValue +- m_error%
	// If we assume [m_actualValue - m_error%, m_actualValue + m_error%]
	// is 99.7% of readings, then stddev is a third of the range.
	double stddev = m_error * m_actualValue / 3.0;
	return m_random->gaussian(m_actualValue, stddev);
}
