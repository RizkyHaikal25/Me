#include <iostream>
#include <cmath>
using namespace std;

float luas, sisi, alas, tinggi, panjang, lebar, a, b, c;
int jarijari;
int pilihan;

int main(){
    cout << "Kalkulasi luas bangun datar" << endl;

    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Panjang miring Segitiga" << endl;
    cout << "5. Lingkaran" << endl;

    cout << "masukan pilihan ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        cout << "Masukan sisi = " << "cm";
        cin >> sisi;

        luas = sisi * sisi;
        cout << luas << "cm" << endl;
    }
    
    else if (pilihan == 2)
    {
        cout << "Masukan Panjang = " << "cm" << endl;
        cin >> panjang;

        cout << "Masukan Lebar = " << "cm" << endl;
        cin >> lebar;

        luas = panjang * lebar;
        cout << luas << "cm" << endl;
    }

    else if (pilihan == 3)
    {
        cout << "Masukan Alas = " << "cm" << endl;
        cin >> alas;

        cout << "Masukan Tinggi = " << "cm" << endl;
        cin >> tinggi;

        luas = alas * tinggi / 2;
        cout << luas << "cm" << endl;
    }

    else if (pilihan == 4)
    {
        cout << "masukan a = " << "cm";
        cin >> a;

        cout << "masukan b = " << "cm";
        cin >> b;

        c = sqrt((a*a)+(b*b));
        cout << c << "cm" << endl;
    }

    else if (pilihan == 5)
    {
        cout << "masukan jari jari = " << "cm";
        cin >> jarijari;

        if (jarijari % 7 == 0)
        {
            luas = 22/7 * jarijari * jarijari;
        }
        
        else
        {
            luas = 3.14 * jarijari * jarijari;
        }

        cout << luas << "cm";
        
    }
    

    else
    {
        cout << "Ngasih input yang bener lah :/";
    }

    return 0;

}
