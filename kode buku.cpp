#include <iostream>
using namespace std;
int main(){
	
	//kode buku
	
	int a[3] = {1111,2222,1414};
	
	cout << "masukkan kode buku : ";
	cin >> a[3];
	cout << "\n";
	
	if(a[3]==1111){
		cout << "KATA by Rintik Sedu";
	}
	else if(a[3]==2222){
		cout << "TENTANG KAMU by Tere Liye";
	}
	else if(a[3]==1414){
		cout << "NEGERI PARA BEDEBAH by Tere Liye";
	}
	else{
		cout << "!! BUKU TIDAK DITEMUKAN !!";
	}
	
}		
	
