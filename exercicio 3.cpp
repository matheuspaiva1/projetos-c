#include <iostream>
using namespace std;

int main () {
	
	setlocale(LC_ALL, "Portuguese"); // codigo de linguagem
	
	double salariomatinal;
	double porcentagem;
	
	cout << "Diga o salario matinal: " << endl; 
	cin >> salariomatinal;
	
	cout << "Diga a porcentagem a ser aumentada: " << endl;
	cin >> porcentagem;
	
	double cnt = (salariomatinal * porcentagem)/100;
	double cnt2 = salariomatinal + cnt;
	
	cout << "O salário de reajuste é: R$ " << cnt2 << " reais" << endl;
	
	
	return 0;




}
