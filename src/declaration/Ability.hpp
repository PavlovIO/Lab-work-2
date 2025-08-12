#ifndef ABILITY_H
#define ABILITY_H

#include "libraries.hpp"
#include "enumClasses.hpp"

struct Ability
{
    std::string abilityId;
    std::string name;
    std::string description;
    TriggerType triggerType;

};

struct Effect
{
    std::string type;
    int amount;
    std::string target;
    std::string targetPlayer;
    EffectType effectType;
    int duration;
};
enum EffectType  //add more
{
    stun,
    spellshield
};

struct Condition
{
    std::string type;
    Operator logicOp; // not sure about this
    int value;
    std::string targetPlayer; // owner, foe, both 

};
enum Operator
{
    AND,
    OR
};

struct Targeting
{
    TargetType targetType;
};
enum TargetType
{
    SelectTarget,
    Automatic,
    RandomTarget,
    AllTargets
};
#endif