#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int s=3;
    for(int i=s; i>=-s; i--) {
        for(int j=s; j>=abs(i); j--) {
            cout<<"*  ";
        }
        cout<<"\n";
    }
    return 0;
}
