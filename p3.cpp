#include <iostream>
using namespace std;

void shuffle(const int nums[], int n, int result[]) {
    for (int i=0; i<n; i++) {
        result[2*i] = nums[i];
        result[2*i+1]=nums[n+i];
    }
}

int main() {
    int nums[1000], result[1000];
    int n;

    cin >> n;
    for (int i=0; i<2*n; i++) {
        cin>>nums[i];
    }

    shuffle(nums, n, result);

    for (int i=0; i<2*n; i++) {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}