
#include <iostream>
#include <stdlib.h> 
#include "stack.h"
using namespace std;


int main()
{
	MyStack<int> myS;
	srand(1);
	int data;
	cout<<"adding numbers to stack:\n";
	for(int i=0; i<10; i++)
	{
		data = rand()%100;
		cout<<data<<" ";
		myS.push(data);
	}
	cout<<endl;
	cout<<"printing the stack:\n";
	myS.print();
	
	for(int i=0; i<5; i++)
	{
		cout<<myS.pop()<<" is popped, now the stack is: \n";
		myS.print();
	}

	/*MyQueue<int> myQ;

	myQ.enqueue(3);
	myQ.enqueue(5);
	myQ.enqueue(6);
	cout << "isEmpty: " << myQ.isEmptyQ() << endl;
	cout << "size: " << myQ.sizeQueue() << endl;

	for(int i = 0; i < 3; i++)
	{
		cout << myQ.dequeue() << " " << endl;
	}

	cout << "isEmpty2: " << myQ.isEmptyQ() << endl;
	cout << "size2: " << myQ.sizeQueue() << endl;*/


	return 0;
}