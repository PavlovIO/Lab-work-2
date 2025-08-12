#ifndef ENUM_CLASSES_H
#define ENUM_CLASSES_H

enum State {
    MainMenu

};

enum Affix {
    QuickAttack,
    Challenge,
    OverKill,
    Armored
};

enum TriggerType
{
    onPlay,
    onAttack,
    onDefend,
    onDeath,
    onDeathAlly,
    onDeathFoe,
    onTurnStart,
    onTurnEnd,
    onDamageTaken,
    onSummon,
    onCast,
    onDiscard
};
#endif