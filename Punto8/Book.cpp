#include "Book.h"
#include "Author.h"
#include <iostream>

using namespace std;



Book::Book(string name,Author author,double price,int qtyInStock):name(name),author(author){
	this->price=price;
	this->qtyInStock=qtyInStock;
}


string Book::getName() const{
	return this->name;
}

Author Book::getAuthor() const{
	return author;
}

double Book::getPrice() const{
	return this->price;
}

int Book::getQtyInStock() const{
	return this->qtyInStock;
}

void Book::setPrice(double price){
	if (price>0){
		this->price=price;
	}else{
		cout<<"El precio debe ser positivo"<<endl;
		this->price=0;
	}
	
}

void Book::setQtyInStock(int qtyInStock){
	if (qtyInStock>0){
		this->qtyInStock=qtyInStock;
	}else{
		cout<<"La cantidad debe ser positiva"<<endl;
		this->qtyInStock=0;
	}

}

string Book::getAuthorName() const{
	return author.getName();
}

void Book::print() const{
	cout<<this->name<<" escrito por: ";
	author.print();
}
