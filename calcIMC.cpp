#include <iostream>
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	cout << "Calculadora de IMC :)" << endl;
	
	double peso;
	
	cout << "Vamos calcular o seu Indice de Massa Corporal, primeiro me diga seu peso: " << endl;
	cin >> peso;
	
	double altura;
	
	cout << "Agora me diga a sua altura" << endl;
	cin >> altura;
	
	double imc = peso/(altura*altura);
	
	cout << "O seu IMC é: " << imc << " KG"<< endl;
	
	if(imc < 18.5){
		cout << "Abaixo do peso";
	} else if (imc <= 18.5 ) {
			cout << "Peso Normal";
		} else if (imc <= 24.9) {
			cout << "Sobrepeso";
		} else if (imc <= 30){
			cout << "Obesidade Grau I";
		} else if (imc <= 35) {
			cout << "Obesidade Grau II";
		} else if (imc > 40) {
			cout << "Obesidade Grau III ou mórbida";
		}
	
	return 0;
	
	
}
