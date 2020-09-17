#pragma once

#include <iostream>
#include <string>

public class TestEnv
{
	public:
		TestEnv();
		string getInputStr();
	protected:
		string inputStr;
		void procInput(string inputStr);
		string getNextInput();
}
