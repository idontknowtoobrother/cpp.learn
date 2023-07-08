#include <iostream>
#include <string>

using namespace std;



void IncrementCount() {
	static int Count = 0;
	Count++;
	cout << Count << endl;
};


class Critter {
public:
	Critter();
	~Critter();

	static void Anm();
	static int Count;
};

int Critter::Count = 0;

Critter::Critter() {
	++Count;
}

Critter::~Critter() {

}

void Critter::Anm() {
	cout << "Critters Total: " << Count << endl;
}


int main() {

	IncrementCount();
	IncrementCount();
	IncrementCount();
	IncrementCount();


	Critter* Crit = new Critter();
	Critter* Crit_2 = new Critter();
	Critter* Crit_3 = new Critter();
	Critter* Crit_4 = new Critter();
	Critter* Crit_5 = new Critter();
	Critter* Crit_6 = new Critter();

	Critter::Anm();


}