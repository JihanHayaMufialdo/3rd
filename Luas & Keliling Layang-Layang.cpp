#include <iostream>
using namespace std;

int main (){
	float d1,d2,s1,s2;
	
	cout << "\n----- LAYANG-LAYANG -----\n\n";
	cout << "diagonal 1 (m) : ";
	cin  >> d1; 
	cout << "diagonal 2 (m) : ";
	cin  >> d2;
	cout << "sisi 1 (m) : ";
	cin  >> s1;
	cout << "sisi 2 (m) : ";
	cin  >> s2;
	
	cout << "\nKeliling : " << 2*(s1+s2) << " m\n";
	cout << "Luas\t : " << (d1*d2)/2 << " m^2";
}
