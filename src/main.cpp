#include"message.h"
#include"subject.h"
#include"email.h"
#include"topic.h"
#include"user.h"
#include <unistd.h>

int main()
{
    User u1("Andreea"),u2("Maria"),u3("Florin");
    Subject s("pls");
    Subject *s1(&s);
    Email e1("Hey cf",s1,"Sorin"),e2("Nu ms",s1,"Raluca");
    Topic t1("Trandafiri,Garoafe",s1,"flori",0.00001), t2("Banane,Rosii",s1,"fructe",12);
    Topic t3(t1);
    Topic t4=t1;
    u1.sendEmail(e1);
    u2.receiveEmail(e2);
    u1.publicTopic(t1);
    u2.publicTopic(t2);
    u3.publicTopic(t3);
    u3.publicTopic(t4);
    usleep(3000);
    u3.readTopic("flori");
    t1.checkTime();
    u3.publicTopic(t4);

    Message m1("Hey",s1);
    Message m2=m1;
    std::cout<<m2.getTextSubj()<<"\n";
    return 0;
}
