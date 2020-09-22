#pragma once

#include <iostream>
#include <string>
#include <map>

class Token
{
	public:
		enum Type
		{
			WHITESPACE,
			EOL,
			IDENT,
			INT_LITERAL,
			CHAR_LITERAL,
			STR_LITERAL,
			OPERATOR,
			LINE_COMMENT,
			BLOCK_COMMENT,
			SCOPE,
			UNKNOWN
		};
		
		Token(std::string text = "hello", int line = 0, int position = 0, Type tokenType = UNKNOWN, bool isOp = true, std::string opType = "hi")
		{
			this->text = text;
			this->line = line;
			this->pos = position;
			this->tokenType = tokenType;
		}
		void printMap();
	private:
		std::string getOp(std::string text);
		std::string text;
		int line;
		int pos;
		Type tokenType;
		std::map<std::string, std::string> operators;
		this->operators["openParen"]="<";
		this->operators["closeParen"]=">";
		this->operators["startBlock"]="^^\\";
		this->operators["endBlock"]="^^/";
		this->operators["singleCom"]="^";
		this->operators["openBrack"]="\\";
		this->operators["closeBrack"]="/";	
		this->operators["greatThan"]=">>";
		this->operators["lessThan"]="<<";
		this->operators["equal"]="==";
		this->operators["greatEq"]=">=";
		this->operators["lessEq"]="<=";
		this->operators["notEqual"]="!=";
		this->operators["notOp"]="!";
		this->operators["orOp"]="||";
		this->operators["andOp"]="&&";
		this->operators["comma"]=",";
		this->operators["hash"]="#";
};
