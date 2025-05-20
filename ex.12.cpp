   #include <iostream>
   using namespace std;
   
   int main()
   {
   	
   	double p1;
    double p2;
   	double p3;
   	double p4;
    double p5;
    double total;
    double pago;
    double troco;
    
    cout << " informe o valor do produto 1: ";
    cin >> p1;
    cout << " informe o valor do produto 2: ";
    cin >> p2;
    cout << "informe o valor do produto 3: ";
    cin >> p3;
    cout << "informe o valor do produto 4:";
    cin >> p4;
    cout << "informe o valor do produto 5: ";
    cin >> p5;
    
    total = p1 + p2 + p3 + p4 + p5;
    
    cout << "informe o valor pago: ";
    cin >>  pago;
    
    troco = pago - total;
 
    cout << "o troco a ser devolvido e:  " << troco << endl;
    
    return 0;
    
   	
   }