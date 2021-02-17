#include <iostream>
using namespace std;

int v, t, s, d;
int main() {
    cin >> v >> t >> s >> d;

    int t_dis = v * t;
    int s_dis = v * s;

    cout << (t_dis > d || d > s_dis ? "Yes" : "No") << endl;

    return 0;
}