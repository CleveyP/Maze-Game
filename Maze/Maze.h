#include <vector>
#include <string>
#include <iostream>
class Maze{
    public:
    //grid to hold the maze
    std::vector<std::vector<char>> grid;
    //grid to hold the holes in the floor. If user walks over a hole it is game over.
    std::vector<std::vector<bool>> holes;
    //coordinates of the exit door
    int doorX;
    int doorY;
    //dimensions of grid
    int numRows;
    int numColumns;
    //constructor
    Maze(int rows, int columns, int difficulty=0);
    //
    void updateGrid();
    void printGrid();
    bool isHole(int row, int column);
    bool isWin(int row, int column);
    void startGame();

};