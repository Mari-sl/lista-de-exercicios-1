  #include <iostream>
  #include <math.h>
  using namespace std;
  
  int main()
  
  {
  	double x;
  	 double y;
  	double resultado;
  	
  	cout << ("informe o valor de x: ");
  	cin >>  x;
  	
  	cout << ("informe o valor de y: ");
  	cin >> y;
  	resultado = pow( x , y );  
  	
  	cout << " O resultado de x elevado a y e:" << resultado << endl;
  	
  	return 0;
  	
  }