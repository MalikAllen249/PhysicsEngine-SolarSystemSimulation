#ifndef BODY_H
#define BODY_H

#include "Vector3D.h"
class Body
{
public:
	float mass;
	Vector3D position;
	Vector3D velocity;
	Vector3D acceleration;
	Body(float newMass, Vector3D& newPosition, Vector3D& newVelocity, Vector3D& newAcceleration);

	void Update(float timeStep);
	void AddForce(Vector3D& force);
	void SetForce(Vector3D & force);
	
};
#endif
