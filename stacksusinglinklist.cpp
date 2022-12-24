#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* top;

      //Constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> top = NULL;
    }
    //Distructor
    ~Node(){
        int value = this -> data;
        if(this-> next != NULL)
        {
            delete next;
            this-> next = NULL;
        }
        cout<<" Memory is free for node with data  "<< value<< endl;
    } 
void push(int d)
{
    Node* temp= new Node(d);
    if(! temp){
        cout<<"\nStack Underflow";
        return ;
    }
    temp= top-> next;
    top = temp;
}

int isEmpty(){
    return top== NULL;
}

int peek(Node* &top){
    if(! isEmpty(top)){
        return top-> data;
    }
    else{
        exit(1);
    }
}

void pop(){
    Node* temp;
    if(top== NULL){
        cout<<"\nStack Underflow"<< endl;
        return ;
    }
    else{
        temp= top;
        top  = top-> next;
        delete temp; 
    }
}

void print()){
    Node* temp;
    if(top == NULL){
        cout<<"\nStack Underflow";
        return ; 
    }
    else{
        temp = top;
        while (temp != NULL)
        {
            cout<<temp-> data<<" " ;
            temp=  temp-> next;
            }
        }
    }
};

int mina(){
    Node*  node1=  new Node(7);
    Node* top= node1;
    //push
    push(11);
    push(22);
    push(33);
    push(44);
    print();
    cout<<"\ntop element is:"<< peek()<< endl;

    pop();
    pop();
    print ();
    cout<<"\nTop element is "<< peek()<< endl;
    return 0; 
}