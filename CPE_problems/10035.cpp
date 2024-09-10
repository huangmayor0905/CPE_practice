#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    int n1, n2;
    while (cin >> n1 >> n2) {
        if (n1 == 0 && n2 == 0) return 0;

        int carry = 0, cnt = 0;
        while ((n1 != 0) || (n2 != 0)) {
            int a = n1 % 10, b = n2 % 10;
            if (a + b + carry >= 10) {
                carry = 1;
                cnt++;
            } else {
                carry = 0;
            }

            n1 /= 10;
            n2 /= 10;
        }

        if (cnt == 0) {
            cout << "No carry operation.\n";
        } else {
            cout << cnt << ((cnt == 1) ? " carry operation.\n" : " carry operations.\n");
        }
    }
}
