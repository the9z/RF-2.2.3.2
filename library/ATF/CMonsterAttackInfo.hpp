// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonsterAttack.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CMonsterAttackAttackMonsterForce2_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
        using CMonsterAttackAttackMonsterForce2_clbk = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, CMonsterAttackAttackMonsterForce2_ptr);
        using CMonsterAttackAttackMonsterGen4_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, bool);
        using CMonsterAttackAttackMonsterGen4_clbk = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, bool, CMonsterAttackAttackMonsterGen4_ptr);
        using CMonsterAttackAttackMonsterSkill6_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*);
        using CMonsterAttackAttackMonsterSkill6_clbk = void (WINAPIV*)(struct CMonsterAttack*, struct _attack_param*, CMonsterAttackAttackMonsterSkill6_ptr);
        
        using CMonsterAttackctor_CMonsterAttack8_ptr = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*);
        using CMonsterAttackctor_CMonsterAttack8_clbk = void (WINAPIV*)(struct CMonsterAttack*, struct CCharacter*, CMonsterAttackctor_CMonsterAttack8_ptr);
        using CMonsterAttackModifyMonsterAttFc10_ptr = float (WINAPIV*)(struct CMonsterAttack*, float);
        using CMonsterAttackModifyMonsterAttFc10_clbk = float (WINAPIV*)(struct CMonsterAttack*, float, CMonsterAttackModifyMonsterAttFc10_ptr);
        using CMonsterAttack_CalcMonSkillAttPnt12_ptr = int (WINAPIV*)(struct CMonsterAttack*);
        using CMonsterAttack_CalcMonSkillAttPnt12_clbk = int (WINAPIV*)(struct CMonsterAttack*, CMonsterAttack_CalcMonSkillAttPnt12_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
