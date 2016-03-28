CS140 Data Structures and Algorithms
Spring 2016
Program 1 README FILE

Due Date: 3/9/16
Submission Date: 3/9/16
Author(s): John Null
e-mail(s): jnull1@binghamton.edu

PURPOSE:
To implement LinkedList into our movie chart and expand the movie chart

PERCENT COMPLETE:
85%

PARTS THAT ARE NOT COMPLETE:
Bugs in List and outputting to txt file

BUGS:
List and Out may only print the last movie for some users. Spacing might be off. Out prints some users twice. I just ran out of time for these ones really.

FILES:
README.txt User.h, User.cpp, LinkedList.h, MovieChart.h MovieChart.cpp, makefile, Program1.cpp

SAMPLE OUTPUT:
remote05:~/cs240/program1> ./Program1
Please enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):
Create
Please enter first name:
John
Please enter last name:
Null
Please enter age:
20
Please enter username: 
user
Please enter password: 
pass

Please enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):
Login
Please enter your username: user
Please enter your password: pass
Please enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):
Update
Please enter what you would like to update(Add, Remove, Password): Add
Please input your Favorite Movies (Quit to exit)
a b
c 
d
Quit

Please enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):
View
First Name:John
Last Name:Null
Age:20
Username:user
Favorite Movies

a b
c
d
Please enter a command (Create, Update, View, Login, Logout, Close, List, or Quit):
Quit

TO RUN:
make clean
make
./Program1

EXTRA CREDIT:

BIBLIOGRAPHY:
http://www.cplusplus.com/doc/tutorial/files/

MISCELLANEOUS:
Any additional notes you feel are relevant to your submission


