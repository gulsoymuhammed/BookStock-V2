#pragma once
#define MAX_SIZE 10
using namespace std;

class BookList
{

private:
	int myList[MAX_SIZE];
	int size;

public:
	BookList();
	bool isEmpty() const;
	int getSize() const;
	void insert(int index, int &newItem);
	void remove(int index);
	void printList() const;
	void search(int index) const;


};

