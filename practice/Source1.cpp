#include <iostream>
#include "Header.h"
using namespace std;





int main() {
	Stack s;
	
	s.push(1);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(5);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.show();



}

