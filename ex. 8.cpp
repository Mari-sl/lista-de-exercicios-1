  #include <iostream>
  using namespace std;
  int main()
  {
  	int celsius;
  	int fahrenheit;
  	
  	cout << "digite a temperatura em celsius:";
  	cin >> celsius;

    fahrenheit = ( celsius * 9 /5) + 32;
    
    cout << ("temperatura em fahrenheit:>> fahrenheit");
    
    return 0;
    
  }