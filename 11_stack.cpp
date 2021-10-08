// Application in reverse word, in compilers and in browser
// Time Complexity is constant O(1)
// Stack flow LIFO rules.


#include <iostream>
using namespace std;

#define MAX 5
int SIZE = 0;

class Stack{
    // all default private data or attribute or properties.
    int x[MAX];
    int top;

    public:
        Stack(){
            top = -1;
        }

        bool is_empt(){
            if(top == -1)
                return true;
            else
                return false;
        }

        bool is_full(){
            if(top == (MAX-1))
                return true;
            else
                return false;
        }

        int push(int data){
            if(!is_full()){
                ++top;
                ++SIZE;
                x[top] = data;
                return data;
            }
            else
                return -1;
        }

        int pop(){
            if(!is_empt()){
                int temp = x[top];
                --top;
                --SIZE;
                return temp;
            }
            else
                return -1;
        }

        void traverse(){
            if(!is_empt()){
                cout<<"STACK[";
                for(int i=0; i<SIZE; i++){
                    if(i==SIZE-1)
                        cout<<x[i];
                    else
                        cout<<x[i]<<", ";
                }
                cout<<"]";
            }
            else
                cout<<"Empty Stack.";

        }
};


int main(){
    Stack s1;
    s1.push(10); // time complexity O(1)
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.pop();   // time complexity O(1)
    s1.push(50);
    s1.traverse();
}
