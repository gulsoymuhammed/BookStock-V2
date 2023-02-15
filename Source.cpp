#include<iostream>
#define MAX_SIZE 10
#include"BookList.h"

using namespace std;


int main() {
	BookList list;
	
	if (list.isEmpty() == 0)
		cout << "List is not empty" << endl;
	else
		cout << "List is empty" << endl;

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;
	list.insert(4, a);
	list.insert(5, b);
	list.insert(7, c);
	list.insert(0, d);
	list.insert(1, e);
	list.search(5);

	cout << "size is " << list.getSize() << endl;
	list.printList();


		
	return 0;
}