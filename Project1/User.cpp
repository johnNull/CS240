#include "User.h"
#include "LinkedList.h"
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
		user.favs.reset();
		cout << user.favs.read() << endl;
		user.favs.next();
		cout << user.favs.read() << endl;
		user.favs.next();
		cout << user.favs.read() << endl;
		user.favs.next();
		cout << user.favs.read() << endl;
		user.favs.next();
		cout << user.favs.read() << endl << endl;
	}

	void addMovie(User &user){
		string fav;
		while(fav != "Quit"){
			getline(cin, fav);
			if(fav != "Quit")
				user.favs.insert(fav);
		}
	}

	void removeMovie(User &user){
		string rm;
		while(rm!="Quit"){
			getline(cin, rm);
			if(rm != "Quit")
				user.favs.remove(rm);
		}
	}
