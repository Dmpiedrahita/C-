#ifndef BOOK_H
#define BOOK_H
#include "Author.h"
#include <string>
using namespace std;

class Book
{
	private:
		string name;
		Author author;
		double price;
		int qtyInStock;	
	public:
		Book(string namer,Author author,double price, int qtyInStock=0);
		Author getAuthor() const;
		string getName() const;
		double getPrice()  const;
		int getQtyInStock() const;
		void setPrice(double price);
		void setQtyInStock(int qtyInStock);
		string getAuthorName() const;
		void print() const;
		
};

#endif
