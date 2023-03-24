#include <iostream>
#include <string>

using namespace std;

class IBeer{
    public:
    virtual void makebeer() = 0;
};

class Budweiser: public IBeer{
    public:
    void makebeer(){
        cout<<"A bottle of Budweiser. Enjoy!"<<endl;
    }
};
class Corona: public IBeer{
    public:
    void makebeer(){
        cout<<"A bottle of Corona. Enjoy!"<<endl;
    }
};