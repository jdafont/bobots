#pragma once

#include <memory>

#include "bobots/base/sensor.h"
#include "bobots/math/random.h"

namespace bobot {

/**
 * Represents a simulated sensor with a frequency of readings.
 */
class SimSensor_t : public Sensor_t {
public:
	/**
	 * Creates a simulated sensor.
	 *
	 * @param random Random number generator for producing sensor readings.
	 * @param period Length of timesteps before a reading is available.
	 */
	SimSensor_t(std::shared_ptr<Random_t> random, unsigned int period);

	/**
	 * Simulates initializing the sensor.
	 *
	 * @returns True always
	 */
	bool initialize() override;

	/**
	 * Allows querying for if the simulated sensor is ready for readings.
	 *
	 * @returns True if initialized.
	 */
	bool ready() const override;

	/**
	 * Returns a reading if enough time has passed since the last reading.
	 *
	 * @returns Sensor defined result.
	 */
	std::any read() override;

	/**
	 * Steps the current time.
	*/
	void step();

protected:
	virtual std::any getReading() = 0;

	unsigned int m_period;
	unsigned int m_lastRead;
	bool m_initialized;

	std::shared_ptr<Random_t> m_random;
};

}
