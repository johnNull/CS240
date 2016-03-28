#ifndef USER_H
#define USER_H
#include <string>
class User{
	public:
	std::string lName;
	std::string fName;
	int age;
	std::string favs[5];
};
void create(User& user);
void update(User& user);
void view(User& user);
void favorites(User& user);
#endif
