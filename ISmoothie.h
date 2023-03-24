#include <iostream>
#include <string>

using namespace std;

class ISmoothie{
    public:
    virtual void makesmoothie() = 0;
};

class Mojito: public ISmoothie{
    public:
    void makesmoothie(){
        cout<<"1 Mojito. Enjoy!"<<endl;
    }
};
class Margarita: public ISmoothie{
    public:
    void makesmoothie(){
        cout<<"1 Margarita. Enjoy!"<<endl;
    }
};