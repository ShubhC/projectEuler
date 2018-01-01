#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    for(int p=1;p<=998;++p) {
        for(int q=p+1;q<1000;++q) {
            long long int r = 1000-p-q;
            if( r*r==(p*p+q*q) ) {
                cout << p*q*r << endl;
            }
        }
    }
    return 0;
}