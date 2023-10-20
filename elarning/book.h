#include<iostream>
using namespace std;
class Book{
	int id;
	string name;
	double price;
	
	public:
	Book(int id,string name,double price);
	//getters
	int getId();
	string getName();
	double getPrice();
	//setters
	void setName(string name);
	void setPrice(double price);
	void display();
	void calculateprice(int quant);
};
