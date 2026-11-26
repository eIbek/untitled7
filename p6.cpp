#include <iostream>
using namespace std;

void duplicateZeros(int arr[], int n) {
    int zeros = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }

    for (int i=n-1; i>=0; i--) {
        if (i+zeros<n) {
            arr[i+zeros] = arr[i];
        }
        if (arr[i]==0) {
            zeros--;
            if (i+zeros<n) {
                arr[i+zeros]=0;
            }
        }
    }
}
int main() {
    int arr[10000];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    duplicateZeros(arr, n);
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}