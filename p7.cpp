#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    vector<bool> ar(1000000,0);
    int count = 0;
    for(int i=2;i<ar.size();++i) {
        if( ar[i]==0 ) {
            for(int j=i*2;j<ar.size();j+=i) {
                ar[j] = 1;
            }
            ++count;
        }
        if( count==10001 )  {
            cout << i << endl;
            return 0;
        }
    }
    cout <<  "No prime found\n";
    return 0;
}