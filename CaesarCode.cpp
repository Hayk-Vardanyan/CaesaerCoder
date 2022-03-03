#include <iostream>

class CaesarCoder 
{
	public:
		std::string code_text(std::string);
		std::string decode_text(std::string);
};

std::string CaesarCoder::code_text(std::string text)
{
	for(int i = 0; i < text.size(); ++i)
	{
		if((text[i] >= 'a' && text[i] <= 'c') || 
				(text[i] >= 'A' && text[i] <= 'C'))
		{
			text[i] += 23;
			continue;
		}

		if((text[i] >= 'A' && text[i] <= 'Z') || 
			(text[i] >= 'a' && text[i] <= 'z'))
			{
				text[i] -= 3;
			}

	}
	return text;
}

std::string CaesarCoder::decode_text(std::string text)
{
	for(int i = 0; i < text.size(); ++i)
	{	
		if((text[i] >= 'x' && text[i] <= 'z') || 
				(text[i] >= 'X' && text[i] <= 'Z'))
		{
			text[i] -= 23;
			continue;
		}


		if((text[i] >= 'A' && text[i] <= 'Z') || 
			(text[i] >= 'a' && text[i] <= 'z'))
			{
				text[i] += 3;
			}

	}
	return text;
}

int main()
{
	CaesarCoder coder;
	std::string codedText = coder.code_text("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG");
	std::cout << "Coded text -> " << codedText << '\n';
	std::string decodedText = coder.decode_text(codedText);
	std::cout << "Decoded text -> " << decodedText;
}
