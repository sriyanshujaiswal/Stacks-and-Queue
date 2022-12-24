#include<iostream>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int qfront;
    int rear;

    Queue(int size){
        arr = new int[size];
        qfront = 0;
        rear= 0;

    }
void enqueue(int data){             // push
    if(rear== size){
        cout<<"Queue is full"<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}

int dequeue(){                         // pop
    if(qfront == rear){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else{
        int ans = arr[qfront];
        arr[qfront] = -1;
        qfront ++;
        if(qfront == rear)
        {
            qfront = 0;
            rear = 0;
        }
        return ans;
    }

}

int front(){
    if(qfront == rear){
        return -1;
    }
    else{
        return arr[qfront];
    }
}

bool isEmpty(){
    if(qfront== rear){
        return true;
    }
    else{
        return false;
    }
}
void print (){
        if(qfront ==  rear){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            for(int i=qfront; i<rear; i++){
                cout<< arr[i]<<" ";
            }
            cout<< endl;
        }
    }
};

int main (){
    Queue q(5);
    q. enqueue(1);
    q. enqueue(2);
    q. enqueue(3);
    q. enqueue(4);
    q. enqueue(5);
    q. enqueue(6);
    q. enqueue(7);
    q. print();
    //cout<<"Size of queue: "<< arr.size() <<endl;
    cout<<"Poped element is: "<< q. dequeue() <<endl;
    cout<<"Poped element is: "<< q. dequeue() <<endl;
    q. print();

    cout<<"Front Element is : "<< q.front()<< endl;
    cout<<"Queue is empty or not: "<< q. isEmpty()<< endl;


    return 0;
}
