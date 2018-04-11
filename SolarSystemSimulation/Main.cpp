#include <iostream>
#include <string>

#include "Body.h"

int main(int agrc, char *argv[]) {

	float timeStep = 0.5f;
	float timeTotal = 0.0f;

	float mass = 200.0f;
	Vector3D position;
	Vector3D velocity;
	Vector3D acceleration;
	Vector3D force;

	Body Object(mass, position, velocity, acceleration);

	force.Set(500.0f, 0.0f, 0.0f);

	for (; timeTotal <= 15.0f; timeTotal += timeStep) {
		Object.Update(timeStep);
		
		if (timeTotal+0.5f == 5.5f){
			force.SetZero();
			Object.AddForce(force);
		}

		if (timeTotal+0.5f == 10.0f){
			force.Set(-625.0f, 0.0f, 0.0f);
			Object.AddForce(force);
		}
		if (Object.velocity.x <= 0.0f && timeTotal > 0.0f) {
			force.SetZero();
		}

		Object.AddForce(force);
		printf("PosX : %f\t VelX: %f\n AccelX: %f\t Time: %f\n\n", Object.position.x, Object.velocity.x, Object.acceleration.x, timeTotal);
	}


	system("pause");
	return 0;
}
