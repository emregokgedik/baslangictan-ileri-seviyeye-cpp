#include <iostream>
#include <string>
using namespace std;

int main() {
    string ad;

    cout << "Adinizi giriniz: ";
    cin >> ad; // Boşlukta durur (ör: "Emre Can" yazarsak sadece "Emre" alınır)

    cout << "Merhaba, " << ad << "! Hos geldin." << endl;

    return 0;
}
