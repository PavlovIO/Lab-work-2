/* Ilya Pavlov st129535@student.spbu.ru
    Lab-work-2
*/
#include "Card.h"

Card::Card( int costInit, std::string typeInit, std::string themeInit )
: cost(costInit), type(typeInit), theme(themeInit) {}

int Card::getCost()
{
    return cost;
};
void Card::setCost( int newCost )
{
    cost = newCost;    
};
std::string Card::getType()
{
    return type;
};
void Card::setType( std::string newType )
{
    type = newType;
};
std::string Card::getTheme()
{
    return theme;
};
void Card::setTheme( std::string newTheme )
{
    theme = newTheme;
};



