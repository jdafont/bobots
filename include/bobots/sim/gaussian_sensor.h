#pragma once

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
	 */
	GaussianSensor_t(unsigned int period, double stddev);


protected:
	std::any getReading() override;

private:
	double m_stddev;
};

}
