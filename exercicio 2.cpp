#include <iostream>
using namespace std;
main () {
	
/*	Escreva um programa para ler 2 valores (considere
que n�o ser�o informados valores iguais) e
escrever o maior deles. */
	
	setlocale(LC_ALL, "Portuguese");

	int n1;
	int n2;
	
	cout << "Diga o qual o valor do n�mero 1: ";
	cin >> n1;
	cout << "Diga o qual o valor do n�mero 2: ";
	cin >> n2;
	
	if (n1 > n2) {
		cout << "O maior dos n�meros �: " << n1;
	} else if (n1 < n2) {
		cout << "O maior dos n�meros �: " << n2;
	}
	
	return 0;

}
