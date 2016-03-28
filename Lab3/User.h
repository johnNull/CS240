#ifndef USER_H
#define USER_H
#include <string>
class User{
	std::string Username;
	std::string Password;
	public:
	std::string lName;
	std::string fName;
	int age;
	std::string *favs;

	User(std::string fname, std::string lname, int age, std::string username, std::string password){
		fName = fname; 
		lName = lname; 
		this->age = age; 
		Username = username; 
		Password = password;
		favs = new std::string[5];
	}

	User(){
		favs = new std::string[5];
	}

	~User(){delete[] favs;}
 
	bool authenticate(std::string password){
	return(password == Password);}

	std::string getUsername(){
		return Username;}

	void setPassword(std::string new_password){
		Password = new_password;}

	std::string* movieList(){
		return favs;}
	
};
void create(User& user);
void update(User& user);
void view(User& user);
void favorites(User& user);
#endif
