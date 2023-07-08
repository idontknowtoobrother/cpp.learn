#include <iostream>
#include <string>
using namespace std;

class Character {
	
public:
	Character(int age, float health);
	~Character();

	int* Age;
	float* Health;
};

Character::Character(int age, float health) {
	Age = new int(age);
	Health = new float(health);

	cout << "Create Character!" << endl;
}

Character::~Character() {

	delete Age;
	cout << "Deleted Character->Age from heap." << endl;
	delete Health;
	cout << "Deleted Character->Health from heap." << endl;

	cout << "Deleted Character!" << endl;
}

int main() {

	Character* Char = new Character(10, 100.f);
	cout << *Char->Age << endl;

	delete Char;

	system("pause");
}