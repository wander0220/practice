#pragma once
#include <cmath>
#include "input_manager.h"

extern bool isCirleCollided(float ax, float ay, float ar, float bx, float by, float br) 
{
	const float dx = bx - ax;
	const float dy = by - ay;
	const float d = sqrt(dx * dx + dy * dy);

	if (ar + br < d)
	{
		return true;
	}

	return false;
}