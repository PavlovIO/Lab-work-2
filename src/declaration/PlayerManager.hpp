#ifndef PLAYER_MANAGER_H
#define PLAYER_MANAGER_H

#include "libraries.hpp"
#include "ResourceManager.hpp"
#include "UIManager.hpp"
#include "Player.hpp"
#include "Card.hpp"

class PlayerManager
{
private:
    ResourceManager* RM;
    UIManager* UIM;
    std::vector<Player> players;
    int currentPlayer;
public:
    void initializePlayer(int playerId, std::string deckId, bool isAI);
    
    Player getPlayer(int playerId);
    Player getCurPlayer();
    std::vector<Card> getPlayerDeck(int playerId);

};


#endif