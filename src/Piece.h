#pragma once

namespace Piece {
    const int None = 0;
    const int Pawn = 1;
    const int Knight = 2;
    const int Bishop = 3;
    const int Rook = 4;
    const int Queen = 5;
    const int King = 6;
    const int White = 0;
    const int Black = 8;

    bool isWhite(int piece);
    bool isColour(int piece, int colour);
    int PieceColour(int piece);
    
    bool isSlidingPiece(int piece);
    bool isPawn(int piece);
    bool isKnight(int piece);
}