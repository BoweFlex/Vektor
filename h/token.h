#pragma once

#include <string>


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

		Token(std::string text, int line, int position, Type tokenType)
		{
			this.text = text;
			this.line = line;
			this.pos = position;
			this.tokenType = tokenType;
		}

	private:
		std::string text;
		int line;
		int pos;
		Type tokenType;
};
