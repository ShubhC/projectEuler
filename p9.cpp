#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    for(int x=1;x<23;++x) {
        for(int y=1;y<23;++y) {
            if( x*(x+y)==500 ) {
                cout << (x*x-y*y)*(x*x+y*y)*(2*x*y) << endl;
            }
        }
    }
    return 0;
}