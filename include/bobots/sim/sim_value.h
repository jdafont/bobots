#pragma once

#include <memory>

#include "bobots/math/random.h"

namespace bobot {

/**
 * Represents a value that a sensor might read. Holds the truth and returns a
 * sample of a gaussian distribution around the truth.
*/
class SimValue_t {
public:
	/**
	 * Constructs a sim value.
	 *
	 * @param random Random number generator.
	 * @param initial Initial truth value of sensor.
	 * @param error Error rate around the true value used for sampling.
	*/
	SimValue_t(std::shared_ptr<Random_t> random, double initial, 
		double error);

	/**
	 * Samples the distribution.
	 *
	 * @returns The true value plus/minus a random error.
	*/
	double getValue();

private:
	std::shared_ptr<Random_t> m_random;
	double m_actual;
	double m_error;
};

}
