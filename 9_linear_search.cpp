#include <iostream>
using namespace std;

bool linear(int x[], int value, int size){
    for(int i=0; i<size; i++){
        if(x[i]==value)
            return true;
    }
    return false;
}

int main(){
    int ar[]={10, 15, 8, -1, 6}, size, value=-10;
    size = sizeof(ar)/sizeof(ar[0]);
    if(linear(ar, value, size))
        cout<<value<<" is in array";
    else
        cout<<value<<" isn't in array";
}
