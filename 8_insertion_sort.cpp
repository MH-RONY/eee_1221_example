// Best case complexity omega(n)
// Worst case complexity O(n^2)
// Average case complexity theta(n^2)

#include <iostream>
using namespace std;

void selection_sort(int x[], int size){
    int key, j;
    for(int i=1; i<size; i++){
        key = x[i];
        j = i-1;
        while(key<x[j] && j>=0){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = key;
    }
}

void print(int x[], int size){
    for(int i=0; i<size; i++){
        cout<<x[i]<<", ";
    }
}

int main(){
    int ar[]={10, -8, 6, 0, 5}, size;
    size = sizeof(ar)/sizeof(ar[0]);
    selection_sort(ar, size);
    print(ar, size);
}

