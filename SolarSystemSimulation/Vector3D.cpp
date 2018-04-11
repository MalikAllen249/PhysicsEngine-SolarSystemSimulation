#include "Vector3D.h"



Vector3D::Vector3D(){
	SetZero();
}

Vector3D::Vector3D(float newX, float newY, float newZ) {
	x = newX;
	y = newY;
	z = newZ;
}

void Vector3D::Set(float newX, float newY, float newZ) {
	x = newX;
	y = newY;
	z = newZ;
}

void Vector3D::SetZero() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}