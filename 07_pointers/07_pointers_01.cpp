#include <iostream>

void swapNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 10;
    std::cout<<"before:: x:"<<x<<" and y:"<<y<<std::endl;
    swapNumbers(&x,&y);
    std::cout<<"after:: x:"<<x<<" and y:"<<y<<std::endl;
}