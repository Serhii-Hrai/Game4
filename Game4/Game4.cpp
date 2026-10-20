#include <iostream>
#include <string>
#include "../player.h"
using namespace std;


int main() {

	Player player;
	int items;

	player.inputData();
	cout << "Wie viele Dinge hast du (max.10)? "; cin >> items;
	player.inputItems(items);

	player.showData();
	cout << "Dein Inventar: \n"; player.showItems();
	cout << "\n\n";
}