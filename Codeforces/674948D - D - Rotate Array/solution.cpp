#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    if (n == 0) {
        cout << '\n';
        return;
    }

    d %= n;

    for (int i = d; i < n; i++) {
        cout << arr[i] << ' ';
    }

    for (int i = 0; i < d; i++) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}