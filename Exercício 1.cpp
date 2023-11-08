#include <iostream>
#include <math.h>
using namespace std;
//Exercício 1
int dobro(int x) { return 2 *x; }
//Exercício 2
void data(int dia, int mes, int ano){
	string MES;
	switch(mes)
	{
	case 1:
		MES = "janeiro";
		break;
	case 2:
		MES = "fevereiro";
		break;
	case 3:
		MES = "marco";
		break;
	case 4:
		MES = "abril";
		break;
	case 5:
		MES = "maio";
		break;
	case 6:
		MES = "junho";
		break;
	case 7:
		MES = "julho";
		break;
	case 8:
		MES = "agosto";
		break;
	case 9:
		MES = "setembro";
		break;
	case 10:
		MES = "outubro";
		break;
	case 11:
		MES = "novembro";
		break;
	case 12:
		MES = "dezembro";
		break;
	}
	cout << dia << " de " << MES << " de " << ano;
}
//Exercício 3
int sinal(int x){
	if (x >0) return 1;
	else if (x < 0) return -1;
	else return 0;
}
//Exercício 4
bool EQuadrado(int x){
	int y = int(sqrt(x));
	if (y*y == x) return true;
	else return false;
}
//Exercício 5
double volume(int raio){
	return (pow(raio, 3) * 3.14 * 4/3);
}
int main(){
	cout << dobro(5) << endl;
	data(8, 11, 2023);
	cout << endl << sinal(5) << endl;
	cout << EQuadrado(5) << endl;
	cout << volume(5);
	return 0;
}
