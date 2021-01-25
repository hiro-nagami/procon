#include<iostream>
using namespace std;

int a = 0, b = 0, c = 0, x = 0, y = 0;

int main() {
    cin >> a >> b >> c >> x >> y;

    int ab = min (a + b, c * 2);

    int cost = 0;
    if (x > y) {
        int z = x - y;
        cost += ab * y;
        cost += min(ab, a) * z;
    } else {
        int z = y - x;
        cost += ab * x;
        cost += min(ab, b) * z;
    }

    cout << cost << endl;

    return 0;
}