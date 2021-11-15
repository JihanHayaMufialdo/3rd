#include <iostream>
using namespace std;

int main(){

    int jawaban;
    string hasil;

    cout << "3+4 = ";
    cin >> jawaban;

    hasil = (jawaban == 7) ? "Benar" : "Salah";
    
    cout << "Jawaban Anda: " << hasil << endl;

    return 0;
}
