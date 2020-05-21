// usestack.cpp - for CS 24 lab practice using stacks
// Chenhao Hu, 05/19

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;

    s.push(10);
    s.push(20);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    Stack numbers;

    numbers.push(10);
    numbers.push(3);
    numbers.push(2);

    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left * right);

    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left + right);

    cout << numbers.top() << endl;

     return 0;
}
