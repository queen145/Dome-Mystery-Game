// Salma Mohammed
// 12/2/2025
#include <iostream>
#include "Student.cpp"
#include <vector>
using namespace std;


class Dorm {
private:
	vector<Student> rooms;


public:
	Dorm() { // Assign 6 students with names and qoutes

		Student bob("Bob", " Hay! Want a soda? ");  // make new people with new sayings. you must have at least 5 students
		rooms.push_back(bob);           // you will ned to make a few more students
		Student eve("Eve","'Hello World' ");
		rooms.push_back(eve);
		Student frank("Frank", "How about them Cowboys'");
		rooms.push_back(frank);
		Student salma("Salma", "The day is beautiful.");
		rooms.push_back(salma);
		Student hunter("Hunter", "I might know who's the sus.");
		rooms.push_back(hunter);
		Student maria("Maria", "I have no idea!");
		rooms.push_back(maria);
		rooms[rand() % rooms.size()].setSus();
	}


	void showRoom() { // function for rooms to show and names
		for(int i = 0; i < rooms.size(); i++) {  // this is just to see it working. do not call this in your homework
			cout << rooms[i].getname();
			cout << "  " << rooms[i].isSus();
			cout << endl;
		}

	}
//	you can add any other methods you may need in the Dorm class
	void play() { // types of variables
		int choice;
		string username;
		string accuse;
		cout<< "Enter your name: " <<  endl; // Asking user for name
		getline(cin, username);
		cin.ignore();

		while(true) { // While loop for choices 
			cout<< "\nHello " << username << ". Welcome to the dorm. Someone is Sus. Pick a dorm room to visit. " << endl;
			cout<< "Room 1-2-3-4-5-6: " << endl; // Asking user for choice in numbers
			cin >> choice;

			cout<< "\nYou meet " << rooms[choice-1].getname() << ". " ;
			cout<< rooms[choice-1].getname();
			cout<< " says, " << rooms[choice-1].getqoute();
			cout<< "\nDo you accuse " ;
			cout<< rooms[choice-1].getname() << " ? (y/n)" << endl;
			cin >> accuse;
			cin.ignore();
			
            // parameter for ys or no
			if(accuse == "y") {
				if( rooms[choice-1].isSus()) {
					cout<< rooms[choice-1].getname() << " is Sus. " << endl;
					cout<< "You win. " << endl;
				}
				else {
					cout<< rooms[choice-1].getname() << " is not Sus. " << endl;
				}
			}






			//implement this method for the game play
			//tell the user how manu rooms there are
			// ask the user to pick a rooms
			//after the room is chosen, show the greting
			//ask the user if they believe if the person is suspect
			//check the response
			//if true., they win the game
			//if they say no, have them pick a new room
			//be creative.  If you want of need another function add what you need.
		}
	}



};


