// Application in CPU Scheduling, Memory Management and Traffic Management
// Time Complexity is constant O(1)
// Stack flow FIFO rules.
//There are 4 types of Queue. But this is implementation of Simple Queue.

#include <iostream>
using namespace std;
#define MAX 5
int SIZE;

class Queue{
    int x[MAX];
    int head, tail;

    public:
    Queue(){
        head = -1;
        tail = -1;
    }

    bool is_empt(){
        if(head==-1)
            return true;
        return false;
    }

    bool is_full(){
        if(tail==MAX-1)
            return true;
        return false;
    }

    int enqueue(int item){
        if(!is_full()){
            if(head==-1)
                head=0;
            ++tail;
            x[tail]=item;
            return item;
        }
        else
            return -1;
    }

    int dequeue(){
        if(!is_empt()){
            int temp;
            if(head==tail){
                temp = x[head];
                head = -1;
                tail = -1;
                return temp;
            }
            temp = x[head];
            ++head;
            return temp;
        }
        else
            return -1;
    }

    void traverse(){
        if(!is_empt()){
            cout<<"Queue[";
            for(int i=head; i<=tail; i++){
                cout<<x[i]<<", ";
            }
            cout<<"]";
        }
        else
            cout<<"Queue is Empty";
    }
};

int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    int y= q1.dequeue();
    cout<<y<<endl;
    q1.traverse();
}
