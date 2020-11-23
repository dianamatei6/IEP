#include"user.h"
#include"topic.h"

User::User(std::string n):name(n){}
//User::~User(){} implicit
std::string User::getName()
{
    return name;
}
void User::sendEmail(Email e)
{
    std::cout<<this->User::getName()<<" a trimis emailul cu mesajul <<"<<e.getText()<<">>.\n";
    this->User::receiveEmail(e);
}
void User::receiveEmail(Email e)
{
    std::cout<<"Emailul a fost primit de catre -"<<e.getReceiver()<<"-.\n";
    e.~Email();
}
void User::publicTopic(Topic t)
{
    if(topics().size()<maxNoTopics)
    {
        std::cout<<"Topicul a fost postat\n\n";
        topics().push_back(t);
    }
    else std::cout<<"Nu mai este loc pentru alte topicuri.\n\n";
}
void User::readTopic(std::string ctg)
{
    std::list<Topic>::iterator it;
    for(it=topics().begin();it!=topics().end();++it)
    {
        if(!((*it).getCategory()).compare(ctg))
        {
            std::cout<<"A fost gasit topicul cu mesajul <<"<< (*it).getText()<<">>.\n\n";
        }
        break;
    }
}
