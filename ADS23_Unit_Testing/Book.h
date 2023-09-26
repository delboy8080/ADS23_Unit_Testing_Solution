#pragma once
#include "headers.h"

class Book
{
	string title;
	double price;
public:
	Book(string title, double price);
	string getTitle()const;
	double getPrice()const;
	void setPrice(double price);
	void setTitle(string title);
};

