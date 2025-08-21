#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "libraries.hpp"
#include "enumClasses.hpp"
#include "Card.hpp"

class ResourceManager
{
private:
    std::string CARD_FILE = "..\\..\\assets\\data\\defenitions\\card.json";
    std::string SPELL_FILE = "..\\..\\assets\\data\\defenitions\\spell.json";
    std::string TEXTURE_FILE = "..\\..\\assets\\textures\\card_textures\\";
    std::string TEMPLATES_FILE = "..\\..\\assets\\textures\\templates\\";

    std::map<std::string, std::string> UITextures;
    std::map<State, std::map<std::string,std::string>> stateTextures;
    
    std::map<std::string, Card>g_card_db;
    std::map<std::string, Ability>g_spell_db;
    std::map<std::string, std::string> g_card_textures;

public:
    std::map<std::string, std::string> getUITextures();
    std::map<std::string, std::string> getstateTextures(State state);
    
    std::map<std::string, Card> getg_card_db();
    std::map<std::string, Ability> getg_spell_db();
    std::map<std::string, std::string> getg_card_textures();

    bool LoadCards();
    bool LoadSpells();
    bool LoadCardTextures();
    bool LoadUITextures();
    bool LoadStateTextures();

    void ReadAllCards();
    void ReadAllSpells();
    void ReadAllCardTextures();
};

#endif