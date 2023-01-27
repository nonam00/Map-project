#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <map>

class Purchases
{

public:

	Purchases(std::map<std::string, float> _items); //конструктор, принимающий каталог

	~Purchases(); //деструктор

	void add_item(); //добавление товара в корзину

	void delete_item(); //удаление товара из корзины

	void edit_price(); // изменение цены

	void print_buy(); //вывод всех товаров, которые находятся в корзине

	void print_list(); //вывод товаров из каталога

protected:

	std::multimap <std::string, float> buyItem; //корзина
	std::map <std::string, float> items; //каталог

};

