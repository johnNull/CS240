#include "User.h"
#include "MovieChart.h"
#include <iostream>
using namespace std;
int main(){
	string command = "";
	MovieChart *mc = new MovieChart();
	User user;
	while(command != "Quit"){
		cout << "Please enter a command (Create, Update, View, Login, Logout, or Quit):" << endl;
		cin >> command;
		if(command == "Create")
			mc->create();
		else if(command == "Update")
			mc->update();
		else if(command == "View")
			mc->view();
		else if(command == "Login")
			mc->login();
		else if(command == "Logout")
			mc->logout();
		else if(command != "Quit")
			cout << "INVALID COMMAND" << endl;
	}
}
