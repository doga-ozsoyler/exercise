#include "queue.h"


template<class T>
class MyStack{
private:
    MyQueue<T> newStack;
public:
    void push(const T &);
    T pop();
    bool isEmptyS() const;
    int sizeStack();
    void print();
};

template<class T>
void MyStack<T>::push(const T &el)
{
    newStack.enqueue(el);
}

template<class T>
T MyStack<T>::pop()
{
    MyQueue<T> temp;

    while(!newStack.isEmptyQ())
    {
        temp.enqueue(newStack.dequeue());
    }

    for(int i = 0; i < temp.sizeQueue() - 1; i++)
    {
        newStack.enqueue(temp.dequeue());
    }

    return temp.dequeue();
}

template<class T>
bool MyStack<T>::isEmptyS() const
{
    return newStack.isEmptyQ();
}

template<class T>
int MyStack<T>::sizeStack()
{
    return newStack.sizeQueue();
}

template<class T>
void MyStack<T>::print()
{
    MyQueue<T> temp;

    while(!newStack.isEmptyQ())
    {
        cout << newStack.dequeue() << " ";
    }
    cout << endl;
}