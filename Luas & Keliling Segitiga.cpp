#include <iostream>
using namespace std;

int main (){
	float a,t,s1,s2;
	
	cout << "\n------ SEGITIGA ------\n\n";
	cout << "alas (m)   : ";
	cin  >> a; 
	cout << "tinggi (m) : ";
	cin  >> t;
	cout << "sisi 1 (m) : ";
	cin  >> s1;
	cout << "sisi 2 (m) : ";
	cin  >> s2;
	
	cout << "\nKeliling : " << a+s1+s2 << " m\n";
	cout << "Luas\t : " << (a*t)/2 << " m^2";
}
