#include <iostream>
#include <cmath>
using namespace std;

float luas, sisi, alas, tinggi, panjang, lebar, a, b, c;
int pilihan;

int main(){
    cout << "Kalkulasi luas bangun datar" << endl;

    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Panjang miring Segitiga" << endl;

    cout << "masukan pilihan ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        cout << "Masukan sisi = ";
        cin >> sisi;

        luas = sisi * sisi;
        cout << luas << "cm" << endl;
    }
    
    else if (pilihan == 2)
    {
        cout << "Masukan Panjang = " << endl;
        cin >> panjang;

        cout << "Masukan Lebar = " << endl;
        cin >> lebar;

        luas = panjang * lebar;
        cout << luas << "cm" << endl;
    }

    else if (pilihan == 3)
    {
        cout << "Masukan Alas = " << endl;
        cin >> alas;

        cout << "Masukan Tinggi = " << endl;
        cin >> tinggi;

        luas = alas * tinggi / 2;
        cout << luas << "cm" << endl;
    }

    else if (pilihan == 4)
    {
        cout << "masukan a = ";
        cin >> a;

        cout << "masukan b = ";
        cin >> b;

        c = sqrt((a*a)+(b*b));
        cout << c << "cm" << endl;
    }
    
    else
    {
        cout << "Ngasih input yang bener lah :/";
    }

    return 0;

}