#include <iostream>
#include "Engine.h"
#include "Object.h"
#include "Video.h"
#include "Global.h"
#include "Frame.h"

Frame frame(720, 480);// 720
std::vector<Object *> Engine::objects;

void Engine::addObject(Object *object){
	std::cout << " ######called" << std::endl; 
	objects.push_back(object); 
}

int Engine::run() {
	Video v1;
	v1.Videoload(720, 480); 
	int num_frames = duration_in_seconds * frames_per_second;
	for (int i = 0; i < num_frames; ++i) {
		double dt = 1.0 / frames_per_second;

		for (int i = 0; i < objects.size(); ++i) {
			objects[i]->update(dt);
		}

		// Draw objects onto canvas.
		for (int i = 0; i < objects.size(); ++i) {
			objects[i]->draw();
		}

		//std::cout << objects[1] << std::endl;
		//objects[1]->draw();
		frame.write(v1.pipe);
		frame.clear();
	}

	v1.closePipe();
	std::cout << "num_frames: " << num_frames << std::endl;
	std::cout << "Done." << std::endl;
	return 0;
}