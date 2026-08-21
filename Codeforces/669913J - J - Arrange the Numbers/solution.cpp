#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        int start = 0;
        int end = n - 1;
        int number = 1;

        while (start <= end) {
            if (number % 2 == 0) {
                arr[end] = number;
                number++;
                end--;
            } else {
                arr[start] = number;
                number++;
                start++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}