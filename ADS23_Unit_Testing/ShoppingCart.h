#pragma once
#include "headers.h"
#include "Book.h"
class ShoppingCart
{
	list<Book*> books;
public:
	bool addBook(Book* b);
	int addAll(list<Book*> bks);
	bool removeBook(Book* bk);
	double getSubtotal();
	int size();
	bool checkout();
	bool isEmpty();
	Book* getBookByTitle(string title);
};

