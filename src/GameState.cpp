#include "declaration\GameState.hpp"

State GameState::getCurState()
{
    return this_state;
}

std::vector<State> GameState::getNextStates()
{
    return next_states;
}

GameState::GameState(ResourceManager* nRM, UIManager* nUIM)
    : RM(nRM), UIM(nUIM) {};
GameState::~GameState()
{
    RM = nullptr;
    UIM = nullptr;
}

void GameState::enter()
{
    /* Show initial state textures and show initial UI for the state */
}

void MainMenu::loadTextures()
{
    state_textures = RM->getstateTextures(this_state);
}



