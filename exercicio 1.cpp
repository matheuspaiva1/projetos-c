#include <iostream>
using namespace std;
int main () {
	
	
    char nome[20];
    int idade;
    cout << "Qual seu nome?";
    cin >> nome;
    cout << "Me fale a sua idade: " << endl;
    cin >> idade;
    double dia = (idade * 365);
    double mes = (idade * 12);
    cout << "Ola " << nome << ", voce tem " << dia << " dias e " << mes << " meses.";
    
    
    return 0;
    
    
    
    
}
