#include<iostream>
using namespace std;

long long int b, c;

int main() {
    cin >> b >> c;
    unsigned long long int  count = 0;

    if (b == 0) count += c;
    else if (c == 1) count += 2;
    else if (b < 0) {
        count += c;
        c -= 1;
        b *= -1;
        count += (b * 2 > c) ? c : (b * 2);
    } else if(b > 0) {
        count += c - 1;
        count += (b * 2 > c) ? c : (b * 2);
    }

    cout << count << endl;
    return 0;
}
