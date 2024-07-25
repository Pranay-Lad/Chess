#pragma once

class Move {
    public:
        int StartSquare;
        int TargetSquare;
        int MoveValue;

    public:
        Move(int StartSquare, int TargetSquare);
        Move(int StartSquare, int TargetSquare, int Flag);
};