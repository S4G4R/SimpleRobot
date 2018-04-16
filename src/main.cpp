#include "robot_algos.hpp"

int main() {
	std::string choice;
	Robot R;
	std::cout << "Enter the name of your robot." << '\n';
	R.getName();
	std::cout << "Welcome to a robot. Type '+' to walk forward, '-' to go back, or anything else to stop. Enjoy." << '\n';
	while (true) {
		std::cin >> choice;
		if (choice=="+") {
			R.walkForward();
			R.printPos();
		} else if (choice=="-") {
			R.goBack();
			R.printPos();
		} else {
			R.stop();
			break;
		}
	}
	return 0;
}
