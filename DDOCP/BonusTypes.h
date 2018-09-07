// BonusTypes.h
//
#pragma once

#include "XmlLib\SaxContentElement.h"

// Special note - The  "Unknown" entries of each enum must be entry 0 in the
// enum map as this is used by the SAX loaders to check for badly loaded values
// these enumerations are used across multiple object types
enum BonusType
{
    Bonus_Unknown = 0,
    // only the highest of these effects stack if multiple present
    Bonus_ability,
    Bonus_alchemical,
    Bonus_artifact,
    Bonus_armor,
    Bonus_base,
    Bonus_circumstance,
    Bonus_class,
    Bonus_competence,
    Bonus_deflection,
    Bonus_destiny,
    Bonus_determination,
    Bonus_divine,
    Bonus_dodge,
    Bonus_enchantment,
    Bonus_enhancement,
    Bonus_elementalEnergy,
    Bonus_epic,
    Bonus_equipment,
    Bonus_eternalFaith,
    Bonus_exceptional,
    Bonus_falseLife,
    Bonus_feat,
    Bonus_festive,
    Bonus_greaterElementalEnergy,
    Bonus_greaterElementalSpellPower,
    Bonus_guild,
    Bonus_hallowed,
    Bonus_insightful,
    Bonus_implement,
    Bonus_inherent,
    Bonus_keen,
    Bonus_levelUps,
    Bonus_luck,
    Bonus_morale,
    Bonus_music,
    Bonus_mythic,
    Bonus_naturalArmor,
    Bonus_orb,
    Bonus_penalty,
    Bonus_primal,
    Bonus_profane,
    Bonus_psionic,
    Bonus_quality,
    Bonus_raging,
    Bonus_racial,
    Bonus_reaper,
    Bonus_resistance,
    Bonus_sacred,
    Bonus_shield,
    Bonus_size,
    Bonus_silverFlame,
    Bonus_skill,
    Bonus_special,
    Bonus_spooky,
    Bonus_stacking,
    Bonus_unique,
    Bonus_vitality,
    Bonus_weaponEnchantment,
};

const XmlLib::enumMapEntry<BonusType> bonusTypeMap[] =
{
    {Bonus_Unknown, L"Unknown"},
    {Bonus_ability, L"Ability"},
    {Bonus_alchemical, L"Alchemical"},
    {Bonus_artifact, L"Artifact"},
    {Bonus_armor, L"Armor"},
    {Bonus_base, L"Base"},
    {Bonus_circumstance, L"Circumstance"},
    {Bonus_class, L"Class"},
    {Bonus_competence, L"Competence"},
    {Bonus_deflection, L"Deflection"},
    {Bonus_determination, L"Determination"},
    {Bonus_destiny, L"Destiny"},
    {Bonus_divine, L"Divine"},
    {Bonus_dodge, L"Dodge"},
    {Bonus_enchantment, L"Enchantment"},
    {Bonus_enhancement, L"Enhancement"},
    {Bonus_equipment, L"Equipment"},
    {Bonus_elementalEnergy, L"Elemental Energy"},
    {Bonus_epic, L"Epic"},
    {Bonus_eternalFaith, L"Eternal Faith"},
    {Bonus_exceptional, L"Exceptional"},
    {Bonus_falseLife, L"FalseLife"},
    {Bonus_feat, L"Feat"},
    {Bonus_festive, L"Festive"},
    {Bonus_greaterElementalEnergy, L"Greater Elemental Energy"},
    {Bonus_greaterElementalSpellPower, L"Greater Elemental Spell Power"},
    {Bonus_guild, L"Guild"},
    {Bonus_hallowed, L"Hallowed"},
    {Bonus_insightful, L"Insightful"},
    {Bonus_implement, L"Implement"},
    {Bonus_inherent, L"Inherent"},
    {Bonus_keen, L"Keen"},
    {Bonus_levelUps, L"Level Ups"},
    {Bonus_luck, L"Luck"},
    {Bonus_morale, L"Morale"},
    {Bonus_music, L"Music"},
    {Bonus_mythic, L"Mythic"},
    {Bonus_naturalArmor, L"NaturalArmor"},
    {Bonus_orb, L"Orb"},
    {Bonus_penalty, L"Penalty"},
    {Bonus_primal, L"Primal"},
    {Bonus_profane, L"Profane"},
    {Bonus_psionic, L"Psionic"},
    {Bonus_quality, L"Quality"},
    {Bonus_racial, L"Racial"},
    {Bonus_raging, L"Rage"},
    {Bonus_reaper, L"Reaper"},
    {Bonus_resistance, L"Resistance"},
    {Bonus_sacred, L"Sacred"},
    {Bonus_shield, L"Shield"},
    {Bonus_size, L"Size"},
    {Bonus_silverFlame, L"SilverFlame"},
    {Bonus_skill, L"Skill"},
    {Bonus_special, L"Special"},
    {Bonus_spooky, L"Spooky"},
    {Bonus_stacking, L"Stacking"},
    {Bonus_unique, L"Unique"},
    {Bonus_vitality, L"Vitality"},
    {Bonus_weaponEnchantment, L"WeaponEnchantment"},
    {BonusType(0), NULL}
};
