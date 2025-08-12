#ifndef MATCH_MANAGER_H
#define MATCH_MANAGER_H

#include "libraries.hpp"
#include "enumClasses.hpp"
#include "Stats.hpp"
#include "Ability.hpp"

class Card
{
private:
    std::string id;
    std::string type;
    std::string name;
    Affix affix;
    Stats stats;
    Ability ability;
public:


};

#endif