#include <iostream>
#include "Sales_item.h"

/* Simple main function: Read two numbers and write their sum */
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	return 0;
}