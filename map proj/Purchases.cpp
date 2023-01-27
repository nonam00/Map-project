#include "Purchases.h"

Purchases::Purchases(std::map<std::string, float> _items) : items{ _items } {}
Purchases::~Purchases() {}

void Purchases::add_item()
{
	std::cout << "Our catalog: " << std::endl;
	print_list();
	std::string name;
	std::cout << "Enter name of the product" << std::endl;
	std::cin >> name; std::cout << std::endl;
	std::map<std::string, float>::iterator it;
	it = items.find(name.c_str());
	if (it != items.end())
		buyItem.insert(std::make_pair(it->first, it->second));
	print_buy();
}

void Purchases::delete_item()
{
	print_buy();
	std::string name;
	std::cout << "Enter name of the product" << std::endl;
	std::cin >> name; std::cout << std::endl;
	std::map<std::string, float>::iterator it;
	it = buyItem.find(name.c_str());
	if (it != buyItem.end())
		buyItem.erase(it);
	print_buy();
}

void Purchases::edit_price()
{
	std::cout << "Our catalog: " << std::endl;
	print_list();

	std::string name;
	std::cout << "Enter name of the product" << std::endl;
	std::cin >> name; std::cout << std::endl;

	float price;
	std::cout << "Enter new price for the product" << std::endl;
	std::cin >> price; std::cout << std::endl;

	items[name] = price;

}

void Purchases::print_buy() 
{
	std::cout << "Shopping cart: " << std::endl;
	std::for_each(buyItem.begin(), buyItem.end(),
		[](std::pair<std::string, float> temp)
		{std::cout << temp.first << " " << temp.second << std::endl; });
	std::cout << std::endl;
	//for (auto item : buyItem)
		//std::cout << item.first << " " << item.second << std::endl;
}

void Purchases::print_list()
{
	std::for_each(items.begin(), items.end(),
		[](std::pair<std::string, float> temp)
		{std::cout << temp.first << " " << temp.second << std::endl; });
	std::cout << std::endl;
	//for (auto item : items)
		//std::cout << item.first << " " << item.second << std::endl;
}