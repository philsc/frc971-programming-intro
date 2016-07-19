#include <array>
#include <iostream>

static constexpr size_t kSize = 5;
static constexpr int kWall = 0;  // Designates a piece of wall.
static constexpr int kOpen = 1;  // Space the player can walk through.

using Maze = ::std::array<::std::array<int, kSize>, kSize>;

void PrintMaze(const Maze &maze) {
    // Iterate over all the rows in the maze.
    for (const auto &row : maze) {
        // Iterate over each element in the row.
        for (int cell : row) {
            if (cell == kWall) {
                ::std::cout << "X";
            } else if (cell == kOpen) {
                ::std::cout << " ";
            }
        }
        // Print a newline character.
        ::std::cout << ::std::endl;
    }
}

int main() {
    // Set up a small maze to navigate. {% raw %}
    Maze maze{{
        {kWall, kWall, kWall, kOpen, kWall},
        {kOpen, kOpen, kWall, kOpen, kWall},
        {kWall, kOpen, kWall, kOpen, kWall},
        {kWall, kOpen, kOpen, kOpen, kWall},
        {kWall, kWall, kWall, kWall, kWall},
    }};

    // Print the maze as Xs and spaces. {% endraw %}
    PrintMaze(maze);

    return 0;
}
