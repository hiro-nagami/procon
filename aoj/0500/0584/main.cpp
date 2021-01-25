#include <iostream>
using namespace std;

int n = 0;
int num[10000];

void input() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> num[i];
    }
}

int combination(int a, int b) {
    int bd = 10;
    while(b >= bd) bd *= 10;
    
    return a * bd + b;
}

void output() {
    int ans[3] = {1000000001, 1000000001, 1000000001};
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (i != j) {
                int x = combination(num[i], num[j]);
                if (x < ans[2]) ans[2] = x;
                if (x < ans[1]) ans[2] = ans[1], ans[1] = x;
                if (x < ans[0]) ans[1] = ans[0], ans[0] = x;
            }
        }
    }

    cout << ans[2] << endl;
}

int main() {
    input();
    output();

    return 0;
}