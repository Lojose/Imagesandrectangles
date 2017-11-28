#pragma once
#include "Global.h"

class Frame {
public:
	Frame(int w, int h);
	~Frame();
	void setPixel(int x, int y, byte r, byte g, byte b);
	void clear();
	void write(FILE * file) const;
private:
	byte * pixels;
	int w;
	int h;
};