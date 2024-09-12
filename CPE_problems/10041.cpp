#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define db double
#define pii pair<int, int>
#define pdd pair<double, double>
using namespace std;

// §ä¤¤¦ì¼Æ

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);
        int med;
        if (n % 2 == 0) {
            med = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        } else {
            med = arr[n / 2];
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(arr[i] - med);
        }
        cout << sum << '\n';
    }
}
