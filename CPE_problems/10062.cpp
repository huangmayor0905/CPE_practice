#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

bool cmp(pii a, pii b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

int main() {
    string str;
    while (getline(cin, str)) {
        unordered_map<int, int> mp;
        for (int i = 0; i < str.length(); i++) {
            mp[(int)str[i]]++;
        }
        vector<pii> vc(mp.begin(), mp.end());
        sort(vc.begin(), vc.end(), cmp);
        for (auto i : vc) {
            cout << i.first << ' ' << i.second << '\n';
        }
        cout << '\n';
    }
}
