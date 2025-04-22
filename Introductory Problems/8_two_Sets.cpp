// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints

// 1 \le n \le 10^6

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO

Link to the question - https://cses.fi/problemset/task/1092


#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    long long n; 
    cin >> n; 
    long long total = n * (n + 1) / 2;
    
    if(total % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    vector<int> a, b;
    long long half = total / 2;

    for (int i = n; i >= 1; --i) {
        if (half < i) {
            b.push_back(i);
        } else {
            a.push_back(i);
            half -= i;
        }
    }

    cout << a.size() << endl;
    for (int x : a) cout << x << ' ';
    cout << endl << b.size() << endl;
    for (int x : b) cout << x << ' ';
    cout << endl;

    return 0;
}
