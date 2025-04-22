// A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

// Your task is to find out the number in row y and column x.
// Input
// The first input line contains an integer t: the number of tests.
// After this, there are t lines, each containing integers y and x.
// Output
// For each test, print the number in row y and column x.
// Constraints

// 1 \le t \le 10^5
// 1 \le y,x \le 10^9

// Example
// Input:
// 3
// 2 3
// 1 1
// 4 2

// Output:
// 8
// 1
// 15
// https://cses.fi/problemset/task/1071
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        
        ll n = max(x, y);
        ll ans;

        if(n % 2 == 0){
            if(x == n) ans = n * n - y + 1;
            else ans = (n - 1) * (n - 1) + x;
        } else{
            if(y == n) ans = n * n - x + 1;
            else ans = (n - 1) * (n - 1) + y;
        }
        cout << ans << endl;
    }
    return 0;
}
