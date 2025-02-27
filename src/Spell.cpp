/* Ilya Pavlov st129535@student.spbu.ru
    Lab-work-2
*/
#include "Spell.h"
Spell::Spell(int costInit, std::string typeInit, std::string themeInit, std::string abilityInit, std::string abilityTypeInit)
: Card(costInit, typeInit, themeInit), ability(abilityInit), abilityType(abilityTypeInit) {}

std::string Spell::getAbility()
{
    return ability;
};
void Spell::setAbility( std::string newAbility)
{
    ability = newAbility;
};
std::string Spell::getAblityType()
{
    return abilityType;
};
void Spell::setAbilityType( std::string newAbilityType)
{
    abilityType = newAbilityType;
};
