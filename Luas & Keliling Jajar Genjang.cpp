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
	
	if(a!=0 && t!=0){ 
	cout << "\nLuas\t : " << a*t << " m^2";
	}
	
	if(a!=0 && s!=0){
	cout << "\nKeliling : " << 2*(a+s)<< " m\n";
	}
}
