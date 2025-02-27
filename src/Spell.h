/* Ilya Pavlov st129535@student.spbu.ru
    Lab-work-2
*/
#ifndef SPELL_H
#define SPELL_H
#include "Card.h"

class Spell : public Card 
{
public:
    Spell(int costInit, std::string typeInit, std::string themeInit, std::string abilityInit, std::string abilityTypeInit);

    std::string getAbility();
    void setAbility( std::string newAbility);
    std::string getAblityType();
    void setAbilityType( std::string newAbilityType);

    virtual void useAbility();
    
private:
    std::string ability;
    std::string abilityType;
}


#endif