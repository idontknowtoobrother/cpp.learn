#include <iostream>
#include <string>
using namespace std;

class Player{
public: 
	Player(string name, int level, float maxHealth, float health);

	string GetName();
	int GetLevel();
	float GetHealth();

	void TakeDamage(float damage);
	void Heal(float healTotal);
	void Display();
protected:
	string Name;
	int Level;
	float MaxHealth;
	float Health;
};


Player::Player(string name, int level, float maxHealth, float health) {
	Name = name;
	Level = level;
	MaxHealth = maxHealth;
	Health = health;
}

string Player::GetName() {
	return Name;
}

int Player::GetLevel() {
	return Level;
}

float Player::GetHealth() {
	return Health;
}

void Player::Display() {
	cout << "\nName: " << Name << "\nLevel: " << Level << "\nHealth: " << Health << "/" << MaxHealth << "\n";
}

void Player::TakeDamage(float damage) {
	
	float Total = Health - damage;
	if (Total <= 0) {
		cout << "Player died\n";
		return;
	}

	Health = Total;

}

void Player::Heal(float healTotal) {
	float Total = Health + healTotal;
	if (Total >= 100) {
		Health = 100;
		return;
	}

	Health = Total;
}

class Goblin : public Player {
public:
	Goblin(string name, int level, float maxHealth, float health);

	void SetHealth(float health);

};

Goblin::Goblin(string name, int level, float maxHealth, float health): Player(name, level, maxHealth, health){}

// can set cause property from parent class is protected access modifier
// if it's private it's have to use public set method or protected set method <3
void Goblin::SetHealth(float health) {
	Health = health;
}

int main() {

	Player player("Keng", 1, 100, 100);

	player.Display();

	player.TakeDamage(10);

	player.Display();

	player.Heal(30);

	player.Display();

}