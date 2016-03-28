#ifndef MOVIECHART_H
#define MOVIECHART_H
#include <string>
#include "LinkedList.h"
#include "User.h"
class MovieChart{
	LinkedList <User*> users;
	int num_users;
	User* current_user;
	public:
	MovieChart(){
		num_users = 0;
		current_user = NULL;
	}
	bool login();
	void logout();
	void create();
	void update();
	void view();
	void close();
	void printMovies(User* user);
	void Out();
	void list();
	void fill();
};
#endif
