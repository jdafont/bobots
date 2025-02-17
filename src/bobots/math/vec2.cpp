#include "bobots/math/vec2.h"

#include <math.h>
#include <sstream>

bobot::Vec2_t::Vec2_t(double x, double y) {
	m_x = x;
	m_y = y;
}

double bobot::Vec2_t::norm() const {
	return std::sqrt(m_x * m_x + m_y * m_y);
}

void bobot::Vec2_t::translate(double x, double y) {
	m_x += x;
	m_y += y;
}

void bobot::Vec2_t::rotate(double angle) {
	double new_x = m_x * std::cos(angle) - m_y * std::sin(angle);
	double new_y = m_x * std::sin(angle) + m_y * std::cos(angle);
	m_x = new_x;
	m_y = new_y;
}

void bobot::Vec2_t::add(bobot::Vec2_t const * const other) {
	m_x += other->m_x;
	m_y += other->m_y;
}

std::string bobot::Vec2_t::toString() const {
	std::stringstream ss;
	ss << "Vec2{x:" << m_x << ", y:" << m_y << "}";
	return ss.str();
}
