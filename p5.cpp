#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    int ar[] = {2,3,5,7,11,13,17,19};
    long long int res = 1;
    for(int i=0;i<8;++i) {
        for(int j=ar[i];j<=20;j*=ar[i],res*=ar[i]);
    }
    cout << res << endl;
}