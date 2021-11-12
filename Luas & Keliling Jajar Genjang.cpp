#include <iostream>
using namespace std;

int main (){
	float a,t,s;
	
	cout << "\n----- JAJAR GENJANG -----\n\n";
	cout << "alas (m)         : ";
	cin  >> a; 
	cout << "tinggi (m)       : ";
	cin  >> t;
	cout << "sisi samping (m) : ";
	cin  >> s;
	
	cout << "\nKeliling : " << 2*(a+s)<< " m\n";
	cout << "Luas\t : " << a*t << " m^2";
}
