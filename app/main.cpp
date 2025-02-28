#include <iostream>
#include <memory>
#include "bobots/math/random.h"
#include "bobots/sim/sensors/sim_distance_sensor.h"
#include "bobots/sim/sim_value.h"
#include "bobots/sim/world.h"

void print_if_read(std::any value) {
	if (!value.has_value()) {
		std::cout << "No sensor value" << std::endl;
	} else {
		double readValue = std::any_cast<double>(value);
		std::cout << "Sensor value: " << readValue << std::endl;
	}
}

int main() {
	bobot::World_t world;

	std::shared_ptr<bobot::Random_t> random = 
		std::make_shared<bobot::Random_t>(0);

	std::shared_ptr<bobot::SimValue_t> distance = 
		std::make_shared<bobot::SimValue_t>(random, 10, 0.05);

	bobot::SimDistanceSensor_t s1(distance);
	std::cout << "Sensor ready: " << s1.ready() << std::endl;
	std::cout << "Initializing" << std::endl;
	s1.initialize();
	std::cout << "Sensor ready: " << s1.ready() << std::endl;
	for (int i = 0; i < 10; ++i) {
		print_if_read(s1.read());
		//s1.step();
	}

	return 0;
}
