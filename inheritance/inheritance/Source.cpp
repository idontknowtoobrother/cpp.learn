#include <iostream>
#include <string>
using namespace std;

// parent class
class Animal {
public:
	Animal();
	Animal(string name, int age, int number_limbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();

};

// constructor
Animal::Animal() { 
	Name = "default name";
	Age = 1;
	NumberOfLimbs = 1;
}
// overload constructor
Animal::Animal(string name, int age, int num_limbs) : Name(name), Age(age), NumberOfLimbs(num_limbs) {
	Report();
}

// also u can overload every function up to you nah
void Animal::Report() { 
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number of Limbs: " << NumberOfLimbs << endl;
}

// child class
// "Dog" inherit everything from "Animal"
class Dog : public Animal {

public:
	Dog(string name, int age, int num_limbs);

	void Hi();
};

// if u not use a notation version it's will call a first zero args constructor too :D (recognize it)
Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) {

}

void Dog::Hi() {
	// if dog can speak keke
	cout << "\nHi " << Name << endl;
}


int main() {

	Animal animal_1;

	Animal animal_2("Ant", 10, 4);


	animal_1.Report();
	animal_2.Report();

	Dog dog("muey", 2, 5);

	dog.Hi();

}