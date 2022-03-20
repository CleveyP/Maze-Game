#include "Maze.h"
#include <stdlib.h>


//constructor sets up the grid and the holes in the grid
 Maze::Maze(int rows, int columns, int difficulty=0){
     if(difficulty>10 || difficulty < 0){
        std::cerr << "Difficulty " << difficulty << "not valid" << std::endl;
        return;
     }
     //generate a random position for the door
     int xCoord = rand() % rows-1;
     int yCoord = rand() % columns-1;
     std::vector<std::vector<char>> newGrid;
      std::vector<std::vector<bool>> newHoleGrid;
     for(int i=0; i< rows; i++){
         std::vector<char> currentRow;
          std::vector<bool> currentHoleRow;
         for(int j=0; j< columns; j++){

            currentHoleRow.push_back((rand() % (10 - difficulty))); //push either a hole or no hole
            currentRow.push_back('#'); //add a hedge
         }
         newGrid.push_back(currentRow);
         newHoleGrid.push_back(currentHoleRow);
     }

     //place door 
     newHoleGrid.at(xCoord).at(yCoord) = false;
     doorX = xCoord;
     doorY = yCoord;
     //instatiate the grid and the holes grid
     grid = newGrid;
     holes = newHoleGrid;
     grid.at(0).at(0) = '@'; //place player symbol at the top left of the grid
 } //end constructor

//updateGrid moves the user 
void Maze::updateGrid(){
    char direction;
    std::cout << "Enter direction with wasd and press enter." << std::endl;
    std::cin >> direction;
    switch (direction){
        case 'a':
//TODO move character to the left
            break;
        case 's':
//TODO move character down
            break;
        case 'd':
//TODO move character to the right
            break;
        case 'w':
//TODO move character up
        default:
        std::cout << "invalid direction";
        updateGrid(); //try to get good input again.
    }
    return;
}//end updateGrid

//prints the current grid
  void Maze::printGrid(){
      system("CLS"); //clear the terminal screen before printing grid
      for(int i=0; i< grid.size(); i++){
          std::cout << std::endl;
          for (int j=0; j< grid.at(0).size(); j++){
              std::cout << grid.at(i).at(j);
          }
      }
  }