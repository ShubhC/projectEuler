#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    vector<bool> prime(2000000,0);
    long long int sum = 0;
    for(int i=2;i<prime.size();++i) {
        if( prime[i]==0 ) {
            sum += i;
        }
        for(int j=i;j<prime.size();prime[j]=1,j+=i);
    }
    cout << sum << endl;
}