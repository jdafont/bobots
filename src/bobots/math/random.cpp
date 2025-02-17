#include "bobots/math/random.h"
#include <random>

bobot::Random_t::Random_t(double seed) {
	m_gen = std::mt19937(seed);
}

double bobot::Random_t::gaussian(double mean, double stddev) {
	std::normal_distribution<double> d{mean, stddev};
	return d(m_gen);
}
