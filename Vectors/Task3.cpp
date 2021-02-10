#include <iostream>
#include <vector>
#include <string>



void Revers(std::vector<std::string> &v, std::vector<std::string>& p)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		p.push_back(v[i]);
	}

	v.clear();
}


int main()
{
	std::vector<std::string> a = { "aaa" , "bbb" , "ccc" };

	std::vector<std::string> b;

	Revers(a, b);

	std::cout << b[0] << " " << b[1] << " " << b[2] << " " << std::endl;
	std::cout << "size of 'a vector' :: " << a.size();



	return 0;
}