#pragma once
#include <array>
#include <vector>
#include <string>
#include "Move.h"

namespace Core {
    class Board {
        private:
            static constexpr int DirectionOffsets[] = {8, -8, -1, 1, 7, -7, 9, -9};

        public:
            std::array<int, 64> Square;
            
        public:
            std::vector<Move> GenerateMoves(int StartSquare);

            void InitialiseBoard();

            void ParseFEN(std::string FEN);
    };
}