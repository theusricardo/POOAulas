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
	cout << ".T./                     \\.T." << endl;
	cout << " ^                         ^" << endl;
	cout << jog1 << "			          " << jog2 << endl;
	cout << "vida:" << vida1 << "           " << "vida: " << vida2 << endl;

	int dado6 ;

	//GERA UM NUMBER RANDOM ENTRE 1 E 6
	srand(1234);
	dado6 = rand() % 6 + 1;

	//CAUSA DANO IGUAL O VALOR GERADO NO "DANO"
	vida1 = vida1 - dado6; 

	//MESMA COISA PARA O JOGADOR 2
	dado6 = rand() % 6 + 1;
	vida2 = vida2 - dado6;

	cout << "Vida: " << vida1 << "           " << "Vida: " << vida2 << endl;

	return 0;
}