#pragma once

#include <iostream>
#include <string>
#include "token.h"

class TestEnv
{
	public:
		TestEnv();
		std::string getInputStr();
	protected:
		std::string inputStr;
		void procInput(std::string inputStr);
		std::string getNextInput();
};
