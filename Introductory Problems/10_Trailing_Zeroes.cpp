#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 5; n / i > 0; i *= 5) {
        count += n / i;
    }
    cout << count << endl;
    return 0;
}

Link - https://cses.fi/problemset/task/1618
