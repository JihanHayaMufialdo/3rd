#include <iostream>
using namespace std;

int main (){
	
	float p,l;
	
	cout << "\n---- PERSEGI PANJANG ----\n\n";
	cout << "panjang (m) : ";
	cin  >> p; 
	cout << "lebar (m)   : ";
	cin  >> l;
	
	if(p!=0 && l!=0){
	cout << "\nKeliling : " << 2*(p+l) << " m\n";
	cout << "Luas\t : " << p*l << " m^2";
	}
}
