#include <iostream>
#include <vector>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // sorting
    for (int i = 1; i < n; i++) {
        int j = i;
        int swan_count = 0;

        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(&arr[j], &arr[j - 1]);
            swan_count++;
            j--;
        }

        cout << "Pass " << i << ": ";

        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }

        cout << ", ";

        for (int k = 0; k < n; k++) {
            if (k == i) {
                cout << arr[k] << " | ";
            } else {
                cout << arr[k] << " ";
            }
        }

        cout << ", ";
        cout << "shifts = " << swan_count;
        cout << "\n";
    }

    return 0;
}