#include <iostream>
using namespace std;

int main () {
/* Desenvolva um c�digo em C++ que receba o nome de uma pessoa e as 4 notas
bimestrais que teve durante todo o ano. O programa dever� fazer a m�dia
dessas 4 notas e imprimir se o aluno foi aprovado ou n�o. O aluno s� ser�
aprovado se a m�dia for maior ou igual a 7. Na hora de imprimir, � necess�rio
que coloque o nome do usu�rio */ 
	
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
		
		cout << "Sua m�dia � = " << media << endl;
		cout << "Voc� est� aprovado " << nome << endl ;
		
	} else if (media <= 7) {
		
		cout << "Sua m�dia � = " << media << endl;	
		cout << "Voc� est� reprovado " << nome << endl;
		
	}
	
	return 0;
		
}
