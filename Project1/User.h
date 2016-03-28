#ifndef USER_H
#define USER_H
#include <string>
#include "LinkedList.h"
class User{
	std::string Username;
	std::string Password;
	public:
	std::string lName;
	std::string fName;
	int age;
	LinkedList<std::string> favs;
	friend class MovieChart;

	User(std::string fname, std::string lname, int age, std::string username, std::string password){
		fName = fname; 
		lName = lname; 
		this->age = age; 
		Username = username; 
		Password = password;
		//favs = new LinkedList<std::string>();
	}

	User(){
		//favs = new LinkedList<std::string>();
	}

	User(User &copy){
		fName = copy.fName;
		lName = copy.lName;
		age = copy.age;
		Username = copy.Username;
		Password = copy.Password;
	}

	~User(){}
 
	bool authenticate(std::string password){
	return(password == Password);}

	std::string getUsername(){
		return Username;}

	void setPassword(std::string new_password){
		Password = new_password;}

	LinkedList<std::string> movieList(){
		return favs;}
	
};
void create(User& user);
void update(User& user);
void view(User& user);
void addMovie(User& user);
void removeMovie(User& user);/*
bool operator ==(User& lhs, User& rhs){
	if(lhs.getUsername() == rhs.getUsername())
		return true;
	return false;
}
*/
#endif
