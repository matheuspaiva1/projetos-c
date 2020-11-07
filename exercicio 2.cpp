#include <iostream>
using namespace std;
main () {
	
/*	Escreva um programa para ler 2 valores (considere
que não serão informados valores iguais) e
escrever o maior deles. */
	
	setlocale(LC_ALL, "Portuguese");

	int n1;
	int n2;
	
	cout << "Diga o qual o valor do número 1: ";
	cin >> n1;
	cout << "Diga o qual o valor do número 2: ";
	cin >> n2;
	
	if (n1 > n2) {
		cout << "O maior dos números é: " << n1;
	} else if (n1 < n2) {
		cout << "O maior dos números é: " << n2;
	}
	
	return 0;

}
