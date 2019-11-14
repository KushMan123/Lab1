#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
	top=-1;
}

Stack::~Stack(){}

bool Stack::isFull(){
	if(top>=MAX_STACK_SIZE-1){
		return true;
	}
	else{
		return false;
	}
}

void Stack::push(int element)
{
	if (isFull()){
		std::cout<<"Cannot push "<<element<<". Stack is Full"<<endl;
	}
	else{
		top++;
		this->elements[top]=element;
	}
}

bool Stack::isEmpty()
{
	if(top<0){
		return true;
	}
	else{
		return false;
	}
}

int Stack::pop()
{
	if(isEmpty()){
		std::cout<<"Cannot pop. Stack is empty"<<endl;
		return -1;
	}
	else
	{	
		return this->elements[top--];
	}
}

int Stack::peak()
{
	return elements[top];
}	  

int main(){
    Stack s;
    int value;
    char c;
    do
    {
        cout<<"Enter a value in stack"<<endl;
        cin>>value;
        s.push(value);
        cout<<"Do you want to continue(Y/N)"<<endl;
        cin>>c;
    }while(c=='Y'||c=='y');
    
    std::cout<<"The top element is "<<s.peak()<<endl;
    
    while(!s.isEmpty()){
        cout<<s.pop()<<endl;
    }
}