#ifndef ATTACHAMENT_H
#define ATTACHAMENT_H

#include<iostream>
#include<string>
#include"subject.h"
#include <tr1/memory>
class Attachament
{
protected:
    std::tr1::shared_ptr<Subject> subj;

public:
    Attachament(Subject *s):subj(s)
    {
        std::cout<<"A subject has been attached\n";
    }
    void seeSubject();
};

#endif
