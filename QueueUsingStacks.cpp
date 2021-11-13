#include<iostream>
#include<stack>
using namespace std;
class stacktoqueue{
stack<int> s1;
public:
void pop(){
    s1.pop();
}
void push(int x){
    s1.push(x);
}
bool empty(){
    return s1.empty();
}
int top(){
return s1.top();
}
void pushQueue(int x){
s1.push(x);
}
int peekQueue(){
if(s1.empty()){
    return -1;
}
int x=s1.top();
s1.pop();
if(s1.empty()){
    s1.push(x);
    return x;
}
int z=peekQueue();
s1.push(x);
return z;
}
int popQueue(){
if(s1.empty()){
    cout<<"queue is empty!"<<endl;
    return -1;
}
int x=s1.top();
s1.pop();
if(s1.empty()){
    return x;
}
int el=popQueue();
s1.push(x);
return el;
}
void printQueue(stacktoqueue s1){
    int i=0;
while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}
cout<<endl;
return;
}
};

int main(){
    stacktoqueue s1;
    s1.pushQueue(1);
    s1.pushQueue(4);
    s1.pushQueue(2);
    s1.pushQueue(9);
    s1.pushQueue(7);

    cout<<"first element of the queue: "<<s1.peekQueue()<<endl;
    cout<<"printing the queue intitially"<<endl;
    s1.printQueue(s1);
    s1.pushQueue(13);
    cout<<"printing the queue after pushing 13"<<endl;
    s1.printQueue(s1);
    s1.popQueue();
    cout<<"printing the queue after pop operation"<<endl;
    s1.printQueue(s1);
    return 0;
}