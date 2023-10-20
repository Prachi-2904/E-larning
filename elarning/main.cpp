#include <iostream>
#include"book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Book b1(101,"Ikegai",150);
	b1.display();
	cout<<b1.getId();
	b1.setPrice(120);
	b1.display();
	b1.calculateprice(2);
	return 0;
}
