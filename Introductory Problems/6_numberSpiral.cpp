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