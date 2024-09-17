#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (m == 0 || m == 1) {
            cout << "Boring!\n";
            continue;
        }
        bool check = false;
        vector<int> vc;
        vc.push_back(n);
        while (n != 1) {
            if (n % m != 0) {
                cout << "Boring!\n";
                check = true;
                break;
            }
            vc.push_back(n / m);
            n /= m;
        }
        vc.push_back(1);
        if (!check) {
            for (int i = 0; i < vc.size() - 1; i++) {
                cout << vc[i] << ' ';
            }
            cout << '\n';
        }
    }
}
