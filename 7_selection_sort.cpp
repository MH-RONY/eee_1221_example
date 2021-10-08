// Best case complexity omega(n^2)
// Worst case complexity O(n^2)
// Average case complexity theta(n^2)

#include <iostream>
using namespace std;

void selection_sort(int x[], int size){
    int temp, min;
    for(int i=0; i<size-1; i++){
        min = i;
        for(int j=i+1; j<size; j++){
            if(x[min] > x[j])
                min = j;
        }
        temp = x[i];
        x[i] = x[min];
        x[min] = temp;
    }
}

void print(int x[], int size){
    for(int i=0; i<size; i++){
        cout<<x[i]<<", ";
    }
}

int main(){
    int ar[]={-10, 15, 6, 8, 0}, size;
    size = sizeof(ar)/sizeof(ar[0]);
    selection_sort(ar, size);
    print(ar, size);
    return 0;
}
