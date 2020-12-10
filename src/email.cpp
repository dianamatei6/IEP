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
void Email::exampleSubject()
{
    std::auto_ptr<Subject> s1(new Subject(subj->getText()));
    std::cout<< "Subject of the mail is "<<s1.get()->getText();
}