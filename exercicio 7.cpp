#include <iostream>
using namespace std;

int main () {
/*	Zezinho comprou um microcomputador para controlar o rendimento di�rio de
seu trabalho como pescador. Toda vez que ele traz um peso de peixes maior
que o estabelecido pelo regulamento de pesca do estado de Santa Catarina
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Zezinho
precisa que voc� fa�a um programa em C++ que receba o peso de peixes e
verifique se h� excesso. Se houver, o programa dever� imprimir o valor da
multa que Zezinho dever� pagar. Ex: Se ele pescou 56 kg, ent�o ele vai teve
de excesso 6kg, logo ele vai pagar uma multa de 24 reais.*/

	setlocale(LC_ALL, "Portuguese");

	double peso;
	
	cout << "Quantidade em quilos de peixe: ";
	cin >> peso;
	
	if (peso > 50) {
		
		double exc = (peso - 50) * 4.00;
		
		cout << "Peso excedido!!" << endl;
		cout << "A multa que voc� ir� pagar � de R$" << exc ;
		
	} else if (peso <= 50) {
		
		cout << "Peso n�o excedido!!" << endl;
		cout << "Voc� n�o ir� pagar multa";
		
	}
	
 	
	return 0;

	
}
