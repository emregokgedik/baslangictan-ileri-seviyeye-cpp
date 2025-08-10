#include <iostream>

template <typename T>
class Stack {
private:
    T* data;        // Yığın elemanlarını tutacak dinamik dizi
    int capacity;   // Dizinin kapasitesi
    int topIndex;   // Son elemanın indeksi (yığın tepesini gösterir)

public:
    // Kurucu fonksiyon (constructor)
    Stack(int cap) : capacity(cap), topIndex(-1) {
        data = new T[capacity]; // Dinamik olarak dizi ayırma
    }

    // Yıkıcı fonksiyon (destructor)
    ~Stack() {
        delete[] data; // Dinamik belleği serbest bırakma
    }
};
