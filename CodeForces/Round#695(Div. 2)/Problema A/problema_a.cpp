#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,current;
    bool decreasing;

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans[n];

        //Parar a segunda posição em 8
        ans[0] = 9;
        if (n > 1) {
            for(int i=1;i<n;++i) {
                ans[i] = (8 + abs(1-i)) % 10;
            }
        }
        for(int i=0;i<n;++i) {
            cout << ans[i];
        }
        cout << endl;
    }
}
