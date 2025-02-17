#pragma once

#include "bobots/math/random.h"
#include "bobots/sim/sim_sensor.h"

namespace bobot {

/**
 * Represents a simulated sensor with a gaussian error distribution. For
 * example, if the error is 5 and the true value is 70, then this will produce
 * a reading by sampling a normal distribution with a mean of 70 and a
 * standard deviation of 5.
 */
class GaussianSensor_t : public SimSensor_t {
public:
	/**
	 * Creates a gaussian sensor with a given error rate.
	 *
	 * @param random Random number generator for producing sensor readings.
	 * @param period How many timestamps between new readings.
	 * @param error Error rate of sensor readings, as a percentage, 
	 * i.e. 0.1 == 10% == mean +- 10%.
	 */
	GaussianSensor_t(
		std::shared_ptr<Random_t> random, 
		unsigned int period, 
		double error);

private:
	std::any getReading() override;

	double m_error;
	double m_actualValue;
};

}
