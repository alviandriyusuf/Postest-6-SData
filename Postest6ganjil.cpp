#include<iostream>
using namespace std;
#define MAX 50

class Stack{
	int atas;
	
	public:
		int myStack[MAX];
		
		Stack(){atas = -1;}
		bool push(int a);
		int pop();
		bool isEmpty();
};

//Operasi Elemen Push
bool Stack::push(int x)
{
	if(atas>=(MAX-1))
	{
		cout<<"!!! STACK OVERFLOW !!!";
		return false;
	}
	else
	{
		myStack[++atas] = x;
		cout<<x<<endl;
		return true;
	}
}

//Operasi Pop elemen
int Stack::pop()
{
	if(atas<0)
	{
		cout<<"!!! STACK UNDERFLOW !!!";
		return 0;
	}
	else
	{
		int x = myStack[atas--];
		atas--;
		return x;
	}
}

//Function untuk Mengecek Stack
bool Stack::isEmpty()
{
	return (atas<0);
}

int main()
{
	Stack postest;
	cout<<"STACK PUSH"<<endl;
	postest.push(10);
	postest.push(20);
	postest.push(30);
	postest.push(40);
	postest.push(50);
	postest.push(60);
	postest.push(70);
	postest.push(80);
	
	cout<<endl;
	cout<<"STACK POP : "<<endl;
	
	while(!postest.isEmpty())
	{
		cout<<postest.pop()<<endl;
	}
	
	return 0;
}
