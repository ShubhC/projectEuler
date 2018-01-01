#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int largest = 1;
    for(long long int i=2,N=n;n>1;++i) {
        while(n%i==0) {
            n/=i;
            largest = i;
        }
    }
    cout << largest << endl;
}