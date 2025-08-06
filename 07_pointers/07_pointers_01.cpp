#include <iostream>

//İki değişkenin gerçekten bellekteki değerini (kopyasını değil, kendisini) değiş tokuş eden fonksiyon
void swapNumbers(int* a, int* b){
    int temp = *a; //a'nın gösterdiği değeri temp'te tut
    *a = *b; // b'nin gösterdiği değeri, a'nın gösterdiği değere ata
    *b = temp; // temp'i b'nin gösterdiği değere ata
}

int main(){
    int x = 5, y = 10;
    std::cout<<"before:: x:"<<x<<" and y:"<<y<<std::endl;
    swapNumbers(&x,&y);
    std::cout<<"after:: x:"<<x<<" and y:"<<y<<std::endl;
}