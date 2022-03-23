#include "Player.h"


 Player::Player(std::string name, int xPos, int yPos){
     //set name
     std::cout << "Enter Your Name: " << std::endl;
     std::cin >> name;
    setXPos(xPos);
    setYPos(yPos);
    //TODO set inventory to hold a dagger and a heal potion
 }