#include "genDLList.h"



template<class T>
class MyQueue{
private:
    DoublyLinkedList<T> newQueue;
public:
    void enqueue(const T &);
    T dequeue();
    bool isEmptyQ() const;
    int sizeQueue();
};

template<class T>
void MyQueue<T>::enqueue(const T &el)
{
    newQueue.addToDLLTail(el);
}

template<class T>
T MyQueue<T>::dequeue()
{
    return newQueue.deleteFromDLLHead();
}

template<class T>
bool MyQueue<T>::isEmptyQ() const 
{
    return newQueue.isEmpty();
}

template<class T>
int MyQueue<T>::sizeQueue()
{
    DoublyLinkedList<T> temp;
    int count = 0;

    while(!newQueue.isEmpty())
    {
        temp.addToDLLTail(newQueue.deleteFromDLLHead());
        count++;
    }
        
    while(!temp.isEmpty())
    {
        newQueue.addToDLLTail(temp.deleteFromDLLHead());
    }

    return count;
}