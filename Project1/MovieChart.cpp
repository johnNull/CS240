#include "User.h"
#include "MovieChart.h"
#include "LinkedList.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

bool MovieChart::login(){
	cout << "Please enter your username: ";
	string u;
	cin >> u;
	users.reset();
	if(users.isEmpty() == false){
		for(int i = 0; i < num_users; i++){
			if(users.read()->getUsername() == u){
				cout << "Please enter your password: ";
				cin >> u;
				if(users.read()->authenticate(u)){			
					current_user = users.read();
					return true;
				}	
			}
			users.next();
		}
	}
	return false;
}

void MovieChart::logout(){
	current_user = NULL;
}

void MovieChart::fill(){
	ifstream storage ("users.txt");
	string line;
	int i = 0;
	User* u = new User();
	if(storage.is_open()){
	//cout << "in file" << endl;
		while(getline(storage, line)){
			//cout << line;
			if(line.empty()){
				users.insert(u);
				u = new User();
				i = 0;	
				num_users++;
				//cout << "inserted" << endl;
			}
			else if(i == 0){u->Username = line; i++;}
			else if(i == 1){u->fName = line; i++;}
			else if(i == 2){u->lName = line; i++;}
			else if(i == 3){u->age = atoi(line.c_str()); i++;}
			else if(i == 4){u->setPassword(line); i++;}
			else if(i == 5){u->favs.insert(line);}
		}
		users.insert(u);
		num_users++;
		storage.close();
	}
}

void MovieChart::Out(){
	ofstream out("users.txt");
	string line;
	if(out.is_open()){
		users.reset();
		out << users.read()->getUsername() << endl;
		out << users.read()->fName << endl;
		out << users.read()->lName << endl;
		out << users.read()->age << endl;
		out << users.read()->Password << endl;
		out << users.read()->favs.read() << endl;
		if(users.read()->favs.isEmpty() == false){
			while(users.read()->favs.next()){
				out << users.read()->favs.read() << endl;
			}
		}
		out << endl;
		while(users.next()){
			out << users.read()->getUsername() << endl;
			out << users.read()->fName << endl;
			out << users.read()->lName << endl;
			out << users.read()->age << endl;
			out << users.read()->Password << endl;
			out << users.read()->favs.read() << endl;
			if(users.read()->favs.isEmpty() == false){
				while(users.read()->favs.next()){
					out << users.read()->favs.read() << endl;
				}
			}
			out << endl;
		}
	}
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
	users.insert(new User(fn, ln, a, un, pass));
	num_users++;
}

void MovieChart::close(){
	if(current_user != NULL)
		users.remove(current_user);
	else
		cout << "Please login before continuing." << endl << endl;
}

void MovieChart::printMovies(User* user){
	if(user->favs.isEmpty() == false){
		cout << user->favs.read() << endl;
		while(user->favs.next()){
			cout << user->favs.read() << endl;
		}
	}
}

void MovieChart::list(){
	if(users.isEmpty() == false){
		users.reset();
		cout << users.read()->getUsername() << endl;
		printMovies(users.read());
		cout << endl;
		while(users.next()){
			cout << users.read()->getUsername() << endl;
			printMovies(users.read());
			cout << endl;
		}
		cout << endl;
	}

}

void MovieChart::update(){
	if(current_user != NULL){		
		cout << ("Please enter what you would like to update(Add, Remove, Password): ");
		string choice;
		cin >> choice;
		if(choice == "Add"){
			cout << ("Please input your Favorite Movies (Quit to exit)") << endl;
			getline(cin, choice);
			addMovie(*current_user);
		}
		else if(choice == "Remove"){
			cout << ("Please input the titles of the movies to be removed (Quit to exit)") << endl << endl;
			getline(cin,choice);
			removeMovie(*current_user);
		}
		else if(choice == "Password"){
			string newpas;
			cout << "Please input your new password" << endl;
			cin >> newpas;
			current_user->setPassword(newpas);
		}
		cout << endl;
	}
	else{
		cout << "Please login before continuing." << endl << endl;
	}	
}

void MovieChart::view(){
	if(current_user != NULL){
		cout << ("First Name:" + current_user->fName) << endl;
		cout << ("Last Name:") << current_user->lName << endl;
		cout <<	("Age:") << current_user->age << endl;
		cout << ("Username:") << current_user->getUsername() << endl;
		cout << ("Favorite Movies") << endl << endl;
		current_user->favs.reset();
		if(current_user->favs.isEmpty() == false){
			cout << current_user->favs.read() << endl;
			while(current_user->favs.next()){
				cout << current_user->favs.read() << endl;
			}
		}
	}
	else{
		cout << "Please login before continuing." << endl << endl;	
	}
}
