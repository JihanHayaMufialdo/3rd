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
	
	if(a!=0 && s1!=0 && s2!=0){
	cout << "\nKeliling : " << a+s1+s2 << " m\n";
	}
	
	if(a!=0 && t!=0){
	cout << "Luas\t : " << (a*t)/2 << " m^2";
	}
}
