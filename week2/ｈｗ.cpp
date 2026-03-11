#include<iostream>
#include<string>

int main(void) {
	{
		const std::string a = "a string";
		std::cout << a << std::endl;
	}
	{
		const std::string a = "another stirng";
		std::cout << a << std::endl;
	}
	//1-3


	{
		const std::string b = "a string";
		std::cout << b << std::endl;
		{
			const std::string b = "another stirng";
			std::cout << b << std::endl;
		}
	}
	//1-4


	{
		std::string c = "a string";
		std::string x;
		{
			x = c + ", really";
			std::cout << c << std::endl;
		}
		std::cout << x << std::endl;
	}
	return 0;//1-5
}