// /You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints

// 2 \le n \le 2 \cdot 10^5

// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
class Solution {
    public:
        int findMissing(const vector<int>& arr, int n){
        //    int sumOld = (n * (n + 1)) / 2;
        //    int sumNew = 0;
        //    for(int i = 0; i < n - 1; i++){
        //     sumNew += arr[i];
        //    }
        //    return sumOld - sumNew;
        // }
        int xor_all = 0;
        int xor_arr = 0;

        for(int i = 1; i <= n; i++){
            xor_all ^= i;
        }
        for(int nums : arr){
            xor_arr ^= nums;
        }

        return xor_all ^ xor_arr;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.findMissing(arr, n);
    return 0;
}
