#include<iostream>
using namespace std;

int n = 0, c = 0;

int main() {
    
    cin >> n >> c;

    int vsum = 0, ans = 0;

    for (int i = 0 ; i < n ; i++) {
        int x = 0, v = 0;
        cin >> x >> v;

        if (x * 2 < c) {
            vsum = max(vsum - x, 0);
        } else {
            vsum = max(vsum - (c - x), 0);
        }

        vsum += v;
        ans = max(ans, vsum);
    }

    cout << ans << endl;

    return 0;
}