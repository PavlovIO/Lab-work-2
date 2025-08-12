#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "libraries.hpp"
#include "enumClasses.hpp"

class ResourceManager
{
private:
    std::map<std::string, std::string> cardStats;
    std::map<std::string, std::string> cardAbilities;
    std::map<std::string, std::string> cardTextures;
    std::map<std::string, std::string> UITextures;
    std::map<std::string, std::string> stateTextures;
    
public:
    ResourceManager();
    ~ResourceManager();
    void LoadCardStats(std::string cardId);
    void LoadCardTexture(std::string cradId);
    void LoadUITextures();
    void stateTexture(State State);
};

#endif