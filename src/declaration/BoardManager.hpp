#ifndef BOARD_MANAGER_H
#define BOARD_MANAGER_H

#include "libraries.hpp"
#include "ResourceManager.hpp"
#include "UIManager.hpp"

class BoardManager
{
private:
    ResourceManager& RM;
    UIManager& UIM;
public:
    BoardManager(ResourceManager& newRM, UIManager& newUIM);
    ~BoardManager(){};
    
};

#endif