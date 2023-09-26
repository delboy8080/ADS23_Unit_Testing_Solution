#include "Book.h"

Book::Book(string title, double price)
{
	this->title = title;
	this->price = price;
}
string Book::getTitle() const
{
	return title;
}
double Book::getPrice() const
{
	return price;
}
void Book::setPrice(double price)
{
	this->price = price;
}
void Book::setTitle(string title)
{
	this->title = title;
}