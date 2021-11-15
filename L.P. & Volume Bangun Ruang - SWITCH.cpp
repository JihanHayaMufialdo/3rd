#include <iostream>
using namespace std;

int main(){
	
	int pilih;
	float phi = 3.14;
	
	cout << "LUAS PERMUKAAN DAN VOLUME BANGUN RUANG\n";
	cout << "======================================\n\n";
	cout << "1. Balok\n";
	cout << "2. Kubus\n";
	cout << "3. Tabung\n";
	cout << "4. Kerucut\n";
	cout << "5. Bola\n\n";
	cout << "Pilih : ";
	cin >> pilih;
	
	switch(pilih){
		case 1 :
			float p,l,t;
			cout << "\n------- BALOK -------\n\n";
			cout << "panjang (m) : ";
			cin  >> p; 
			cout << "lebar (m)   : ";
			cin  >> l;
			cout << "tinggi (m)  : ";
			cin  >> t;
			cout << "\nLuas Permukaan  : " << 2*(p*l + p*t + l*t)<< " m^2";
			cout << "\nVolume\t\t: " << p*l*t << " m^3";
		case 2 :
			float s;
			cout << "\n------- KUBUS -------\n\n";
			cout << "sisi (m)       : ";
			cin  >> s; 		
			cout << "\nLuas Permukaan  : " << 6*(s*s)<< " m^2";
			cout << "\nVolume\t\t: " << s*s*s << " m^3";
		case 3 :
			float r,h;
			cout << "\n------- TABUNG -------\n\n";
			cout << "jari-jari (m) : ";
			cin  >> r; 
			cout << "tinggi (m)    : ";
			cin  >> h;
			cout << "\nLuas Permukaan  : " << phi*r*r*h << " m^2";
			cout << "\nVolume\t\t: " << 2*phi*r*(r+h) << " m^3";
		case 4 :
			float j,g,m;
			cout << "\n------- KERUCUT -------\n\n";
			cout << "jari-jari (m)   : ";
			cin  >> j; 
			cout << "tinggi (m)      : ";
			cin  >> g; 
			cout << "sisi miring (m) : ";
			cin  >> m;
			cout << "\nLuas Permukaan  : " << phi*j*(m+j) << " m^2";
			cout << "\nVolume\t\t: " << (phi*j*j*g)/3 << " m^3";
		case 5 :
			float jari;
			cout << "\n------- BOLA -------\n\n";
			cout << "jari-jari (m) : ";
			cin  >> jari; 
			cout << "\nLuas Permukaan  : " << 4*phi*jari*jari << " m^2";
			cout << "\NVolume\t\t: " << 4/3*phi*jari*jari*jari << " m^3";
		default :
			main();	
	}

}
