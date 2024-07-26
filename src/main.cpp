#include <iostream>
#include "Board.h"
#include "Move.h"
#include "Gamestate.h"
#include "Piece.h"
#include <string>
#include <array>
#include <vector>


void MainLoop();
void OnStart();

int main() {
    Core::Board board;
    board.InitialiseBoard();
    board.PrintBoard();


    // OnStart();
    // Mainloop();
}

void MainLoop () {

}

void OnStart() {

}
