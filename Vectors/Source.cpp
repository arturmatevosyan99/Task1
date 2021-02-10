#include <iostream>
#include <vector>
#include <string>



void Revers( const std::vector<std::string> v , std::vector<std::string> &p )
{
	for (int i = v.size() - 1; i >= 0; i--)
	{
		p.push_back(v[i]);
	}
}


int main()
{
	std::vector<std::string> a = {"aaa" , "bbb" , "ccc"};

	std::vector<std::string> b;

	Revers(a, b);

	std::cout << b[0] << " " << b[1] << " " << b[2] << " " ;


	return 0;
}