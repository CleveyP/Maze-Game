#include <string>
#include "Item.h"
#include <vector>

class Player{

    std::string name;
    int xPos;
    int yPos;
    std::vector<Item> inventory;
    public:

    //getters setters
    inline int getXPos() const {
        return xPos;
    }

    inline int getYPos() const {
        return yPos;
    }
    inline void setXPos(const int& x){
        xPos = x;
    }

    inline void setYPos(const int& y){
        yPos = y;
    }
    //constructor
    Player(std::string name, int xPos, int yPos);
    inline void addItem(const Item& item){
        inventory.push_back(item);
    }

    void printInventory(){
        for(Item& item : inventory){
            std::cout << item.getName() << std::endl;
        }
    }



};