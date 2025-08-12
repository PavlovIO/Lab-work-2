#ifndef MATCH_MANAGER_H
#define MATCH_MANAGER_H

#include "libraries.hpp"
#include "enumClasses.hpp"
#include "Ability.hpp"

class Card
{
private:
    

public:
    std::string id;
    std::string type;
    std::string name;
    int cost;
    int health;
    int attack;
    std::vector<Affix> affixes;
    std::vector<std::string> abilities_id;

};

#endif