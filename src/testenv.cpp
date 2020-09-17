#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include "../h/TestEnv.h"

TestEnv::TestEnv() 
{
	while ((procInput(inputStr) != "quit<>") && (procInput(inputStr) != "exit<>"))
	{
		procInput(getNextInput());
	}
}

TestEnv::getNextInput()
{
	std::cout << "<<< ";
	std::cin >> inputStr;
	
	return inputStr;
}

TestEnv::procInput(inputStr)
{
	try:
		if((inputStr = "quit<>") || (inputStr = "exit<>"))
		{
			exit(EXIT_FAILURE);
		}
	catch:

}

TestEnv::getInputStr()
{
	return inputStr;
}
