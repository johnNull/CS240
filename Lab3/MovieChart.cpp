#include "User.h"
#include "MovieChart.h"
#include <iostream>
#include <string>
using namespace std;

bool MovieChart::login(){
	cout << "Please enter your username: ";
	string u;
	cin >> u;
	for(int i = 0; i < num_users; i++){
		if(users[i]->getUsername() == u){
			cout << "Please enter your password: ";
			cin >> u;
			if(users[i]->authenticate(u)){
				current_user = users[i];
				return true;
			}	
		}
	}
	return false;
}

void MovieChart::logout(){
	current_user = NULL;
}

void MovieChart::create(){
	string fn, ln, un, pass;
	int a;
	cout << ("Please enter first name:") << endl;		
	cin >> fn;
	cout << ("Please enter last name:") << endl;
	cin >> ln;
	cout << ("Please enter age:") << endl;
	cin >> a;
	cout << ("Please enter username: ") << endl;
	cin >> un;
	cout <<("Please enter password: ") << endl;
	cin >> pass;
	cout << endl;
	users[num_users] = new User(fn, ln, a, un, pass);
	num_users++;
}

void MovieChart::update(){
	if(current_user == NULL)
		cout << "Please login before continuing." << endl << endl;
	else{
		cout << ("Please enter which attribute to update (Password, Favorites):") << endl;
		string choice;
		cin >> choice;
		cout << ("Please enter the new value:") << endl;
		if(choice == "Favorites")
			favorites(*current_user);
		else if(choice == "Password"){
			string newpas;
			cout << "Please input your new password" << endl;
			cin >> newpas;
			current_user->setPassword(newpas);
		}
		cout << endl;
	}	
}

void MovieChart::view(){
	if(current_user == NULL)
		cout << "Please login before continuing." << endl << endl;
	else{
		cout << ("First Name:" + current_user->fName) << endl;
		cout << ("Last Name:") << current_user->lName << endl;
		cout <<	("Age:") << current_user->age << endl;
		cout << ("Username:") << current_user->getUsername() << endl;
		cout << ("Favorite Movies") << endl << endl;
		cout << current_user->favs[0] << endl;
		cout << current_user->favs[1] << endl;
		cout << current_user->favs[2] << endl;
		cout << current_user->favs[3] << endl;
		cout << current_user->favs[4] << endl << endl;	
	}
}
