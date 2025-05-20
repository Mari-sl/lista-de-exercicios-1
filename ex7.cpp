  #include <iostream>
  using namespace std;

    int main()
    {
		int milhas;
		cout<< "informe a quantidade de milhas maritimas:";
		cin >> milhas;
		float km = milhas * 1852; //1 milha maritima = 1852 km
		cout << "equivalente em km : "<< km << endl;
	
	  return 0;
	}
  