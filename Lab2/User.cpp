#include "User.h"
#include <iostream>
using namespace std;	

	void create(User &user){	
		cout << ("Please enter first name:") << endl;		
		cin >> user.fName;
		cout << ("Please enter last name:") << endl;
		cin >> user.lName;
		cout << ("Please enter age:") << endl;
		cin >> user.age;
		cout << endl;
	}

	void update(User &user){
		cout << ("Please enter which attribute to update (First, Last, Age):") << endl;
		string choice;
		cin >> choice;
		cout << ("Please enter the new value:") << endl;
		if(choice == "First")
			cin >> user.fName;
		else if(choice == "Last")
			cin >> user.lName;
		else if(choice == "Age")
			cin >> user.age;
		cout << endl;
	}

	void view(User &user){
		cout << ("First Name:" + user.fName) << endl;
		cout << ("Last Name:") << user.lName << endl;
		cout <<	("Age:") << user.age << endl;
		cout << ("Favorite Movies") << endl << endl;
		cout << user.favs[0] << endl;
		cout << user.favs[1] << endl;
		cout << user.favs[2] << endl;
		cout << user.favs[3] << endl;
		cout << user.favs[4] << endl << endl;
	}

	void favorites(User &user){
		cout << ("Please input your new 5 Favorite Movies") << endl;
		std::getline (std::cin,user.favs[0]);
		std::getline (std::cin,user.favs[0]);
		std::getline (std::cin,user.favs[1]);
		std::getline (std::cin,user.favs[2]);
		std::getline (std::cin,user.favs[3]);
		std::getline (std::cin,user.favs[4]);
		cout << endl;
	}
