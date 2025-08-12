#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "libraries.hpp"
#include "UIManager.hpp"
#include "ResourceManager.hpp"
#include "StateManager.hpp"
#include "MatchManager.hpp"
#include "BoardManager.hpp"
#include "PlayerManager.hpp"
#include "CardManager.hpp"

class GameManager
{
private:
    UIManager* UIM;
    ResourceManager* RM;
    StateManager* SM;
    MatchManager* MM;
    BoardManager* BM;
    PlayerManager* PM;
    CardManager* CM;
public:
    GameManager();
    ~GameManager();

    void initialize();
};
#endif