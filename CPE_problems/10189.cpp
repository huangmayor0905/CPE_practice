#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int d[8][2] = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, -1},
    {0, 1},
    {1, -1},
    {1, 0},
    {1, 1},
};

int main() {
    int a, b, Case = 1;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) return 0;

        char g[a + 2][b + 2];
        for (int i = 0; i < a + 2; i++) {
            for (int j = 0; j < b + 2; j++) {
                g[i][j] = ' ';
            }
        }

        string str;
        for (int i = 1; i < a + 1; i++) {
            cin >> str;
            for (int j = 1; j < b + 1; j++) {
                g[i][j] = str[j - 1];
            }
        }

        cout << "Field #" << Case << ":\n";
        for (int i = 1; i < a + 1; i++) {
            for (int j = 1; j < b + 1; j++) {
                if (g[i][j] == '.') {
                    int cnt = 0;
                    for (int k = 0; k < 8; k++) {
                        int nx = i + d[k][0];
                        int ny = j + d[k][1];
                        if (g[nx][ny] == '*' && nx >= 0 && ny >= 0 && nx <= a + 1 && ny <= b + 1) cnt++;
                    }
                    cout << cnt;
                } else {
                    cout << '*';
                }
            }
            cout << '\n';
        }
        cout << '\n';

        Case++;
    }
}
