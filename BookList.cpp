#include <iostream>
#include "BookList.h"
#define MAX_SIZE 10
using namespace std;

BookList::BookList():size(0)
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		myList[i] = 0;
	}
}

bool BookList::isEmpty() const
{
	return size==0;
}

int BookList::getSize() const
{
	return size;
}

void BookList::insert(int index, int& newItem)
{
	if ((index < 0) || (MAX_SIZE < index)) {
		cout << index << "is out of bound" << endl;
	}
	else {
		myList[index] = newItem;
		cout << newItem << " has been inserted" << endl;
		size++;
	}

}

void BookList::remove(int index)
{
	if ((index < 0) || (MAX_SIZE < index)) 
		cout << "position is out of bound" << endl;
	
	else {
		myList[index] == 0;
		--size;
	}
}

void BookList::printList() const
{
	cout << "List contains:";
	for (int i = 0; i < MAX_SIZE; i++)
		cout << myList[i] << " ";
	cout << endl;
}

void BookList::search(int index) const
{
	if ((index < 0) && (MAX_SIZE < index)) {
		cout << index << "position is out of bound" << endl;
	}
	else {
		if (myList[index] == 0)
			cout << "Cell is empty" << endl;
		else
			cout << "item at position " << index << " is " << myList[index] << endl;
	}
}
