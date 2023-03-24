// Joseph M Manternach
// mazeAlgorithm

#include <iostream>

int main() {

    // Initializing two variables to store the dimentions of the maze
    const int xSIZE = 2;
    const int ySIZE = 2;

    // Initializing the maze
    int MAZE[ySIZE][xSIZE] = { 1,2,
                               3,4 };

    std::cout << MAZE[0][1] << std::endl;
    return 0;
}