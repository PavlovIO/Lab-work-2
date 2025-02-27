/* Ilya Pavlov st129535@student.spbu.ru
    Lab-work-2
*/
Unit::Unit( int costInit, std::string typeInit, std::string themeInit, int healthInit, int strengthInit, std::unique_ptr<CarsdAffix> affixInit, std::string abilityInit)
: Card( costInit, typeInit, themeInit), health(healthInit), strength(strengthInit), affix(affixInit), ability(abilityInit) {}
int Unit::getHealth()
{
	return health;
};
void Unit::setHealth( int newHealth )
{
	health = newHealth;
};
int Unit::getStrength()
{
	return strength;
};
void Unit::setStrength( newStrength )
{
	strength = newStrength;
};
std::unique_ptr<CarsdAffix> Unit::getAffix()
{
	return affix.getName();
};
void setAffix( std::unique_ptr<CarsdAffix> newAffix)
{
	affix = nullptr;
	affix = newAffix;
};