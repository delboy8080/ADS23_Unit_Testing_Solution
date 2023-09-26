#include "ShoppingCart.h"
bool ShoppingCart::addBook(Book* b)
{
	if (b != nullptr)
	{
		this->books.push_back(new Book(*b));
		return true;
	}
	return false;
}

int ShoppingCart::addAll(list<Book*> bks)
{
	int count = 0;
	for (Book* b : bks)
	{
		if (addBook(b))
			count++;
	}
	return count;
}

int ShoppingCart::size()
{
	return books.size();
}

bool ShoppingCart::removeBook(Book* bk)
{
	if (bk == nullptr)
	{
		return false;
	}
	else
	{
		for (list<Book*>::iterator iter = books.begin(); iter != books.end(); iter++)
		{
			if ((*iter)->getTitle() == bk->getTitle() && (*iter)->getPrice() == bk->getPrice())
			{
				books.erase(iter);
				return true;
			}
		}

		
		return false;
	}
}

double ShoppingCart::getSubtotal()
{
	double total=0;
	for (Book* b : books)
	{
		total += b->getPrice();
	}
	return total;
}
bool ShoppingCart::checkout()
{
	if (books.size() == 0)
		throw logic_error("No books to checkout");
	else
		books.clear();
	return true;
}

bool ShoppingCart::isEmpty()
{
	return books.size() == 0;
}

Book* ShoppingCart::getBookByTitle(string title)
{
	for (Book* b : books)
	{
		if (b->getTitle() == title)
		{
			return b;
		}
	}
	return nullptr;
}