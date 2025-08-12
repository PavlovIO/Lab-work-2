#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include "libraries.hpp"
#include "GameState.hpp"

class StateManager
{
private:
    std::unique_ptr<GameState> currentState;
public:
    StateManager();
    ~StateManager();

    void changeState(State newState);

    GameState getCurState();
    void setCurState(GameState State);
};

#endif