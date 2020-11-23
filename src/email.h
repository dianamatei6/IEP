#ifndef EMAIL_H
#define EMAIL_H

#include<iostream>
#include<string>
#include"message.h"
#include"subject.h"

class Email: public Message
{
    std::string receiver;
    Email& operator=(const Email&);                     //nu folosim operatorul de atribuire, deci il invalidam 

public:
    Email(std::string t,Subject *s,std::string r);      //constructorul este folosit la initializarea unui obiect de tip email cu 2 par de tip string
    ~Email();                                           //destructorul este folosit pentru a sterge un obiect de tip email
    Email(const Email& m);                              //copyconstructorul este folosit la apeluri de metode in user
    std::string getReceiver();
};

#endif
