#ifndef GAME_STATE_H
#define GAME_STATE_H
#include "libraries.hpp"
#include "ResourceManager.hpp"
#include "UIManager.hpp"

class GameState 
{
private:
    ResourceManager* RM;
    UIManager* UIM;
    State thisState;
    std::vector<State> nextStates;
public:
    void virtual enter();
    void virtual exit();
    void virtual action();

    State getCurState();
    void setCurState(State newState);
    std::vector<State> getNextStates();
    void setNextStates(std::vector<State> newStates);

};

#endif