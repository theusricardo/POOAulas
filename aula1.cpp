#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	string jog1, jog2; 
	int vida1 = 20, vida2 = 20;

	cout << "digite o nome do jogador 1:" << endl;
	cin >> jog1;
	cout << "digite o nome de jogador 2:" << endl;
	cin >> jog2;

	cout << " o                         o" << endl;
	cout << ".T./                    \\.T." << endl;
	cout << " ^                         ^" << endl;
	cout << jog1 << "                     " << jog2 << endl;
	cout << "vida:" << vida1 << "           " << "vida: " << vida2 << endl; 

	return 0;
}