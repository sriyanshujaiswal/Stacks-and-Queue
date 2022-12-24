#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    //create a queue
    queue<int> q;

    q. push(11);
    q. push(13);
    q. push(15);
    cout<<"Size of queue: "<< q. size()<< endl;

    q. pop();
    
    cout<<q. front()<< endl;
    cout<<"Size of queue: "<< q. size()<< endl;
   
    if (q. empty()){
        cout<<"Queue is empty"<< endl;

    }
    else{
        cout<<"Queue is not Empty"<< endl;
    }
    return 0;

}
