#include <iostream>
#include <string>
using namespace std;

class Dog {

public:
	Dog() {
		cout << "Dog was borned." << endl;
	}

	string Name;
	string Age;
	float Health;
	
};

struct Cat {
		
	Cat();

	string Name;
	string Age;
	float Helth;
	float Belly;

	void Meow();
	void Pee();
};

Cat::Cat() {
	Meow();

}

void Cat::Meow() {
	cout << "Cat meow!!" << endl;
}

void Cat::Pee() {
	cout << "Cat is do bussiness" << endl;
}


struct Player {
	Player();

	string Name;
	int Level;
	float Health;

	void DisplayInfo();
	void Uplevel();

};

Player::Player() {
	Level = 1;
	DisplayInfo();
}

void Player::DisplayInfo() {
	cout << "Name: " << Name << endl;
	cout << "Level: " << Level << endl;
	cout << "Health: " << Health << endl;
}

void Player::Uplevel() {
	Level++;
}

int main() {
	Dog Muey;
	Cat Dio;
	Dio.Pee();

	Player H3X;
	H3X.Uplevel();
	H3X.Uplevel();
	H3X.Uplevel();
	H3X.DisplayInfo();



}