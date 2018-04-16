#include "robot_algos.hpp"

void Robot::walkForward() {
	pos++;
}

void Robot::goBack() {
	pos--;
}

void Robot::printPos() {
	std::cout << "The position of your robot " << name << " is : " << pos << '\n';
}

void Robot::getName() {
	std::cin >> name;
}

void Robot::stop() {
  std::cout << "The final position of your robot " << name << " is : " << pos << '\n' << "Thank you for playing." << '\n';
}
