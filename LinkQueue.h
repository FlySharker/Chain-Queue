#pragma once
#include"Assistance.h"
#include"Node.h"
template<class T>
class LinkQueue
{
protected:
	Node<T>* rear;
	Node<T>* stay;
public:
	LinkQueue();
	virtual ~LinkQueue();
	int GetLength() const;
	bool IsEmpty() const;
    void Clear();
	void Traverse(void (*Visit)(const T&)) const;
	Status EnQueue(T e);
	Status DelQueue(T& e);
};

template<class T>
LinkQueue<T>::LinkQueue() :rear(NULL)
{
}

template<class T>
LinkQueue<T>::~LinkQueue()
{
	delete rear;
}

template<class T>
void LinkQueue<T>::Clear()
{
	Node<T>* p = rear;
	while (p != NULL) {
		rear = rear->next;
		delete p;
		p = rear;
	}
	rear = NULL;
}

template<class T>
int LinkQueue<T>::GetLength()const
{
	int count = 1;
	for (Node<T>* p = rear->next; p != rear; p = p->next) {
		count++;
	}
	return count;
}

template<class T>
bool LinkQueue<T>::IsEmpty()const
{
	return rear == NULL;
}

template<class T>
void LinkQueue<T>::Traverse(void (*Visit)(const T&)) const
{
	if (rear == NULL) {
		cout << "╤сапря©у" << endl;
		return;
	}
	for (Node<T>* p = rear->next; p != rear; p = p->next) {
		(*Visit)(p->data);
	}
	(*Visit)(rear->data);
}

template<class T>
Status LinkQueue<T>::EnQueue(T e)
{
	
	if (rear == NULL) {
		rear = new Node<T>(e, rear);
		stay = rear;
	}
	else {
		Node<T>* p = new Node<T>(e, stay);
		rear->next = p;
		rear = rear->next;
	}
	return SUCCESS;
}

template<class T>
Status LinkQueue<T>::DelQueue(T& e)
{
	if (!IsEmpty()) {
		e = rear->next->data;
		if (rear->next == rear) {
			delete rear;
			rear = NULL;
			return SUCCESS;
		}
		Node<T>* q = rear->next;
		rear->next = q->next;
		delete q;
		return SUCCESS;
	}
	else {
		return UNDER_FLOW;
	}
}
