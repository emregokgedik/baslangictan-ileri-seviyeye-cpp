#include <iostream>
using namespace std;

int main() {
    char ad[20]; // Maksimum 19 karakter + null karakter

    cout << "Adinizi giriniz: ";
    cin >> ad; // Boşlukta durur (ör: "Emre Can" yazarsak sadece "Emre" alınır)

    cout << "Merhaba, " << ad << "! Hos geldin." << endl;

    return 0;
}
