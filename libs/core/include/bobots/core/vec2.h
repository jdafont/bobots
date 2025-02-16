#ifndef VEC2_H
#define VEC2_H

#include <string>

namespace bobot {

/** 
 * Reprsents a 2 dimensional vector in Euclidean space.
*/
class Vec2_t {
public:
	Vec2_t(double x, double y);

	/** 
	 * Calculates the L2 norm (pythagorean distance).
	 *
	 * @returns L2 norm.
	*/
	double norm() const;

	/**
	 * Translates the vector.
	 *
	 * @param x Units to translate in x-axis.
	 * @param y Units to translate in y-axis.
	*/
	void translate(double x, double y);

	/**
	 * Rotates the vector.
	 *
	 * @param angle Angle in radians.
	*/
	void rotate(double angle);

	/**
	 * Adds another vector to this vector.
	 *
	 * @param other Vector to add to current.
	*/
	void add(Vec2_t const * const other);

	/**
	 * Produces a human readable string.
	 *
	 * @returns String representation of the vector.
	*/
	std::string toString() const;

private:
	double m_x;
	double m_y;
};

}

#endif
