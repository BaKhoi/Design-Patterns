#include <iostream>
#include <string>
#include "IWine.h"
#include "IBeer.h"
#include "ISmoothie.h"

using namespace std;

class Bartender{
    private:
    IWine* wine;
    IBeer* beer;
    ISmoothie* smoothie;

    public:
    
    Bartender(IWine* wine, IBeer* beer, ISmoothie* smoothie)
    {
        this->wine = wine;
        this->beer = beer;
        this->smoothie = smoothie;
    }

    virtual ~Bartender() {}

    void makewine()
    {
        wine->makewine();
    }

    void makebeer() 
    {
        beer->makebeer();// here the pointer that points to the derived class object now access its method of makebeer()
        
    }

    void makesmoothie()
    {
    
        smoothie->makesmoothie();
    }

    void setwine(IWine* wine)
    {
        this->wine = wine;
    }
    void setbeer(IBeer* beer)
    {
        this->beer = beer;
    }
    void setcocktail(ISmoothie* smoothie)
    {
        this->smoothie = smoothie;
    }

    void display();
};

class Johnny: public Bartender{
    public:
    Johnny(IWine* wine, IBeer* beer, ISmoothie* smoothie): Bartender(wine, beer, smoothie){};

    void display(){
        cout<<"Hey my name is Johnny!"<<endl;
    }

};

class Leo: public Bartender{
    public:
    Leo(IWine* wine, IBeer* beer, ISmoothie* smoothie): Bartender(wine, beer, smoothie){};

    void display(){
        cout<<"Hey, call me Leo!"<<endl;
    }

};


int main()
{
    IWine* my_wine = new Merlot();//base class pointer points to derived class object
    IBeer* my_beer = new Budweiser();
    ISmoothie* my_cocktail = new Mojito();


    Johnny my_johnny(my_wine, my_beer, my_cocktail);
    my_johnny.display();
    //Ordering
    cout<<"1 Glass of Merlot, please."<<endl;
    my_johnny.makewine();


    //Order Johnny to make another glass of wine
    // my_wine = new Shiraz();
    // my_johnny.setwine(my_wine);
    // cout<<endl;
    // cout<<"Actually, make that Shiraz."<<endl;
    // my_johnny.makewine();

}
