#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <regex>

std::string functions[4] = { "ADD", "SELL", "DUMPALL", "DUMP" };


void WriteCommands( std:: vector<std::string> &v )
{
	std::string temp;
	while (temp != "END")
	{
		std::cin >> temp;
		v.push_back(temp);
	}
}

void ADD( std::vector<int>& v ,  int n)
{
	v[n]++;
}

void SELL(std::vector<int>& v, int n)
{
	v[n]--;
}

void DUMP(std::vector<int>& v, int n)
{
	std::cout << v[n] << std::endl;
}

void DUMPALL(std::vector<int>& v)
{
	int sum = 0;
	for (auto& i : v)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
}

int ParseLine(std::string str)
{
	int len = sizeof(functions) / sizeof(functions[0]);

	static bool FLAG = true;

	if (FLAG)
	{
		for (size_t i = 0; i < len; i++)
		{
			if (str.find(functions[i]) != std::string::npos)
			{
				std::cout << "[LOG] Function '" << functions[i] << "' is founded " << '\n';

				if (i != 2)
				{
					FLAG = false;
				}
				
				return i;
			}
		}
	}

	if (!FLAG && std::regex_match(str, std::regex(("([[:digit:]]+)"))))
	{
		std::cout << "[LOG] Argument '" << str << "' is founded " << '\n';

		FLAG = true;
		int num = std::stoi(str);

		return num;
	}

	std::cout << "[LOG] ERROR " << str << " : Is NOT a Function or Argument " << '\n';
	return -1;

	
	
}