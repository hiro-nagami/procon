#include <iostream>
using namespace std;

#define H 10
#define W 10

char s[H+2][W+2];

int main() {
    int h, w;

    cin >> h >> w;

    for (int i = 0 ; i < h + 2 ; i++) {
        for (int j = 0 ; j < w + 2 ; j++) {
            s[i][j] = '.';
        }
    }

    for (int i = 1 ; i < h + 1 ; i++)
    for (int j = 1 ; j < w + 1 ; j++)
    cin >> s[i][j];


    int result = 0;

    for (int i = 0 ; i < h + 2 ; i++) {
        for (int j = 0 ; j < w + 2 ; j++) {
            int black = 0;
            if (s[i][j] == '#')black ++;
            if (s[i+1][j] == '#')black ++;
            if (s[i][j+1] == '#')black ++;
            if (s[i+1][j+1] == '#')black ++;
            if ((black == 1 || black == 3))result ++;
        }
    }

    cout << result << endl;

    return 0;
}