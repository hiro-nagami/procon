#include <iostream>
using namespace std;

int n, x, a;

int main() {
    
    cin >> n >> x;

    int exists = 0;

    for(int i = 0 ; i < n ; i++) {
        cin >> a;
        if (a != x) {
            exists = 1;

            cout << a;

            if (exists) cout << ' ';
        }
    }

    cout << endl;

    return 0;
}