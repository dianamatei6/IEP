#include"subject.h"

Subject::Subject(std::string t):text(t){}

//Subject::~Subject(){} implicit

std::string Subject::getText()
{
    return text;
}

Subject::Subject(const Subject& s):text(s.text)
{
   std::cout << "Subiectul a fost copiat cu un copyconstructor.\n\n";
}   