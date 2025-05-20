  #include <iostream>
  using namespace std;
  
  int main()
  {
  	
  	int media;
  	int valor1;
  	int valor2;
  	int valor3;
  	int valor4;
  	
  	cout << "informe o primeiro valor: ";
  	cin >> valor1;
  	cout << "informe o segundo valor: ";
  	cin >> valor2;
  	cout << "informe o terceiro valor: ";
  	cin >> valor3;
  	cout << "informe o quarto valor: ";
  	cin >> valor4;
  	
  	media = ( valor1 + valor2 + valor3 + valor4 ) / 4;
  	
  	cout << " A media e : " << media << endl;
  	
  	return 0;
  }