#include <cstring>
#include "cbtn.h"

button::button(short top, short left, short sizeX, short sizeY) {
	topLeft.X = top;
	topLeft.Y = left;
	size.X = sizeX;
	size.Y = sizeY;
	bgColor = 0;
	textColor = 7;
	
	content = new unsigned char[size.X * size.Y];
	for(int i = 0; i < size.X * size.Y; i++) {
		content[i] = 32; // " " space
	}
}

button::button(	short top, short left, short sizeX, short sizeY, short bgColor,
short textColor) {
	topLeft.X = top;
	topLeft.Y = left;
	size.X = sizeX;
	size.Y = sizeY;
	this->bgColor = bgColor;
	this->textColor = textColor;
	
	content = new unsigned char[size.X * size.Y];
	for(int i = 0; i < size.X * size.Y; i++) {
		content[i] = 32; // " " space
	}
}

button::~button() {
	delete content;
}

bool button::addContent(short posX, short posY, const char text[]) {
	if(posX < 0 || size.X <= posX || posY < 0 || size.Y <= posY) {
		// checking for starting index out of bounds
		return false;
	}
	if(size.X <= + strlen(text) -1) {
		// checking for ending index out of bounds
		return false;
	}
	
	
}

