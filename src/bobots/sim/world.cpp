#include "bobots/sim/world.h"

#include <iostream>

bobot::World_t::World_t() {
	m_timestep = 0;
}

void bobot::World_t::step() {
	m_timestep += 1;
	std::cout << "Step: " << m_timestep << std::endl;
}
