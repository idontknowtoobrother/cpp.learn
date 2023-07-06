#include <iostream>
#include <string>

using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z;
};

struct Player {
	int Level;
	float Health;
	float Damage;
	float Stamina;
	LocationVector Location = { 0.f, 0.f, 0.f };

	// display
	void DisplayLevel() {
		cout << "Level (" << Level << ")" << endl;
	}
	void DisplayHealth() {
		cout << "Health (" << Health << ")" << endl;
	}
	void DisplayStamina() {
		cout << "Stamina (" << Stamina << ")" << endl;
	}
	void DisplayLocation() {
		cout << "Location.X (" << Location.X << ")" << endl;
		cout << "Location.Y (" << Location.Y << ")" << endl;
		cout << "Location.Z (" << Location.Z << ")" << endl;
	}

	// getter
	int GetLevel() {
		return Level;
	}
	float GetHealth() {
		return Health;
	}
	float GetStamina() {
		return Stamina;
	}
	LocationVector GetLocation() {
		return Location;
	}

	// effective
	void TakeDamage(float damage) {
		Health -= damage;
	}
};

int main() {

	Player player;
	player.Level = 1;
	player.Health = 100.f;
	player.Damage = 5.f;
	player.Stamina = 100.f;

	player.DisplayLocation();

	system("pause");
}