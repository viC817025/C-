#include <iostream>
#include "Header.h"



Stack::Stack() {
	this->_top = new int;
	_size = 0;
}

bool Stack::push(int n) {

	int * ne = new int[_size + 1]; //新建一個更大的空間
	for (int i = 0; i < _size; i++) {
		ne[i] = _top[i];
	}
	ne[_size++] = n;
	delete _top;

	_top = ne;
	return true;
}

int Stack::size() const {
	return _size;
}

bool Stack::isEmpty() {
	if (_size == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Stack::pop() {
	if (_size == 0) {
		std::cout << "error space is empty\n";
		return -1;
	}
	else {
		_size--;
		
		return *(_top + _size);
	}
}

void Stack::show() {
	for (int i = 0; i < _size; i++) {
		std::cout << _top[i] << std::endl;
	}
}