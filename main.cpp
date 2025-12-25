#include <iostream>
using namespace std;
#include <ctime>
#include "Dorm.cpp"

int main()
{
	srand(time(0));
	Dorm myDorm;
	myDorm.play();
	myDorm.showRoom();  // this is just for testing/ do not call this in your homework submission
	//implement myDorm.play();  in teh dorm class.
	//myDorm.play();
	return 0;
}