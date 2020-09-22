#include "../h/token.h"



void Token::printMap()
{
	for (std::map<std::string, std::string>::iterator it=operators.begin(); it!=operators.end(); ++it)
	{
		std::cout << it->first << " => " << it->second << "\n";
	}
}
