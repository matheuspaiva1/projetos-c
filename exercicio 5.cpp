#include <iostream>
using namespace std;


int main () {

 setlocale(LC_ALL, "Portuguese");

  int n;
  
  cout << "qual o numero? ";
  cin >> n;
  
  if (n > 0) { 
    cout << "n�mero positivo";
  } else if (n < 0) {
  cout << "numero negativo";
}
  return 0;
}




	
	
