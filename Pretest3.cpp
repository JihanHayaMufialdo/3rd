 #include <iostream>
 #include <cmath>
 using namespace std;

 int main (){
	
	//TIPEDATA//
	int a;
	int b;
	/* 
	   ket :
	   a = gaji karyawan
	   b = UMR daerah
	*/
	
	//kreasi
	cout << "  KETERANGAN KONDISI GAJI KARYAWAN BERDASARKAN UMR DAERAH  "  << endl;
	cout << "==========================================================="  << endl;
	cout << ""                                                             << endl;
	cout << "!! Masukkan besar gaji Anda dan besar UMR daerah Anda !!"     << endl;
	cout << "________________________________________________________"     << endl;
	cout << ""                                                             << endl;
	
	//INPUT//
	cout << "Besar Gaji : " ; cin >> a;
	cout << "UMR Daerah : " ; cin >> b;
	
	//kreasi
        cout << ""             << endl;
	cout << "-------------" << endl;
	cout << "KETERANGAN :" << endl;
	cout << "-------------" << endl;
	cout << ""             << endl;
	
	
	//OUTPUT//
	if      (a<b) {
		cout << "Gaji Anda di bawah UMR"      << endl;	
	}
	
	else if (a==b){
		cout << "Gaji Anda setara dengan UMR" << endl;
	}
	
	else if (a>b) {
		cout << "Gaji Anda di atas UMR"       << endl;
	}
	
	//kreasi
	cout << ""                                                             << endl;
	cout << "====================== TETAP SEMANGAT ======================" << endl;
	
	return 0;
	
 }
