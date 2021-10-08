#include <iostream>
using namespace std;

bool is_leap_year(int year){
    bool flag=false;

    if(year%400 == 0){
        flag = true;
    }
    else if(year%100 != 0 && year%4 == 0){
        flag = true;
    }
    else{
        flag = false;
    }
    return flag;
}

int main(){
    int y;
    bool result;
    cout<<"Enter a Year: ";
    cin>>y;
    result = is_leap_year(y);
    if(result){
        cout<<y<<" is a  Leap Year."<<endl;
    }
    else{
        cout<<y<<" is a Common Year."<<endl;
    }
}
