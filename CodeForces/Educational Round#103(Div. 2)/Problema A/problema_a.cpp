#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,n,k,initial_k,i;
    double ans;

    cin >> t;

    while (t--) {
        cin >> n >> k;
        initial_k = k;
        i = 2;
        while (k < n) {
            k = initial_k * i;
            i++;
        }

        ans = k / (double)n;
        ans = ceil(ans);
        cout << ans << endl;
    }
}
