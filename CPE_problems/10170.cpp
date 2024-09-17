#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    ll S, D;
    while (cin >> S >> D) {
        while (D > 0) {
            D -= S++;
        }
        cout << S - 1 << '\n';
    }
}
