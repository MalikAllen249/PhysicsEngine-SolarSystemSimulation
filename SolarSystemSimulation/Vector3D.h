#ifndef VECTOR_H
#define VECTOR_H

class Vector3D
{
public:
	float x, y, z;
	Vector3D();
	Vector3D(float newX, float newY, float newZ);
	
	void Set(float newX, float newY, float newZ);
	void SetZero();
	
};
#endif

