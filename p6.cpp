#include "/Users/schhabra/Documents/codes/cppCodes/bits/stdc++.h"
using namespace std;
int main() {
    long long int n;
    cin >> n;
    long long int sum_sq = ((n)*(n+1)*(2*n+1))/6;
    long long int sum    = (n*(n+1))/2;
    cout << sum*sum - sum_sq << endl;
}