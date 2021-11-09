#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    //TIPEDATA//
    float BTC;
    
    //kreasi
    cout << "==============================================" << endl;
    cout << "  KLASIFIKASI TINGKATAN HOLDER (PEMILIK BTC)  " << endl;
    cout << "==============================================" << endl;
    cout << "" << endl;
    
    //INPUT//
    cout << "Jumlah Bitcoin  :  "; cin >> BTC;

    //kreasi    
    cout << ""                                               << endl;
    
    //OUTPUT//
    if ( BTC<1 ){
    	cout << "Tipe Ranking    :  " << "SHRIMP"    << endl;
	}
	
	else if ( BTC<10 ){
    	cout << "Tipe Ranking    :  " << "CRAB"      << endl;
	}

    else if ( BTC>=10 && BTC<50 ){
    	cout << "Tipe Ranking    :  " << "OCTOPUS"   << endl;
	}
	
	else if ( BTC>=50 && BTC<100 ){
		cout << "Tipe Ranking    :  " << "FISH"      << endl;
	} 
	
	else if ( BTC>=100 && BTC<500 ){
		cout << "Tipe Ranking    :  " << "DOLPHIN"   << endl;
	}
	
	else if ( BTC>=500 && BTC<1000 ){
		cout << "Tipe Ranking    :  " << "SHARK"     << endl;
	}
	
	else if ( BTC>=1000 && BTC<5000 ){
		cout << "Tipe Ranking    :  " << "WHALE"     << endl;
	}
	
	else if ( BTC>=5000 ){
		cout << "Tipe Ranking    :  " << "HUMPBACK"  << endl;
	}
	
	return 0;
}   

