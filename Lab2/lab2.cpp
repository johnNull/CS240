#include "User.h"
#include <iostream>
using namespace std;
int main(){
	string command = "";
	User user;
	while(command != "Quit"){
		cout << "Please enter a command (Create, Update, View, Favorites, or Quit):" << endl;
		cin >> command;
		if(command == "Create")
			create(user);
		else if(command == "Update")
			update(user);
		else if(command == "View")
			view(user);
		else if(command == "Favorites")
			favorites(user);
		else if(command != "Quit")
			cout << "INVALID COMMAND" << endl;
	}
}
