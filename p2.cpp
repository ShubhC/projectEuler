#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    int sum = 0;
    int f1 = 1;
    int f2 = 1;
    int lim = 4000000;
    for(;(f1+f2)<=lim;) {
        int f3 = f1+f2;
        f1 = f2;
        f2 = f3;
        if( f3%2==0 ) {
            sum += f3;
        } 
    }
    cout << sum << endl;
    return 0;
}