#include <iostream>
using namespace std;

int main (){
	
	float s,d1,d2;
	
	cout << "\n----- BELAH KETUPAT -----\n\n";
	cout << "sisi (m)       : ";
	cin  >> s; 
	cout << "diagonal 1 (m) : ";
	cin  >> d1;
	cout << "diagonal 2 (m) : ";
	cin  >> d2;
	
	if(s!=0){
	cout << "\nKeliling : " << 4*s<< " m\n";
	}
	
	if(d1!=0 && d2!=0){
	cout << "Luas\t : " << (d1*d2)/2 << " m^2";
	}
}
