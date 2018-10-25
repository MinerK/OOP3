//quad.h
#pragma once
#include "triangle.h"

class quad : triangle
{
public:
	quad(float q, float w, float r, float t) : triangle(q, w, r)
	{
		d = t;
		e = sqrt((a*c + b*d)*(a*d + b*c) / (a*b + c*d));
		f = sqrt((a*c + b*d)*(a*b + c*d) / (a*d + b*c));
	}
	quad() :triangle()
	{
		d = 1;
		e = f = sqrt(2);
	}

	float perimeter()
	{
		return a + b + c + d;
	}
	float area()
	{
		return sqrt((4 * e*e*f*f - pow(b*b - d*d - a*a - c*c, 2)) / 16);
	}
	virtual std::string info()
	{
		std::string str = "a = " + std::to_string(a)
			+ "; b = " + std::to_string(b)
			+ "; c = " + std::to_string(c)
			+ "; d = " + std::to_string(d)
			+ "; e = " + std::to_string(e)
			+ "; f = " + std::to_string(f)
			+ "; perimeter = " + std::to_string(perimeter())
			+ "; area = " + std::to_string(area());
		return str;
	}


private:
	float d, e, f;
};