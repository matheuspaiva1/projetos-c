#include <iostream>
using namespace std;

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*	Escreva um programa que verifique a validade de
uma senha fornecida pelo usu�rio. A senha v�lida �
o n�mero 1234. Devem ser impressas as seguintes
mensagens: ACESSO PERMITIDO caso a senha
seja v�lida. ACESSO NEGADO caso a senha seja
inv�lida*/

	int senha;

	cout << "Informe a senha do usuario: ";
	cin >> senha;
	
	if (senha == 1234) {
		cout << "ACESSO PERMITIDO";
	} else if (senha != 1234 ) {
		cout << "ACESSO NEGADO";
	}

	return 0;

}
