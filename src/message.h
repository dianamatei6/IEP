#ifndef MESSAGE_H
#define MESSAGE_H

#include<iostream>
#include<string>
#include"subject.h"

class Message
{
protected:
    std::string text;
    Subject *subj;

public:
    Message(std::string t,Subject *s);
 //~Message();  folosim destructorul implicit
    Message(const Message& m);
    Message& operator=(const Message& m);
    std::string getText();
    std::string getTextSubj();
};

#endif
