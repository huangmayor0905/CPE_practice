#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

bool control = true;

int main() {
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '\"') {
                if (control)
                    cout << "``";
                else
                    cout << "\'\'";
                control = !control;
            } else {
                cout << str[i];
            }
        }
        cout << '\n';
    }
}
