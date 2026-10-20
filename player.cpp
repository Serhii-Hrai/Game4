#include <iostream>
#include <string>
#include "player.h"
using namespace std;

Player::Player() : Name(""), Energy(100.0f), xPos(0), yPos(0), zPos(0) {
    for (int Nr = 0; Nr < IMax; Nr++) {
        Item[Nr] = "";
    }
}

void Player::inputData() {
	cout << "Wie ist dein Name? "; cin >> Name;
	cout << "Deine Energie: "; cin >> Energy;
}

void Player::inputItems(int count) {
	for (int Nr = 0; Nr < count; Nr++) {
		cout << "Nenne den " << Nr + 1 << ". Gegenstand: "; cin >> Item[Nr];
	}
}

void Player::inputPosition() {
	cout << "Enter X position: ";
	cin >> xPos;
	cout << "Enter Y position: ";
	cin >> yPos;
	cout << "Enter Z position: ";
	cin >> zPos;
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
}

void Player::showData() {
	cout << "Name: " << Name << endl;
	cout << "Energie: " << Energy << " %.\n";
}

void Player::showItems() {
	int Nr = 0;
	while (Item[Nr] != "") {
		cout << Item[Nr] << " ";
		Nr++; if (Nr == IMax) break;
	}
}

void Player::showPosition() {
	cout << "Position: (" << xPos << ", " << yPos << ", " << zPos << ")" << endl;
}

void Warrior::inputWeapons(int count) {
	for (int Nr = 0; Nr < count; Nr++) {
		cout << "Gib die " << Nr + 1 << ". Waffe ein: "; cin >> Weapon[Nr];
	}
}

void Warrior::showWeapons() {
    int Nr = 0;
    while (Weapon[Nr] != "") {
        cout << Weapon[Nr] << " ";
        Nr++; if (Nr == WMax) break;
    }
}

