#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>
#include"email.h"
#include"topic.h"
class User
{
    std::string name;
    User(const User&);                   //devalidam copyconstructorul
    User& operator=(const User&);        //devalidam copy assignment-ul
public:
    User(std::string n);
//  ~User();                               folosim destructorul implicit 
    std::string getName();
    void sendEmail(Email e);
    void receiveEmail(Email e);
    void publicTopic(Topic t);
    void readTopic(std::string ctg);
};
#endif
