#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,n,ans,temp,old;

    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        int index[n];
        for(int i=0;i<n;++i) {
            cin >>index[i];
        }
        for (int i=1;i<n-1;++i) {
            if (index[i] > index[i-1] && index[i] > index[i+1]) { //HILL
                ans++;
            } else if (index[i] < index[i-1] && index[i] < index[i+1]) { //VALLEY
                ans++;
            }
        }
        for (int i=1;i<n;i++) {
            old = index[i];
            index[i] = index[i-1];
            temp = 0;
            for (int i=1;i<n-1;++i) {
                if (index[i] > index[i-1] && index[i] > index[i+1]) { //HILL
                    temp++;
                } else if (index[i] < index[i-1] && index[i] < index[i+1]) { //VALLEY
                    temp++;
                }
            }
            ans = min(ans, temp);
            index[i] = old;
        }
        cout << ans << endl;
    }
}
