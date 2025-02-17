#pragma once

#include <random>

namespace bobot {

/**
 * Source of random values. Ideally, there should be as few of these in a
 * process as possible.
*/
class Random_t {
public:
	/**
	 * Creates a random number generator with a given seed.
	 *
	 * @param seed Random number generator seed.
	 */
	Random_t(double seed);

	/**
	 * Draws a random number from a gaussian distribution.
	 *
	 * @param mean Mean value of the distribution.
	 * @param stddev Standard deviation of the distribution.
	 *
	 * @returns Value samples from a gaussian distribution.
	*/
	double gaussian(double mean, double stddev);

private:
	std::mt19937 m_gen;
};

}
