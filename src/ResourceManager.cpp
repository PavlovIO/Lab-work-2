#include "declaration/libraries.hpp"
#include "declaration/ResourceManager.hpp"

using  json = nlohmann::json;
/*
ResourceManager::ResourceManager() {};
ResourceManager::~ResourceManager() {};
*/
bool ResourceManager::LoadSpells()
{
    std::map<std::string, TriggerType> all_triggers = {{"on_play",on_play},{"on_attack",on_attack},{"on_defend",on_defend},{"on_death",on_death},{"on_death_ally",on_death_ally},{"on_death_foe",on_death_foe},{"on_turn_start",on_turn_start},{"on_eurn_end",on_eurn_end},{"on_damage_taken",on_damage_taken},{"on_summon",on_summon},{"on_cast",on_cast},{"on_discard",on_discard}};
    
    std::fstream spell_file(SPELL_FILE);
    if (!spell_file)
    {
        std::cerr<<"Unable to open file " + SPELL_FILE << std::endl;
        return false;
    }

    json j;
    spell_file >> j;

    try
    {
        for (const auto& spellJson : j["spells"])
        {
            Ability spell;
            spell.ability_id = spellJson["id"];
            spell.name = spellJson["name"];
            spell.description = spellJson["description"];

            if(spellJson.contains("trigger"))
            {
                spell.trigger_type = spellJson["trigger"];
            }

            if(spellJson.contains("conditions") && spellJson["conditions"].is_array())
            {
                for (const auto& spellConditon : spellJson["conditions"])
                {
                    Condition condition;
                    condition.type = spellConditon["type"];
                    condition.value = spellConditon["value"];
                    condition.target_player  = spellConditon["target_palyer"];
                    spell.conditions.push_back(condition);
                }
            }
        
            if(spellJson.contains("effects") && spellJson["effects"].is_array())
            {
                for (const auto& spellEffect : spellJson["effects"])
                {
                    Effect effect;
                    effect.type = spellEffect["type"];
                    effect.amount = spellEffect["amount"];
                    effect.target = spellEffect["target"];
                    effect.target_player = spellEffect["target_player"];
                    effect.effect_type = spellEffect["effect_type"];
                    effect.duration = spellEffect["duration"];

                    spell.effects.push_back(effect);
                }
            }

            if(spellJson.contains("targeting"))
            {
                Targeting spellTargeting;
                spellTargeting.target_type = spellJson["targeting"]["type"];
                for (const auto& target : spellJson["targeting"]["targets"])
                {
                    spellTargeting.targets.push_back(target);
                }
            }
            
            g_spell_db[spell.ability_id] = spell;
        }

    } catch ( const std::exception& e)
    {
        std::cerr << "Error while parsing an abilitiesy" << '\n';
        std::cerr << e.what() << '\n';
        return false;
    }

    return true;
}

bool ResourceManager::LoadCards()
{
    std::map<std::string, Affix>all_affixes = {{"quick_attack",QuickAttack},{"challenge",Challenge},{"overKill",OverKill},{"armored",Armored}} ;
    std::fstream card_file(CARD_FILE);
    if (!card_file)
    {
        std::cerr<<"Unable to open file " + SPELL_FILE << std::endl;
        return false;
    }

    json j;
    card_file >> j;

    try
    {
        for (const auto& cardJson : j["cards"])
        {
            Card card;
            card.id = cardJson["id"];
            card.type = cardJson["type"];
            card.name = cardJson["name"];
            card.cost = cardJson["cost"];
            card.attack = cardJson["attack"];
            card.health = cardJson["health"];
            if (cardJson.contains("affixes") && cardJson["affixes"].is_array())
            {
                for(const auto& cardAffix : cardJson["affixes"])
                {
                    card.affixes.push_back(all_affixes[cardAffix]);
                }
            }
            if (cardJson.contains("ability_id") && cardJson["ability_id"].is_array())
            {
                for(const auto& abilityId : cardJson["ability_id"])
                {
                    card.affixes.push_back(abilityId);
                }
            }
            
            g_card_db[card.id] = card;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error while parsing an abilitiesy" << '\n';
        std::cerr << e.what() << '\n';
        return false;
    }
    
    return true;
};

