#include "Engine.h"
#include "StartObject.h"

int main(int argc, char * argv[]) {
	StartObject startObject;
	Engine::addObject(&startObject);
	return Engine::run();
}