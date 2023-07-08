#include <iostream>
#include <string>
using namespace std;

struct Character {
	
	Character(string name, float health);
	

	string Name;
	float Health;


	void ShowName() {
		cout << Name << endl;
	}
};

Character::Character(string name, float health) {
	Name = name;
	Health = health;
}

int main() {

	// not clear memory and crash version
	/*
		for (int i = 0; i < 1000000000; i++) {
			Character* PtrToChar = new Character("Elle", 100.f);
		}
		cout << "Finished!" << endl;
	*/
	


	for (int i = 0; i < 1000000000; i++) {
		Character* PtrToChar = new Character("Elle", 100.f);
		delete PtrToChar;
	}
	cout << "Finished!" << endl;


}
