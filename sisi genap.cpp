#include <iostream>
using namespace std;

int main(){
	
	int s;
	
	cout << "!! sisi persegi harus genap !! \n\n";
	cout << "sisi : ";
	cin >> s;
	
	if (s%2!=0){
		cout << "\nsisi persegi bukan bilangan genap\n";
	}
	else{
		cout << "\n\nLuas\t: " << s*s;
		cout << "\nVolume\t: " << s*s*s;
		cout << "\n";
	}
	
}
