//driver for the maze game
#include "Maze.h"
using namespace std;
int main(){
    int rows;
    int columns;
    int difficulty=0;
    cout << "Enter number of Rows: " << endl;
    cin >> rows;
    cout << "Enter nubmer of Columns: " << endl;
    cin >> columns;
    cout << "Enter difficulty from 1-10" << endl;
    cin >> difficulty;
    Maze maze(rows, columns, difficulty);

    //start game
   // maze.startGame();

    return 0;
}