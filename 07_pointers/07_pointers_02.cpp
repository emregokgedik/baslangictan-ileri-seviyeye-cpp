#include <iostream>

int main(){
    int sayilar[] = {1,2,3,4,5};
    int* p = sayilar;
    for(int i = 0; i < 5; i++){
        std::cout<< *(p+i) << " ";
    }
}