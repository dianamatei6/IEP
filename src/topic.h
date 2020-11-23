#ifndef TOPIC_H
#define TOPIC_H

#include<iostream>
#include<string>
#include<time.h>
#include<list> 
#include"message.h"
#include"subject.h"
#define maxNoTopics 3

class Topic: public Message
{
    std::string category;
    double hours;
    time_t timeOfCreation;

public:
    Topic(std::string t,Subject *s, std::string c, double h);
    ~Topic();
    Topic(const Topic& m);
    Topic& operator=(const Topic& m);
    inline bool operator == (const Topic& t) { return category == t.category && hours == t.hours && timeOfCreation == t.timeOfCreation && text==t.text;}
    inline bool operator != (const Topic& t) { return !operator==(t); }
    void checkTime();
    std::string getCategory();
};

std::list<Topic>& topics();

#endif
