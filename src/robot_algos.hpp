#ifndef ROBOT_ALGOS_HPP
#define ROBOT_ALGOS_HPP

#include <iostream>
#include <string>

class Robot {
private:
	int pos=0;
	std::string name;
public:
	void walkForward();
	void goBack();
	void stop();
	void printPos();
	void getName();
};

#endif
