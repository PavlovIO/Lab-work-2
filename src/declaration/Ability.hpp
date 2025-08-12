#ifndef ABILITY_H
#define ABILITY_H

#include "libraries.hpp"

struct Ability
{
    std::string ability_id;
    std::string name;
    std::string description;
    TriggerType trigger_type;
    std::vector<Condition> conditions;
    std::vector<Effect> effects;
    Targeting targeting;
};

enum TriggerType
{
    on_play,
    on_attack,
    on_defend,
    on_death,
    on_death_ally,
    on_death_foe,
    on_turn_start,
    on_eurn_end,
    on_damage_taken,
    on_summon,
    on_cast,
    on_discard
};

struct Effect
{
    std::string type;
    int amount;
    std::string target;
    std::string target_player;
    std::string effect_type; /*stun, spell_shield*/
    int duration;
};

struct Condition
{
    std::string type;
    //Operator logic_op; // not sure about this
    int value;
    std::string target_player; // owner, foe, both 

};

enum Operator
{
    AND,
    OR
};

struct Targeting
{
    std::string target_type;
    std::vector<std::string> targets;
};
/*
    select_target,
    automatic,
    random_target,
    all_targets  
*/



#endif