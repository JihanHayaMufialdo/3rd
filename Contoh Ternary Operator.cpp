#include <iostream>
using namespace std;

int main(){

    int jawaban1,jawaban2;
    string hasil1, hasil2;

    cout << "3+4 = ";
    cin >> jawaban1;
    hasil1 = (jawaban1 == 7) ? "Benar" : "Salah";
    cout << "Jawaban Anda " << hasil1 << endl;
    
    cout << "3*4 = ";
    cin >> jawaban2;
    hasil2 = (jawaban2 == 12) ? "Benar" : "Salah";
    cout << "Jawaban Anda " << hasil2 << endl;
    
    

    return 0;
}
