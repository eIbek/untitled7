#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char s[], int n) {
    int left=0;
    int right=n-1;
    while (left<right) {
        char t= s[left];
        s[left]=s[right];
        s[right]=t;
        left++;
        right--;
    }
}
int main() {
    char s[10000];
    cin.getline(s, 10000);
    reverseString(s,strlen(s));
    cout<<s<<endl;
    return 0;
}