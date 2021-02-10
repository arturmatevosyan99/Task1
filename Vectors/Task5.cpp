#include <iostream>
#include <vector>
#include <string>



void Revers(const std::vector<std::string> v, std::vector<std::string>& p)
{
	for (int i = v.size() - 1; i >= 0; i--)
	{
		p.push_back(v[i]);
	}
}


int main()
{
	int n;
	
	std::cin >> n;

	std::vector<int> rating(n);

	int sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> rating[i];
		sum += rating[i];
	}

	float midle = sum / n;
	int count = 0;

	std::cout << "\n----------------" << std::endl;

	for (size_t i = 0; i < n; i++)
	{
		if (rating[i] > midle)
		{
			std::cout << rating[i] << std::endl;
			count++;
		}

	}

	std::cout << count << std::endl;


}