#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int n=5;
    for(int i=1; i<=n; i++) {
        for(int j=n-1; j>=i; j--) {
            cout<<"  ";
        }
        for(int k=i-1; k>=1-i; k--) {
            cout<<i-abs(k)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
