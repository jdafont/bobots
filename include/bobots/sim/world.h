#pragma once

namespace bobot {

/**
 * Represents the state of the world for simulation purposes. Responsible for
 * keeping track of the current timestep.
 *
*/
class World_t {
public:
	World_t();

	/**
	 * Steps the time by one timestep.
	*/
	void step();

private:
	unsigned int m_timestep;
};

}
