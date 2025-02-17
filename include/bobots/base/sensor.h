#pragma once

#include <any>

namespace bobot {

class Sensor_t {
public:
	virtual ~Sensor_t() = default;

	// Initializes the sensor.
	virtual bool initialize() = 0;

	// Returns ready and operation status.
	virtual bool ready() const = 0;

	// Returns read value or null.
	virtual std::any read() = 0;
};

}
