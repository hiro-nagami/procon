#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x;
    int y;

    bool operator<(const Point& right) const {
        return right.x > x;
    }
};

int n = 0;
int ans = 100000001;
vector<Point> v;

void input() {
    cin >> n;
    
    for (int i = 0 ; i < n ; i++) {
        int x, y;
        cin >> x >> y;
        Point point = {x, y};
        v.push_back(point);
    }

    sort(v.begin(), v.end());
}

void output() {
    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = i + 1 ; j < n ; j++) {
            Point pi = v[i], pj = v[j];
            Point d = { pi.x - pj.x, pi.y - pj.y };

            if (d.x * d.x >= ans) break;

            ans = min(ans, d.x * d.x + d.y * d.y);
        }
    }

    cout << ans << endl;
}

int main() {
    input();
    output();
    return 0;
}