#ifndef GAME_STATE_H
#define GAME_STATE_H
#include "libraries.hpp"
#include "ResourceManager.hpp"
#include "UIManager.hpp"
#include "enumClasses.hpp"

class GameState 
{
public:
    ResourceManager* RM;
    UIManager* UIM;
    std::map<std::string,std::string> state_textures;
    State this_state = nan_state;
    std::vector<State> next_states = {};

    GameState(ResourceManager* nRM, UIManager* nUIM);
    ~GameState();
    void virtual loadTextures();
    void enter();
    void virtual exit();
    void virtual action();

    State getCurState();
    std::vector<State> getNextStates();

};

class MainMenu : public GameState
{
public:
    State this_state = main_menu;
    std::vector<State> next_states = {library, deck_prep, game_prep};
    using GameState::GameState;
    using GameState::~GameState;
    
    void loadTextures() override;
    void exit() override;
    void action() override;
    
};

#endif