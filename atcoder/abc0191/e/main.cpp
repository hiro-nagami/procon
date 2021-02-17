#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX_D 300001
#define N 2000
#define M 2000

int d[N][M];

int n, m;
int ans;

void input() {
    int a, b, c;
    while(cin >> a >> b >> c) d[a-1][b-1] = min(d[a-1][b-1], c);
}

void warshall_floyd() {
    int z = max(n, m);
    for (int i = 0; i < z; i++)
        for (int j = 0; j < z; j++)
            for (int k = 0; k < z; k++) 
                d[j][k] = min(d[j][k], d[j][i] + d[i][k]);   
}

void evaluate() {
    for (int i = 0 ; i < n ; i++) {
        int ans = -1;

        for (int j = 0 ; j < m ; j++)
            if (d[i][j] < MAX_D && d[j][i] < MAX_D) {
                
                if (ans < 0) 
                    ans = d[i][j] + d[j][i];
                else
                    ans = min(ans, d[i][j] + d[j][i]);
            }
        cout << ans << endl;
    }
}

int main() {
    ans = MAX_D;
    cin >> n >> m;

    for (int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < m ; j++) 
            d[i][j] = MAX_D;

    input();

    warshall_floyd();

    evaluate();


    return 0;
}