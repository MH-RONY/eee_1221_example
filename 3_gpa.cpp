#include <iostream>
using namespace std;

float cg(float credit, float grade){
    return credit*grade;
}

int main(){
    float credit, grade, sum_cg=0, tc=0, gpa;
    int num;
    cout<<"How many Course: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<endl;
        cout<<i<<" th Course Credit: ";
        cin>>credit;
        cout<<i<<" th Course Grade: ";
        cin>>grade;
        sum_cg += cg(credit, grade);
        tc += credit;
    }

    gpa = sum_cg/tc;
    cout<<"\nYour GPA: "<<gpa<<endl;
    return 0;
}
