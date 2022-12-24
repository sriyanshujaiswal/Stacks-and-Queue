#include<iostream>
using namespace std;

class deque{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    deque(int n){
        arr = new int[n];
        size = n;
        front = rear =-1;
    }

    bool pushfront(int x){
        //check full or not 
        if (isfull())
        {
            cout<<"Queue is full"<< endl;
            return false;
        }
        else if(isEmpty()){
            front = rear =0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front --;
            arr[front] = x;
            return true;
        }
    }
    bool pushrear(int x){
        //check full or not 
        if (isfull() )
        {
            cout<<"Queue is full"<< endl;
            return false;
        }
        else if(isEmpty()){
            front = rear =0;
        }
        else if(rear == size-1 && front != 0)
        {   
            rear = 0;
        }
        else{
            rear ++;
        }
        arr[rear]= x;
        return true;
    }
    int popfront(){
        if(isEmpty()){
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
    int poprear(){
        if(isEmpty()){
            cout<<"Queue is Empty"<< endl;
            return -1;
        }
        int ans = arr[rear];
        arr[front] == -1;
        if(front == rear){         // single element is present
            front = rear =-1;
        }
        else if(rear == 0){
            rear = size-1;              // to maintain cyclic nature
        }
        else{
            rear --;
        }
        return ans;
    }

    int getfront(){
        if(isEmpty()){
            cout<<"Queue is Empty"<, endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int getrear(){
        if(isEmpty()){
            cout<<"Queue is Empty"<, endl;
            return -1;
        }
        else{
            return arr[rear];
        }
    }
    bool isEmpty(){
        if(front == -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if ((front == 0 && rear == size-1) || (front != 0 && rear ==(front-1)&(size-1)) )
        {
            cout<<"Queue is full"<< endl;
            return true;
        }
        else{
            return false;
        }
    }

};