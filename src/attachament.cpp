#include"attachament.h"

void Attachament::seeSubject()
{
    std::cout<<"Subject:"<<subj.get()->getText()<<'\n';
}