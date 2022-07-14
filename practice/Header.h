#ifndef HEADER_H_
#define HEADER_H_

#include <string> 


class Stack {
private:
	int* _top;
	int _size;
public:
	int size() const;
	int pop();
	bool push(int n);
	void show();
	bool isEmpty();
	Stack();
	

};

#endif