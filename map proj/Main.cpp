#include "Purchases.h"

int main()
{

	std::map<std::string, float> products;

	products.emplace("Bread", 33);

	products.emplace("Milk", 25);

	Purchases pr(products);

	std::cout << "Welcome to our supermarket" << std::endl;
	std::cout << "Would you like to buy anything?" << std::endl << std::endl;

	int choice;
	std::cout << " 1 - Yes\n 2- No\n\n";
	std::cin >> choice; std::cout << std::endl;

	if (choice == 1)
	{
		std::cout << "OK, choose anything you like" << std::endl << std::endl;
		while (choice != 3)
		{
			std::cout << "Here is what you can do: " << std::endl;
			std::cout << "1 - Take the goods\n2 Remove item\n\
3- Complete shopping\n4 - Edit price of the product\n\n";
			std::cin >> choice; std::cout << std::endl;
			switch (choice)
			{
			case 3:
				break;
			case 1:
				pr.add_item();
				break;
			case 2:
				pr.delete_item();
				break;
			case 4:
				pr.edit_price();
				break;
			default:
				break;
			}
		}
	}

	std::cout << "Come again. We are always welcome to our customers" << std::endl;

	return 0;

}