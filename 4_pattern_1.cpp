// pattern type-1
// if n=5

// first pattern
/* when cout<<"*";
    *
    **
    ***
    ****
    *****
*/


//second pattern
/* when cout<<i;
    1
    22
    333
    4444
    55555
*/

//third pattern
/* when cout<<j;
    1
    12
    123
    1234
    12345
*/

//fourth pattern. this pattern called Floyd's Triangle.
/* when cout<<++count<<" " ;
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/


#include <iostream>
using namespace std;

void forward_pattern(int n){
    // int count=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"; // get first pattern

            // cout<<i; // get second pattern
            // cout<<j; // get third pattern
            // cout<<++count<<" "; // get fourth pattern
        }
        cout<<endl;
    }
}

void backward_pattern(int n){
    int count=15;
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"*"; // get first pattern

            // cout<<i; // get second pattern
            // cout<<j; // get third pattern
            // cout<<++count<<" "; // get fourth pattern
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter pattern Length: ";
    cin>>n;
    forward_pattern(n);
    cout<<"---------Divisor between Forward and Backward---------\n";
    backward_pattern(n);
}
