// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
// Input
// The only input line has an integer n.
// Output
// Print the result modulo 10^9+7.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 8

Link to the question - https://cses.fi/problemset/task/1617

#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << mod_pow(2, n, MOD) << endl;
    return 0;
}
