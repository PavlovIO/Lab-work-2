#ifndef PLAYER_H
#define PLAYER_H

#include "libraries.hpp"
#include "Mana.hpp"

class Player
{
private:
    std::string name;
    int health;
    Mana* mana;
    std::string deckId;
public:
    Player();
    ~Player();  

    std::string getPlayerName();

    int getPlayerHealth();
    void setPlayerHealth(int newHealth);

    Mana* getPlayerMana();
    
    std::string getPlayerDeckId();

};

#endif