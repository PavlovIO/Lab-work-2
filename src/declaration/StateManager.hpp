#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include "libraries.hpp"
#include "GameState.hpp"
#include "ResourceManager.hpp"
#include "UIManager.hpp"

class StateManager
{
private:
    GameState* current_state;
    ResourceManager* RM;
    UIManager* UIM;
public:
    StateManager();
    ~StateManager();

    void changeState(State newState);

    GameState getCurState();
    
};

#endif