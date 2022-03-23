#include <string>
#include <iostream>
class Item{


    std::string name;
    std::string description;
    virtual void useItem() =0;
};

//TODO create a weapons struct that inherits from item and a potion struct that inherits from item