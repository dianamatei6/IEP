#include"message.h"

Message::Message(std::string t,Subject *s):text(t),subj(0){subj = new Subject(*s);}

// Message::~Message() { if(subj!= NULL) delete subj;} 

std::string Message::getText()
{
    return text;
}
std::string Message::getTextSubj()
{
    return (*subj).getText();
}

Message::Message(const Message& m):text(m.text),subj(0)
{
    subj= new Subject(*m.subj);
    std::cout << "Mesajul a fost copiat cu un copyconstructor.\n\n";
}

Message& Message::operator=(const Message& m)
{
    text=m.text; 
    Subject *auxS = this->subj;               //
    this->subj = new Subject(*m.subj);        // item 11
    delete auxS;                              //
    return *this;
}
