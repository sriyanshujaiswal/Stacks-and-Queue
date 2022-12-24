#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    CircularQueue(int n)
    {
        arr = new int[n];
        size = n;
        front =-1;
        rear= -1;

    }
    bool enqueue(int value)
    {
        if ((front == 0 && rear == size-1) || (rear ==(front-1)&(size-1)) )
        {   
            cout<<"Queue if full";
            return false;
        }
        else if(front == -1)  // first elemeny=t to  push
        {
            front = rear = 0;
            arr[rear] = value; 
        }
        else if(rear == size-1 && front != 0)
        {   
            rear = 0;
            arr[rear] = value;
        }
        else {
            rear++;
            arr[rear]= value;
        }
        return true;
    }

    int dequeue(){
        if(front ==-1){
            cout<<"Queue is Empty"<< endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] == -1;
        if(front == rear){         // single element is present
            front = rear =-1;
        }
        else if(front == size-1){
            front = 0;              // to maintain cyclic nature
        }
        else{
            front ++;
        }
        return ans;
    }
    void print(){
        if(front ==-1 ){
            cout<<"Queue is empty"<<endl;
        }
        else {
            for(int i = front ; i<=rear ;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<< endl;
    }
};

int main(){
    CircularQueue c(10);

    c. enqueue(10);
    c. enqueue(12);
    c. enqueue(14);
    c. print();
    cout<<"Poped element is : "<<c. dequeue()<<endl;
    c. enqueue(16);
    c. enqueue(18);
    cout<<"Poped element is : "<<c. dequeue()<<endl;
    c. print();
    return 0;
}