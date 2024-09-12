#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

int main() {
    string str;
    while (cin >> str) {
        if (str == "0") return 0;
        bool control = true;
        int a = 0, b = 0;
        for (int i = 0; i < str.length(); i++) {
            if (control) {
                a += str[i] - '0';
            } else {
                b += str[i] - '0';
            }
            control = !control;
        }
        if (abs(a - b) % 11 == 0) {
            cout << str << " is a multiple of 11.\n";
        } else {
            cout << str << " is not a multiple of 11.\n";
        }
    }
}
