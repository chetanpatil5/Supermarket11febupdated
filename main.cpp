#pragma once
#include "Product.h"
#include<list>
#include "Customer.h"
#include "Admin.h"
#include<string>
#include<list>
#include<iostream>
using namespace std;

int main()
{
	list<Product> lp;
	Admin a;
	a.AddProductToFile(lp);
	a.AddProductToFile(lp);
	a.ViewProductFromFile(lp);
	
	//list<Product>::iterator itr=lp.begin() ;
	//while (itr != lp.end())
	//{
	//	cout<<endl<<itr->getProdNo()<<" ";
	//	cout << itr->getProdPrice() << " ";
	//	cout << itr->getProdQuantity() << " ";
	//	itr++;
	//}

	Customer c;
	c.AddToCart();
	cout << "\n\n\nGlobal list updated\n\n\n";
	a.ViewProductFromFile(lp);
	c.AddToCart();
	cout << "\n\n\nGlobal list updated\n\n\n";
	a.ViewProductFromFile(lp);
	c.DisplayProductList();
	c.UpdateProductList();
	cout << "\n\n\nGlobal list updated\n\n\n";
	a.ViewProductFromFile(lp);
	c.DisplayProductList();
	system("pause"); 
	return 0;
}