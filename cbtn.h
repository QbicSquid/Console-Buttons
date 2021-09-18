#ifndef CBTN_H
#define CBTN_H
#include <windows.h>
#include <vector>
#include <cstring>

class button {
	private:
		COORD topLeft;
		COORD size;
		unsigned char *content;
		short bgColor;
		short textColor;
	public:
		button(short top, short left, short sizeX, short sizeY);
		button(	short top, short left, short sizeX, short sizeY, short bgColor,
		short textColor);
		~button();
		bool addContent(short posX, short posY, const char text[]);
};

#endif

