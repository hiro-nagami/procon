#include <iostream>
using namespace std;

int ans[4] = {};


int evaluate(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return  -1; 
    if (a >= b + c) return 0;

    int aa = a*a, bb = b*b, cc = c*c;

    if (aa == bb + cc) return 1;
    if (aa < bb + cc) return 2;
    
    return 3;
}

void input() {
    int a, b, c;

    for (int i = 0 ; i < 4 ; i++) ans[i] = 0;

    for (; cin >> a >> b >> c ; ){
        if (a < b) {
            b = b - a;
            a = a + b;
            b = a - b;
        }
        if (a < c) {
            c = c - a;
            a = c + a;
            c = a - c;
        }

        int e = evaluate(a, b, c);
        if (e <= 0) return;

        ans[0]++, ans[e]++;
    }
}

void ouptut() {
    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << ' ' << ans[3] << endl;
}


int main() {

    input();
    ouptut();    

    return 0;
}