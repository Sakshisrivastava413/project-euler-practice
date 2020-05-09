// https://projecteuler.net/problem=6

#include<iostream>

using namespace std;

int main() {
    int n = 100;
    int sum = (n * (n + 1)) / 2;
    int squareSum = (n * (n + 1) * ((2 * n) + 1)) / 6;
    cout << (sum * sum) - squareSum << endl;
    return 0;
}