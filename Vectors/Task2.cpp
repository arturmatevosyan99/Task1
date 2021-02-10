#include <iostream>
#include <vector>
#include <string>



void Revers( std::vector<std::string> &v )
{
	std::vector<std::string> temp(v);
	
	v.clear();

	for (int i = temp.size() - 1; i >= 0; i--)
	{
		v.push_back(temp[i]);
	}
}


int main()
{
	std::vector<std::string> a = { "aaa" , "bbb" , "ccc" };

	Revers(a);

	std::cout << a[0] << " " << a[1] << " " << a[2] << " ";


	return 0;
}