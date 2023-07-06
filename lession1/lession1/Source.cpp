#include <iostream>
using namespace std;


// enums
enum PlayerStatus {
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus {
	MS_Crouched,
	// PS_Running  this will give error that why we put MS or PS on the first ENUM variables.
	MS_Running
};


// function prototype
char askConfirmAction();
void changePlayerRole(string& refPlayerRole, string newRole);
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

// player speed 
const float CrouchSpeed = 350.f;
const float WalkSpeed = 500.f;
const float RunSpeed = 800.f;



int main() {
	
	// practice
	float MovementSpeed;
	PlayerStatus status = PS_Crouched;
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "Player speed " << MovementSpeed << " (" << status << ")\n";
	
	status = PS_Walking;
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "Player speed " << MovementSpeed << " (" << status << ")\n";


	status = PS_Running;
	UpdateMovementSpeed(status, MovementSpeed);
	cout << "Player speed " << MovementSpeed << " (" << status << ")\n";



	// try to understanding fundamentals
	status = PS_Crouched;
	if (status == PS_Crouched) {
		cout << "Player is crouching\n";
	}

	status = PlayerStatus::PS_Running;

	MovementStatus m_status = MovementStatus::MS_Running;


	char myCharacter;
	int myInt;

	myCharacter = 'e';
	myInt = 1;
	
	cout << myCharacter << endl;
	cout << myInt << endl;

	myCharacter = 'l';
	myInt = 1;

	cout << myCharacter << endl;
	cout << myInt << endl;

	if (askConfirmAction()) {
		cout << "Confirmed :D" << endl;
	}
	else {
		cout << "Decline :(" << endl;
	}

	string playerRole = "Police";
	string& refPlayerRole = playerRole;

	cout << playerRole << endl;
	cout << refPlayerRole << endl;

	refPlayerRole = "Mechanic";
	
	cout << playerRole << endl;
	cout << refPlayerRole << endl;

	changePlayerRole(refPlayerRole, "Unemployed");
	
	cout << playerRole << endl;
	cout << refPlayerRole << endl;

	changePlayerRole(playerRole, "Doctor");

	cout << playerRole << endl;
	cout << refPlayerRole << endl;

}



// functions 
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed) {
	switch (P_Status) {
		case PS_Crouched:
			speed = CrouchSpeed;
			break;
		case PS_Walking:
			speed = WalkSpeed;
			break;
		case PS_Running:
			speed = RunSpeed;
	}
}

char askConfirmAction() {
	char res;
	cout << "confirm it (y/any character) ? : ";
	cin >> res;
	return res == 'y';
}


void changePlayerRole(string& refPlayerRole, string newRole) {
	refPlayerRole = newRole;
}
