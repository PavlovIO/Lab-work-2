/* Ilya Pavlov st129535@student.spbu.ru
    Lab-work-2
*/
#ifndef UNIT_H
#define UNIT_H
#include "Card.h"
class Unit : public Card 
{
public:
    Unit(int costInit, std::string typeInit, std::string themeInit, int healthInit, int strengthInit, std::unique_ptr<CarsdAffix> affixInit, std::string abilityInit);
    int getHealth();
    void setHealth( int newHealth );
    int getStrength();
    void setStrength( newStrength );
    std::unique_ptr<CarsdAffix> getAffix();
    void setAffix( std::unique_ptr<CarsdAffix> newAffix);

    virtual void use();
private:
    int health;
    int strength;
    std::unique_ptr<CarsdAffix> affix;
    std::string ability;
}

#endif