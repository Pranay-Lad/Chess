#pragma once
#include <array>
#include <vector>
#include <string>
#include "Move.h"
#include "Piece.h"
#include <iostream>
#include <unordered_map>



namespace Core {
    class Board {
        private:
            static constexpr int DirectionOffsets[] = {8, -8, -1, 1, 7, -7, 9, -9};
            const std::unordered_map<char, int> fenToPiece = {
    {'P', Piece::Pawn | Piece::White}, {'N', Piece::Knight | Piece::White}, {'B', Piece::Bishop | Piece::White}, {'R', Piece::Rook | Piece::White}, {'Q', Piece::Queen | Piece::White}, {'K', Piece::King | Piece::White},
    {'p', Piece::Pawn | Piece::Black}, {'n', Piece::Knight | Piece::Black}, {'b', Piece::Pawn | Piece::Black}, {'r', Piece::Rook | Piece::Black}, {'q', Piece::Queen | Piece::Black}, {'k', Piece::King | Piece::Black}
};  
            

        public:
            int Square[64];
            
        public:
            std::vector<Move> GenerateMoves(int StartSquare);

            Board();

            void InitialiseBoard();

            void LoadFEN(std::string FEN);
            void PrintBoard();
    };
}