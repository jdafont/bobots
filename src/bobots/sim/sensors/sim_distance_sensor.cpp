#include "bobots/sim/sensors/sim_distance_sensor.h"
#include "bobots/sim/sim_value.h"
#include <memory>

bobot::SimDistanceSensor_t::SimDistanceSensor_t(
	std::shared_ptr<SimValue_t> distance) {
	m_distance = distance;
}

bool bobot::SimDistanceSensor_t::initialize() {
	return true;
}

bool bobot::SimDistanceSensor_t::ready() const {
	return true;
}

std::any bobot::SimDistanceSensor_t::read() {
	return m_distance->getValue();
}
