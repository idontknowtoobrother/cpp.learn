#include <iostream>
#include <string>

using namespace std;

class Object {

public:
	virtual void BeginPlay();
};

void Object::BeginPlay() {
	cout << "Object BeginPlay(); called.\n";
}

class Actor : public Object {
public:
	virtual void BeginPlay() override;
};

void Actor::BeginPlay() {
	cout << "Actor BeginPlay(); called.\n";
	Object::BeginPlay();
}

class Pawn : public Actor {
public:
	virtual void BeginPlay() override;
};

void Pawn::BeginPlay() {
	cout << "Pawn BeginPlay(); called\n";
	Object::BeginPlay();
	Actor::BeginPlay();
}

int main() {

	Object* Obj = new Object;
	Actor* Act = new Actor;
	Pawn* Pwn = new Pawn;


	Obj->BeginPlay();
	Act->BeginPlay();
	Pwn->BeginPlay();



}