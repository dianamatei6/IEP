#include"email.h"

Email::Email(std::string t,Subject *s,std::string r):Message(t,s),receiver(r){}

Email::~Email()
{
    std::cout<<"Emailul a fost sters\n\n";
}

Email::Email(const Email& m):Message(m),receiver(m.receiver)          //item 12
{
    std::cout << "Email-ul a fost copiat cu un copyconstructor.\n\n";
}

std::string Email::getReceiver()
{
    return receiver;
}
