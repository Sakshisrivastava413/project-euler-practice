// https://projecteuler.net/problem=2

#include<iostream>

using namespace std;

unsigned long fib(long n) {
    int f0 = 0, f1 = 1, f2 = 1;
    unsigned long res = 0;
    do {
        f0 = f1;
        f1 = f2;
        f2 = f1 + f0;
        if(f1 % 2 == 0) res += f1;
    } while(f1 < n);
    return res;
}

int main() {
    cout << fib(4000000) << endl;
    return 0;
}