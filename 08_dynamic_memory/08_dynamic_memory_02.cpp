#include <iostream>

void memoryLeak(){
    int* p = new int;    
}

int main(){
for (int i = 0; i < 1000000; i++) {
    memoryLeak();
}
    std::cout<<"Program bitti";
}