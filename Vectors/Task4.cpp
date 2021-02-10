#include <iostream>
#include <vector>
#include <string>

#include "Task4.h"

int main()
{
	std::vector<std::string> commands;
	
	WriteCommands(commands);

	int count = std::stoi(commands[0]);
	
	std::vector<int> products;
	products.assign(count, 0);


	std::cout << '\n';
	for (size_t i = 1; i < commands.size() - 1; i+=2)
	{
		int command = ParseLine(commands[i]);
		int arg = ParseLine(commands[i + 1]);
		switch (command)
		{
		case 0: 
			ADD(products, arg);
			break;
		case 1: 
			SELL(products, arg);
			break;
		case 2: 
			DUMPALL(products);
			break;
		case 3: 
			DUMP(products, arg);
			break;
		default:
			break;
		}
	}

	


	std::cout << '\n';


	return 0;
}