#include <iostream>
using namespace std;

int main () {
/* Desenvolva um código em C++ que receba o nome de uma pessoa e as 4 notas
bimestrais que teve durante todo o ano. O programa deverá fazer a média
dessas 4 notas e imprimir se o aluno foi aprovado ou não. O aluno só será
aprovado se a média for maior ou igual a 7. Na hora de imprimir, é necessário
que coloque o nome do usuário */ 
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	
	cout << "Qual o seu nome? " << endl;
	cin >> nome;
	
	double nota1;
	double nota2;
	double nota3;
	double nota4;
	
	cout << "Diga as suas notas " << nome << endl;
	cin >> nota1 >> nota2 >> nota3 >> nota4;
	
	double media = (nota1 + nota2 + nota3 + nota4)/4;
	
	if (media >= 7) {
		
		cout << "Sua média é = " << media << endl;
		cout << "Você está aprovado " << nome << endl ;
		
	} else if (media <= 7) {
		
		cout << "Sua média é = " << media << endl;	
		cout << "Você está reprovado " << nome << endl;
		
	}
	
	return 0;
		
}
