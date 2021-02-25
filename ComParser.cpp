#include "ComParser.h"
#include <iostream>

namespace j_n
{
	void parseCmd(std::string command)
	{
		std::string comd, param;

		bool comdb = true;
		for (auto c : command)
		{
			if (c == ' ') comdb = false;
			if (comdb) comd.insert(comd.end(), c); 
			else param.insert(param.end(), c);
		}

		     if (comd == "command" && param == "1") std::cout << "This is command 1" << std::endl;
		else if (comd == "command" && param == "2") std::cout << "This is not command 1, this is command 2" << std::endl;
	}
}
