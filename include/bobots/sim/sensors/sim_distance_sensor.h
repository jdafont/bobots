#pragma once

#include "bobots/sensors/distance_sensor.h"
#include "bobots/sim/sim_value.h"
#include <memory>
namespace bobot {

class SimDistanceSensor_t : DistanceSensor_t {
public:
	SimDistanceSensor_t(std::shared_ptr<SimValue_t> distance);
	// Initializes the sensor.
	bool initialize() override;

	// Returns ready and operation status.
	bool ready() const override;
	// Returns read value or null.
	std::any read() override;

private:
	std::shared_ptr<SimValue_t> m_distance;
};

}
