#include <iostream>
using namespace std;

int main(){

    int jawaban1,jawaban2,jawaban3;
    string hasil1, hasil2,hasil3;

    cout << "3 + 4 = ";
    cin >> jawaban1;
    hasil1 = (jawaban1 == 7) ? "Benar" : "Salah";
    cout << "Jawaban Anda " << hasil1 << endl;
    
    cout << "3 * 4 = ";
    cin >> jawaban2;
    hasil2 = (jawaban2 == 12) ? "Benar" : "Salah";
    cout << "Jawaban Anda " << hasil2 << endl;
    
    cout << "10 % 3 = ";
    cin >> jawaban3;
    hasil3 = (jawaban3 == 1) ? "Benar" : "Salah";
    cout << "Jawaban Anda " << hasil3 << endl;
    
    

    return 0;
}
