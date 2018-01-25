#include <iostream>
#include <fstream>
#include "arduino.h"
void wyslij(){

	//open arduino device file (linux)
	std::ofstream arduino;
	arduino.open("/dev/ttyACM0");

	//write to it
	arduino << "Hello from C++!";
	arduino.close();


}