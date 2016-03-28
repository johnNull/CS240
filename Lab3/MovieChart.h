#ifndef MOVIECHART_H
#define MOVIECHART_H
#include <string>
#include "User.h"
class MovieChart{
	User *users[255];
	int num_users;
	User *current_user;
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
};
#endif
