#include <iostream>
using namespace std;

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
/*	Escreva um programa que verifique a validade de
uma senha fornecida pelo usuário. A senha válida é
o número 1234. Devem ser impressas as seguintes
mensagens: ACESSO PERMITIDO caso a senha
seja válida. ACESSO NEGADO caso a senha seja
inválida*/

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
