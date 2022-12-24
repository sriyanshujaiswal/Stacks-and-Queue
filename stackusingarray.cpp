#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
   
    //behaviour
    Stack(int size){
        this->size =size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack under flow"<< endl;
        }
    }

    int peek(){
        if( top>=0 )
            return arr[top];
        else
        {
            cout<<"Stack is Empty"<< endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);

    st.push(32);
    st.push(43);
    st.push(45);
    st.push(32);
    st.push(43);
    st.push(45);

    cout<< st.peek()<< endl;

    st. pop();
    cout<< st.peek()<< endl;   
    st. pop();
    cout<< st.peek()<< endl;   
    st. pop();
    cout<< st.peek()<< endl;   

    if(st. isempty()){
        cout<<"Stack is Empty mere dost"<< endl;
    }
    else{
        cout<<"Stack is not empty mere dost"<< endl;
    }
    return 0;
}