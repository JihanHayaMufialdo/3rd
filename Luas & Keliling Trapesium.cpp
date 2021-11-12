#include <iostream>
using namespace std;

int main (){
	float a,b,t,s;
	
	cout << "\n------- TRAPESIUM -------\n\n";
	cout << "sisi atas (m)    : ";
	cin  >> a; 
	cout << "sisi bawah (m)   : ";
	cin  >> b;
	cout << "tinggi (m)       : ";
	cin  >> t;
	cout << "sisi samping (m) : ";
	cin  >> s;
	
	cout << "\nKeliling : " << 2*s+a+b << " m\n";
	cout << "Luas\t : " << ((a+b)*t)/2 << " m^2";
}
