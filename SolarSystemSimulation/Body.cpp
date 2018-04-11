#include "Body.h"



Body::Body(float newMass, Vector3D& newPosition, Vector3D& newVelocity, Vector3D& newAcceleration){
	mass = newMass;
	position = newPosition;
	velocity = newVelocity;
	acceleration = newAcceleration;
}

void Body::Update(float timeStep) {

	position.x += velocity.x * timeStep + 0.5f * acceleration.x * timeStep * timeStep;
	position.y += velocity.y * timeStep + 0.5f * acceleration.y * timeStep * timeStep;
	position.z += velocity.z * timeStep + 0.5f * acceleration.z * timeStep * timeStep;
	
	velocity.x += acceleration.x * timeStep;
	velocity.y += acceleration.y * timeStep;
	velocity.z += acceleration.z * timeStep;
}

void Body::AddForce(Vector3D& force) {
	acceleration.x = force.x / mass;
	acceleration.y = force.y / mass;
	acceleration.z = force.z / mass;
}

