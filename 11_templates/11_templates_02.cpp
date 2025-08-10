#include <iostream>

template <typename T>
class Stack {
private:
    T* data;
    int capacity;
    int topIndex;

public:
    Stack(int cap) : capacity(cap), topIndex(-1) {
        data = new T[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    // Eleman ekleme (push)
    void push(T value) {
        if (topIndex >= capacity - 1) {
            std::cout << "Stack is full! Cannot push " << value << std::endl;
            return;
        }
        data[++topIndex] = value;
    }

    // Eleman çıkarma (pop)
    void pop() {
        if (topIndex < 0) {
            std::cout << "Stack is empty! Cannot pop." << std::endl;
            return;
        }
        --topIndex;
    }

    // Tepedeki elemanı gösterme
    T top() const {
        if (topIndex < 0) {
            throw std::out_of_range("Stack is empty!");
        }
        return data[topIndex];
    }

    // Yığın boş mu kontrol etme
    bool isEmpty() const {
        return topIndex < 0;
    }
};

int main() {
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    std::cout << "Top element (intStack): " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "After pop, top element: " << intStack.top() << std::endl;

    Stack<char> charStack(3);
    charStack.push('A');
    charStack.push('B');
    std::cout << "Top element (charStack): " << charStack.top() << std::endl;
    charStack.pop();
    std::cout << "After pop, top element: " << charStack.top() << std::endl;

    return 0;
}
