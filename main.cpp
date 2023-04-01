// Joseph M Manternach
// mazeAlgorithm

#include <iostream>

int main() {

    // Initializing two variables to store the dimentions of the maze
    const int xSIZE = 5;
    const int ySIZE = 5;

    int startPosition[2];

    // Initializing the maze
    int MAZE[ySIZE][xSIZE] =  {-1,-1, -1, -1, -1,
                               -1, 0,  0,  0,  3,
                               -1, 0, -1, -1, -1,
                                1, 0, -1, -1, -1,
                               -1,-1, -1, -1, -1};

    // finds the starting position
    for (int xVal = 0; xVal < 5; xVal++){

        for (int yVal = 0; yVal < 5; yVal++){

            if (MAZE[xVal][yVal] == 1){
                
                startPosition[0] = yVal;
                startPosition[1] = xVal; 
            }
        }
    }


    std::cout << MAZE[1][0] << std::endl;
    std::cout << startPosition[0] << startPosition[1] << std::endl;


    return 0;
}