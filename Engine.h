#pragma once
#include <vector>
#include "Object.h"
#include "Video.h"

class Engine {
public:
	Video v1;
	//v1.Videoload(720, 480);
	static void addObject(Object * object);
	static void removeObject(Object * object);
	static int  run();
private:
	static std::vector<Object *> objects;
};