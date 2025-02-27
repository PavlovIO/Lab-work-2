/* Ilya Pavlov st129535@student.spbu.ru
	Lab-work-2
*/
#ifndef CARD_H
#define CARD_H
#include "libraries.h"

class Card
{
public:
    Card( int costInit = -1, std::string typeInit = "None", std::string themeInit = "None" );
    virtual ~Card() = default;
    int getCost();
    void setCost( int newCost = -1);
    std::string getType();
    void setType( std::string newType = "None" );
    std::string getTheme();
    void setTheme( std::string newTheme = "None" );
    
    // виртуальные функции для классов Unit и Spell
    virtual std::string getAbility() = "None";
    virtual void setAbility( std::string newAbility = "None" );
    virtual void useAbility();

    virtual std::string getAbilityType() = "None";
    virtual void setAbilityType( std::string newAbilityType )  = "None" ;

    virtual int getHealth() = -1;
    virtual void setHealth( int newHealth ) = 0;
    virtual int getStrength() = -1;
    virtual void setStrength( int newStrength ) = 0;
    virtual std::unique_ptr<CardAffix> getAffix() = nullptr;
    virtual void setAffix( std::unique_ptr<CardAffix> newAffix ) = nullptr;

private:
    int cost;
    std::string type;
    std::string theme;
}

#endif
