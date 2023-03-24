#include <iostream>
#include <string>

using namespace std;

class IWine{
    public:
    virtual void makewine() = 0;
};

class Shiraz: public IWine{
    public:
    void makewine(){
        cout<<"Here is your glass of Shiraz. Enjoy!"<<endl;
    }
};
class Merlot: public IWine{
    public:
    void makewine(){
        cout<<"Here is your glass of Merlot. Enjoy!"<<endl;
    }
};