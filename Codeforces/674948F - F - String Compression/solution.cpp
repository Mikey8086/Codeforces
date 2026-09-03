#include <iostream>
#include <string>
using namespace std;

void solve() {
    string str;
    cin >> str;

    int size = str.size();

    for (int i = 0; i < size; i++) {
        int count = 1;
        int j = i;

        while (j + 1 < size && str[j] == str[j + 1]) {
            count++;
            j++;
        }

        if (count > 1) {
            cout << str[i] << count;
        } else {
            cout << str[i];
        }

        i = j;
    }

    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}