#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include "../h/testenv.h"

TestEnv::TestEnv() 
{
	while ((inputStr != "quit<>") && (inputStr != "exit<>"))
	{
		procInput(getNextInput());
	}
}

std::string TestEnv::getNextInput()
{
	std::cout << "<<< ";
	std::cin >> inputStr;
	
	return inputStr;
}

void TestEnv::procInput(std::string user)
{
	if((user == "quit<>") || (user == "exit<>"))
	{
		exit(EXIT_FAILURE);
	}
	else if(user == "printOps<>")
	{
		Token test = Token();
		test.printMap();
	}
}

std::string TestEnv::getInputStr()
{
	return inputStr;
}
