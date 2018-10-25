//triangle.h
#pragma once

#include <math.h>
#include <string>

class triangle
{
public:
	triangle()
	{
		a = b = c = 1;
	}
	triangle(float x, float y, float z)
	{
		a = x;
		b = y;
		c = z;
	}


	virtual float perimeter()
	{
		return a + b + c;
	}
	virtual float area()
	{
		float p = perimeter() / 2;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}
	virtual std::string info()
	{
		std::string str = "a = " + std::to_string(a)
			+ "; b = " + std::to_string(b)
			+ "; c = " + std::to_string(c)
			+ "; perimeter = " + std::to_string(perimeter())
			+ "; area = " + std::to_string(area());
		return str;
	}

protected:
	float a, b, c;
};