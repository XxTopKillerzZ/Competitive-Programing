#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,n,k,input;

    cin >> t;

    while (t--) {
        int ans=0, temp_ans;
        cin >> n >> k;
        int p[n];
        int acumuladas[n];
        for(int i=0;i<n;++i) {
            cin >> p[i];
            if (i>0) {
                acumuladas[i] = acumuladas[i-1] + p[i];
            } else {
                acumuladas[i] = p[i];
            }
        }
        for (int i=n-1;i>0;--i) {
            if (p[i] / (double)acumuladas[i] > k / 100.0) {
                temp_ans = (p[i] * 100) / (double)k;

                if (p[i] / (double)acumuladas[i] <= k / 100.0) {

                } else {
                    temp_ans++;
                }
            }
        }
        ans = max(ans, temp_ans);
        cout << ans << endl;
    }
}
