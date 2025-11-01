#include <iostream>
#include <string>
#include <sstream>
#include <limits>

void change(int* gg)
{
	*(gg) = 42;
}
int main()
{
	// try
	// {
	// 	std::string	str = "-21474803648";
	// 	int i = stoi(str);
	// }
	// catch (const std::out_of_range& e)
	// {
	// 	std::cerr << "Program does not work because: " << e.what() << " input out of range!"<<std::endl;
	// }
	// int gg = 0;
	// change(&gg);
	// std::cout << gg << std::endl;
	std::string str = "4.0f";
	str.erase(str.end() - 1);
	std::stringstream	tmp(str);
	long long ret = -404;
	tmp >> ret;
	if (tmp.fail())
		std::cerr << static_cast<double>(std::numeric_limits<float>::min()) << std::endl;
	std::cout << ret << std::endl;
	return (0);
}
