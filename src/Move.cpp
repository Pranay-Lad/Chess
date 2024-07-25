#include "Move.h"

Move::Move(int StartSquare, int TargetSquare) {
    this->StartSquare = StartSquare;
    this->TargetSquare = TargetSquare;
    this->MoveValue = TargetSquare - StartSquare;
}