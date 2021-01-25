#include<iostream>
using namespace std;

int n = 0, y = 0;
int a = -1, b = -1, c = -1;

bool check(int i, int j, int k) {
    if  ((i >= 0 && j >= 0 && k >= 0) &&
         (i + j + k == n) &&
         (10 * i + j * 5 + k == y)) {
            a = i, b = j, c = k;
            return true;
    }

    return false;
}

void calculate() {
    int max_man = y / 10;

    if (max_man > n) return;

    if (check(max_man, 0 , 0)) return;

    for (int i = max_man ; i >= 0 ; i--) {
        int max_5sen = (y - i * 10) / 5;
	
        if (i + max_5sen > n) continue;

        if (check(i, max_5sen , 0)) return;

        for (int j = max_5sen; j >= 0 ; j--) {
            if (check(i, j, n - i - j)) return;
        }
    }

    return;
} 

int main() {
    cin >> n >> y;
    y /= 1000;
    
    calculate();

    cout << a << " " << b << " " << c << endl;

    return 0;
}
