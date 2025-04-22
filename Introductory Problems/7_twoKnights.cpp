// Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Constraints

// 1 \le n \le 10000

// Example
// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848
https://cses.fi/problemset/task/1072

#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n; cin >> n;
    for(long long k = 1; k <= n; ++k){
        long long total = k * k * (k * k - 1) / 2;

        long long attack = 0;
        if(k > 2){
            attack = 4 * (k - 1) * (k - 2);
        }
        cout << (total - attack) << endl;
    }
    return 0;
}
