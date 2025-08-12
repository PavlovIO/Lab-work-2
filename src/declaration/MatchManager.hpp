#ifndef MATCH_MANAGER_H
#define MATCH_MANAGER_H

#include "libraries.hpp"
#include "BoardManager.hpp"
#include "PlayerManager.hpp"
#include "CardManager.hpp"

class MatchManager
{
private:
    BoardManager BM;
    PlayerManager PM;
    CardManager CM;
};

#endif