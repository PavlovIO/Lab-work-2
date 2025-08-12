#ifndef MANA_H
#define MANA_H

#include "libraries.hpp"

class Mana
{
private:
    int actionMana;
    int spellMana;
    int CurrMaxMana;
    
    int MAXACTIONMANA = 10;
    int MAXSPELLMANA = 3;
public:

    int useMana(int amount); // return 0 if enough, 1 if not enough
    
    int getActionMana();
    void setActionMana(int newActionMana);
    int getSpellMana();
    void setSpellMana(int newSpellMana);
    int getCurrMaxMana();
    void setCurrMaxMana(int newCurrMaxMana);

    int getMaxActionMana();
    int getMaxSpellMana();
    
};

#endif