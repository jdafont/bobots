#include "bobots/sim/sim_sensor.h"
#include <any>

bobot::SimSensor_t::SimSensor_t(std::shared_ptr<Random_t> random, 
				unsigned int period) {
	m_random = random;
	m_period = period;
	m_initialized = false;
	m_lastRead = 0;
}

bool bobot::SimSensor_t::initialize() {
	m_initialized = true;
	return m_initialized;
}

bool bobot::SimSensor_t::ready() const {
	return m_initialized;
}

std::any bobot::SimSensor_t::read() {
	std::any result;
	if (m_lastRead >= m_period) {
		result = this->getReading();
		m_lastRead -= m_period;
	}

	return result;
}

void bobot::SimSensor_t::step() {
	if (m_initialized) {
		m_lastRead += 1;
	}
}

