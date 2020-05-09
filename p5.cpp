// https://projecteuler.net/problem=5

#include<iostream>

using namespace std;

int divisible(int n) {
    for(int i = 1; i <= 20; i++) {
        if(n % i != 0) {
            return -1;
        }
    }
    return n;
}

int main() {
    int i = 1;
    while(i) {
        int num = divisible(i);
        if(num == -1) i++;
        else {
            cout << num << endl;
            break;
        }
    }
    return 0;
}