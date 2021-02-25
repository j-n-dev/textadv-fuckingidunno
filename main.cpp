#include "ComParser.h"
#include <iostream>

int main()
{
	std::cout << "Welcome to j_n's Text Adventure Game (Pro. No. 1)" << std::endl;

	std::string comBuffer;
	for (;;)
	{
		std::cout << ">";
		std::cin >> comBuffer;
		j_n::parseCmd(comBuffer);
	}
}