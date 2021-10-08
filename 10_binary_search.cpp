#include <iostream>
using namespace std;

bool binary(int x[], int value, int size){
    int low=0, high=size-1, mid;
    while(low<=high){
        mid = (low+high)/2;
        if(value == x[mid])
            return true;
        else if(value<x[mid]){
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return false;
}

int main(){
    int ar[]={10, 20, 30, 40, 50}, size, value=3;
    size = sizeof(ar)/sizeof(ar[0]);
    if(binary(ar, value, size))
        cout<<value<<" is in array.";
    else
        cout<<value<<" isn't in array.";
}
