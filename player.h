#pragma once
#include <string>
#include <limits>
using namespace std;

const int IMax = 10;
const int WMax = 10;

class Player {
private:
    string Name;
    float Energy;
    string Item[IMax];
    int xPos{0}, yPos{0}, zPos{0};
public:
    Player();
    void inputData();
    void inputItems(int count);
    void inputPosition();
    void showData();
    void showItems();
    void showPosition();
}; // <-- Added missing semicolon here

class Warrior : public Player { 
private:
    string Weapon[WMax];
    int Ammo[WMax];
public:
    void inputWeapons(int count);
    void showWeapons();
}; // <-- Added missing semicolon here

