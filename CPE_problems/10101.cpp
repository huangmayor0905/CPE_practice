#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

void split(ll n) {
    if (n >= 10000000) {
        split(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        split(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        split(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        split(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n) cout << " " << n;
}

int main() {
    ll N;
    int Case = 0;
    while (cin >> N) {
        cout << setw(4) << ++Case << ".";
        if (N == 0)
            cout << " 0\n";
        else {
            split(N);
            cout << '\n';
        }
    }
}
