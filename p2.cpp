#include <iostream>
using namespace std;

int largestAltitude(const int gain[], int n) {
    int altitude=0;
    int highest=0;
    for (int i=0; i<n; i++) {
        altitude +=gain[i];
        if (altitude>highest) {
            highest=altitude;
        }
    }
    return highest;
}
int main() {
    int gain[100];
    int n;
    cin >> n;
    for (int i = 0; i<n; i++) {
        cin>>gain[i];
    }
    cout << largestAltitude(gain, n) << endl;
    return 0;
}
