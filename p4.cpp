#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
bool ispalin(long long int n) {
    string a =  to_string(n);
    string b = a;
    reverse(b.begin(),b.end());
    return a==b;
}
int main() {
    long long int largest = -1;
    for(long long int i=100;i<1000;++i) {
        for(long long int j=100;j<1000;++j) {
            long long int n = i*j;
            if( ispalin(n) ) {
                largest = max( largest, n );
            }
        }
    }
    cout << largest << endl;
}