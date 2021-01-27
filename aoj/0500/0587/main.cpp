#include <iostream>
using namespace std;

int simulate() {
    int n, m;

    cin >> n >> m;

    int ret = m;
    for (int i = 0 ; i < n ; i++) {
        int a, b;
        cin >> a >> b;
        m = m + a - b;

        if(m < 0) {
            ret = -1;
            break;
        }

        ret = max(ret, m);
    }

    return ret;
}

int main() {
    int s = simulate();
    cout << (s < 0 ? 0 : s) << endl;;
    return 0;
}