#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
class Solution {
    public:
        long long increasingArray(vector<long long> arr, long long n) {
            long long count = 0;
            for(int i = 1; i < n; i++){
                if(arr[i] < arr[i - 1]){
                    count += (arr[i - 1] - arr[i]);
                    arr[i] = arr[i - 1];
                }
            }
            return count;
        }
};

int main() {
    long long n; cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.increasingArray(arr, n);
    return 0;
}