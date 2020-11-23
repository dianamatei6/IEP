#ifndef SUBJECT_H
#define SUBJECT_H

#include<iostream>
#include<string>

class Subject
{

protected:
    std::string text;               
    Subject& operator=(const Subject&);  

public:
    Subject(std::string t);
    //~Subject();   folosim destructorul implicit
    Subject(const Subject&);    
    std::string getText();
};
#endif