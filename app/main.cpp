#include <iostream>
#include "bobots/sim/world.h"
#include "bobots/sim/gaussian_sensor.h"

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
	world.step();
	world.step();
	world.step();
	world.step();
	world.step();
	world.step();
	world.step();
	world.step();


	bobot::GaussianSensor_t s1(1, 1);
	std::cout << "Sensor ready: " << s1.ready() << std::endl;
	std::cout << "Initializing" << std::endl;
	s1.initialize();
	std::cout << "Sensor ready: " << s1.ready() << std::endl;
	print_if_read(s1.read());
	s1.step();
	print_if_read(s1.read());
	s1.step();
	print_if_read(s1.read());
	print_if_read(s1.read());

	return 0;
}
