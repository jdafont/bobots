#include <iostream>
#include "bobots/core/vec2.h"

int add(int a, int b) {
	return a + b;
}

int main() {
	bobot::Vec2_t v1(3, 4);
	bobot::Vec2_t v2(1, 1);
	bobot::Vec2_t v3 = v1;
	v3.translate(3, 5);
	v3.rotate(0.9);
	std::cout << "v3 is " << v3.toString() << std::endl;

	std::cout << "Norm is " << v1.norm() << std::endl;
	v3.add(&v2);
	std::cout << "Added norm is " << v3.norm() << std::endl;
	std::cout << "Hello bobots!" << std::endl;
	std::cout << add(3, 4) << std::endl;
	return 0;
}
