#include"topic.h"

Topic::Topic(std::string t,Subject *s, std::string c, double h):Message(t,s),category(c),hours(h),timeOfCreation(time(NULL)){}

Topic::~Topic()
{
    std::cout<<"Topicul a fost sters\n\n";
}

Topic::Topic(const Topic& m):Message(m),category(m.category),hours(m.hours),timeOfCreation(m.timeOfCreation)  //item 12
{
    std::cout <<"Topicul a fost copiat cu un copyconstructor.\n\n";
}

Topic& Topic::operator=(const Topic& m)  //diferentiez copy assigment si copyconstructorul prin timeOfCreation
{
    Message::operator=(m);               //item 12
    category = m.category;
    hours = m.hours;
    timeOfCreation = time(NULL);
    return *this;
}

void Topic::checkTime()
{
    time_t timeNow;
    int deadlineInSeconds;
    timeNow=time(NULL);
    deadlineInSeconds=hours*3600;
    if(timeNow-timeOfCreation>=deadlineInSeconds)
    {
        //sterge topicul din lista
        topics().remove(*this); 
        std::cout<<"Topicul NU mai este valabil\n\n";
    }
    else std::cout<<"Topicul este inca valabil\n\n";
}

std::string Topic::getCategory()
{
    return category;
}

std::list<Topic>& topics()
{
    static std::list<Topic> t;
    return t;
}
