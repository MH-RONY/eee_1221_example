// pattern type-2;
// if n=5;

// first pattern
/*
        *
       **
      ***
     ****
    *****
*/

// second pattern
/*
        *
       * *
      * * *
     * * * *
    * * * * *
*/

#include <iostream>
using namespace std;

void forward_pattern(int n){

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j < i){
                cout<<" ";
            }
            else{
                cout<<"*"; // for first pattern
                // cout<<"* "; // for second pattern
            }
        }
        cout<<endl;
    }
}

void backward_pattern(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j < i){
                cout<<" ";
            }
            else{
                cout<<"*"; // for first pattern
                // cout<<"* "; // for second pattern
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter Pattern Length: ";
    cin>>n;
    forward_pattern(n);
    cout<<"---------Divisor between Forward and Backward---------\n";
    backward_pattern(n);
    return 0;
}
