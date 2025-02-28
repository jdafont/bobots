#include "bobots/sim/sim_value.h"

bobot::SimValue_t::SimValue_t(std::shared_ptr<Random_t> random, 
			      double initial, double error) {
	m_random = random;
	m_actual = initial;
	m_error = error;
}

double bobot::SimValue_t::getValue() {
	// m_actualValue +- m_error%
	// If we assume [m_actualValue - m_error%, m_actualValue + m_error%]
	// is 99.7% of readings, then stddev is a third of the range.
	double stddev = m_error * m_actual / 3.0;
	return m_random->gaussian(m_actual, stddev);
}
