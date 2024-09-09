#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int solve(int n) {
    if (n == 1) return 1;
    if (n % 2 == 1)
        return 1 + solve(3 * n + 1);
    else
        return 1 + solve(n / 2);
    return 0;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int ans = 0;
        for (int i = min(a, b); i <= max(a, b); i++) {
            ans = max(solve(i), ans);
        }
        cout << a << ' ' << b << ' ' << ans << "\n";
    }
}
