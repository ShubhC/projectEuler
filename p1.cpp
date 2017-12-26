#include<bits/stdc++.h>
using namespace std;
int main() {
    int count = 0;
    for(int i=3;i<1000;++i) {
        if( i%3==0 || i%5==0 ) {
            count += i;
        }
    }
    cout << count << endl;
    return 0;
}
