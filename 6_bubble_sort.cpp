// Best case complexity omega(n)
// Worst case complexity O(n^2)
// Average case complexity theta(n^2)

#include <iostream>
using namespace std;

void bubble_sort(int x[], int size){
    bool swap;
    for(int i=0; i<size-1; i++){
        swap = false;
        for(int j=0; j<size-i-1; j++){
            if(x[j]>x[j+1]){
                int temp;
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                swap = true;
            }
        }
        if(!swap)
            break;
    }
}

void print(int x[], int size){
    for(int i=0; i<size; i++){
        cout<<x[i]<<", ";
    }
}

int main(){
    int ar[]={5, 10, 2, 8, 6}, size;
    size = sizeof(ar)/sizeof(ar[0]);
    bubble_sort(ar, size);
    print(ar, size);
    return 0;
}
