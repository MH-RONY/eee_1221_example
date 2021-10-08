// Here we get both pattern and last fibonacci number;

#include <iostream>
using namespace std;

int fibo(int first, int second){
    return first+second;
}

int main(){
    int first=1, second=1, result=1, n;
    cout<<"Enter fibonacci term: ";
    cin>>n;
    if(n>=1)
        cout<<"1";
    if(n>=2)
        cout<<", 1";
    if(n>=3){
        for(int i=3; i<=n; i++){
        result = fibo(first, second);
        cout<<", "<<result;
        first = second;
        second = result;
    }
    }
    cout<<"\nThe Last Fiboracci Number is = "<<result;

}
