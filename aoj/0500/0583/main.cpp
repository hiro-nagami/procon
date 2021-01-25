#include <iostream>
using namespace std;

int minimum = 100000001, n = 0;
int num[3] = {};

void input() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> num[i];
}

bool check(int d) {
    for (int i = 0 ; i < n ; i++) if(num[i] % d) return false;
    return true;
}

void output() {
    for (int i = 1 ; ; i++) {
        for (int j = 0 ; j < n ; j++) if (num[j] < i) return;
        if (check(i)) cout << i << endl;
    }
        
 }

int main() {
    input();
    output();
    return 0;
}