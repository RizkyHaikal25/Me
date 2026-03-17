#include <iostream>
using namespace std;

float EUR, GBP, AUD, NZD, JPY, USD;
float EURUSD = 1.15;
float GBPUSD = 1.33;
float AUDUSD = 0.71;
float USDJPY = 159.00;
float NZDUSD = 0.59;
int pilihan;

int main()
{
    cout << "17/03/2026\n";
    cout << "==================\n";
    cout << "Currency Converter\n";
    cout << "1.EURUSD = 1.15\n";
    cout << "2.GBPUSD = 1.33\n";
    cout << "3.AUDUSD = 0.71\n";
    cout << "4.USDJPY = 159.00\n";
    cout << "5.NZDUSD = 0.59\n";
    cout << "==================\n";
    cout << "Choose one of the currency rate";
    cin >> pilihan;

    if (pilihan == 1)
    {
        cout << "How much EUR do you have?\n";
        cin >> EUR;

        USD = EUR * EURUSD;
        cout << "You will have" << " " << USD << " " << "Us Dollar\n";
    }

    else if (pilihan == 2)
    {
        cout << "How much GBP do you have?\n";
        cin >> GBP;

        USD = GBP * GBPUSD;
        cout << "You will have" << " " << USD << " " << "Us Dollar\n";
    }

    else if (pilihan == 3)
    {
        cout << "How much AUD do you have?\n";
        cin >> AUD;

        USD = AUD * AUDUSD;
        cout << "You will have" << " " << USD << " " << "Us Dollar\n";
    }

    else if (pilihan == 4)
    {
        cout << "How much USD do you have?\n";
        cin >> USD;

        JPY = USD * USDJPY;
        cout << "You will have" << " " << USD << " " << "Us Dollar\n";
    }

    else if (pilihan == 5)
    {
        cout << "How much NZD do you have?\n";
        cin >> NZD;

        USD = NZD * NZDUSD;
        cout << "You will have" << " " << USD << " " << "Us Dollar\n";
    }
    
    else
    {
        cout << "the currency rate that you search\nIs not avaible :(";
    }
    

    return 0;
}