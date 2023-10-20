#include<iostream>
#include"book.h"
using namespace std;

	Book::Book(int id,string name,double price){
		this->id=id;
		this->name =name;
		this->price=price;
	}
	int Book::getId(){
		return 	this->id;
	}
	string Book::getName(){
		return 	this->name;
	}
	double Book::getPrice(){
		return 	this->price;
	}
	void Book::setName(string name){
			this->name=name;
	}
	void Book::setPrice(double price){
			this->price=price;
	}
	void Book::display(){
		cout<<"Bookid: "<<id<<" Name: "<<name<<" Price: "<<price<<endl;
	}
	void Book::calculateprice(int quant){
		cout<<"Total Price: "<<this->price*quant<<endl;
	}
