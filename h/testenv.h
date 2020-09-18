#pragma once

#include <iostream>
#include <string>

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
