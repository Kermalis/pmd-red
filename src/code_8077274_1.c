#include "global.h"
#include "code_803E46C.h"
#include "code_8045A00.h"
#include "dungeon_map_access.h"
#include "dungeon_message.h"
#include "code_805D8C8.h"
#include "code_806CD90.h"
#include "code_8077274_1.h"
#include "code_808417C.h"
#include "constants/ability.h"
#include "constants/item.h"
#include "constants/status.h"
#include "constants/type.h"
#include "dungeon_items.h"
#include "dungeon_movement.h"
#include "dungeon_pokemon_attributes.h"
#include "dungeon_random.h"
#include "dungeon_util.h"
#include "move_effects_target.h"
#include "moves.h"
#include "math.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "pokemon_mid.h"
#include "status_checks_1.h"
#include "structs/dungeon_entity.h"
#include "structs/str_dungeon.h"
#include "dungeon_map_access.h"
#include "structs/str_806B7F8.h"
#include "dungeon_config.h"

extern u8 *gUnknown_80FA8BC[];
extern u8 *gUnknown_80FA824[];
extern u8 *gUnknown_80FA81C[];
extern u8 *gPtrMonNoLongerPetrifiedMessage[];
extern u8 *gUnknown_80FA820[];
extern u8 *gUnknown_80FA800[];
extern u8 *gUnknown_80FAC38[];
extern u8 *gUnknown_80FA97C[];
extern u8 *gUnknown_80FA9DC[];
extern u8 *gUnknown_80FAAAC[];
extern u8 *gUnknown_80FAB90[];
extern u8 *gPtrMonNoLongerCringingMessage[];
extern u8 *gUnknown_80FA638[];
extern u8 *gUnknown_80FA69C[];
extern u8 *gUnknown_80FA658[];
extern u8 *gUnknown_80FA67C[];
extern u8 *gUnknown_80FA6BC[];
extern u8 *gUnknown_80FA6D4[];
extern u8 *gUnknown_80FA9C0[];
extern u8 *gUnknown_80FAA68[];
extern u8 *gPtrMonStoppedEnduringMessage[];
extern u8 *gPtrMonMirrorMoveFadedMessage[];
extern u8 *gPtrMonConversion2FailedMessage[];
extern u8 *gPtrMonGaveUpVitalThrowMessage[];
extern u8 *gUnknown_80FAB40[];
extern u8 *gUnknown_80FA7BC[];
extern u8 *gUnknown_80FA9A0[];
extern u8 *gUnknown_80FA7DC[];
extern u8 *gUnknown_80FA79C[];
extern u8 *gUnknown_80FAA8C[];
extern u8 *gUnknown_80FA8E0[];
extern u8 *gUnknown_80FA90C[];
extern u8 *gUnknown_80FA934[];
extern u8 *gUnknown_80FA95C[];
extern u8 *gUnknown_80FABBC[];
extern u8 *gUnknown_80FAB6C[];
extern u8 *gUnknown_80FA9F4[];
extern u8 *gUnknown_80FAA0C[];
extern u8 *gUnknown_80FAA2C[];
extern u8 *gUnknown_80FAA48[];
extern u8 *gUnknown_80FABC0[];
extern u8 *gUnknown_80FA888[];
extern u8 *gUnknown_80FA8A8[];
extern u8 *gUnknown_80FA868[];
extern u8 *gUnknown_80FA6E8[];
extern u8 *gUnknown_80FA708[];
extern u8 *gUnknown_80FA70C[];
extern u8 *gUnknown_80FA734[];
extern u8 *gUnknown_80FA710[];
extern u8 *gUnknown_80FA124[];
extern u8 *gPtrSealedMoveReleasedMessage[];
extern u8 *gUnknown_81004E8[];
extern u8 *gPtrExposedWoreOffMessage[];
extern u8 *gUnknown_8100594[];
extern u8 *gUnknown_80FBD18[];
extern u8 *gUnknown_80FBD3C[];
extern u8 *gUnknown_80FBCF0[];
extern u8 *gUnknown_80FBCC8[];
extern u8 *gUnknown_80FBCA4[];
extern u8 *gUnknown_80FBC7C[];
extern u8 *gPtrForecastPreventsConversion2Message[];
extern u8 *gUnknown_80FBC5C[];
extern u8 *gUnknown_80FBC38[];
extern u8 *gUnknown_80FBC14[];
extern u8 *gUnknown_80FBBF0[];
extern u8 *gUnknown_80FBAE4[];
extern u8 *gUnknown_80FBAC0[];
extern u8 *gUnknown_80FB9B0[];
extern u8 *gUnknown_80FB9D8[];
extern u8 *gUnknown_80FB17C[];
extern u8 *gUnknown_80FB1A8[];
extern u8 *gUnknown_80FB130[];
extern u8 *gUnknown_80FB160[];
extern u8 *gUnknown_80FAF5C[];
extern u8 *gUnknown_80FAF8C[];
extern u8 *gUnknown_80FAE1C[];
extern u8 *gUnknown_80FAE3C[];
extern u8 *gUnknown_80FB09C[];
extern u8 *gUnknown_80FB0C4[];
extern u8 *gUnknown_80FB048[];
extern u8 *gUnknown_80FB074[];
extern u8 *gUnknown_80FB10C[];
extern u8 *gUnknown_80FB0E0[];
extern u8 *gUnknown_80FC074[];
extern u8 *gUnknown_80FD254[];
extern u8 *gUnknown_80FD27C[];
extern u8 *gUnknown_80FD22C[];
extern u8 *gUnknown_80FD20C[];
extern u8 *gUnknown_80FC428[];
extern u8 *gUnknown_80FC454[];
extern u8 *gUnknown_80FC3D8[];
extern u8 *gUnknown_80FC3FC[];
extern u8 *gUnknown_80FC388[];
extern u8 *gUnknown_80FC3B4[];
extern u8 *gUnknown_80FC33C[];
extern u8 *gUnknown_80FC360[];
extern u8 *gUnknown_80FDBD0[];
extern u8 *gUnknown_80FDBF0[];
extern u8 *gUnknown_80FB880[];
extern u8 *gUnknown_80FB89C[];
extern u8 *gUnknown_80FB834[];
extern u8 *gUnknown_80FB85C[];
extern u8 *gUnknown_80FB810[];
extern u8 *gUnknown_80FB7F4[];
extern u8 *gUnknown_80FC028[];
extern u8 *gUnknown_80FC054[];
extern u8 *gUnknown_80FC000[];
extern u8 *gUnknown_80FBFD8[];
extern u8 *gUnknown_80FBF9C[];
extern u8 *gUnknown_80FBFB8[];
extern u8 *gUnknown_80FBF04[];
extern u8 *gUnknown_80FBEC0[];
extern u8 *gUnknown_80FBEE4[];
extern u8 *gUnknown_80FBF50[];
extern u8 *gUnknown_80FBF28[];
extern u8 *gUnknown_80FBF68[];
extern u8 *gUnknown_80FBF84[];

extern void ShowWholeRevealedDungeonMap();
extern void EntityUpdateStatusSprites(Entity *);
extern void sub_8042A74(Entity *r0);
extern void sub_807EC28(bool8);
extern s32 GetMonsterApparentID(Entity *param_1, s16 param_2);
extern void sub_806A898(Entity *, u32, u32);
extern void HealTargetHP(Entity *pokemon, Entity *r1, s16, s16, u32);
extern void DealDamageToEntity(Entity *, s16, u32, u32);
extern void ResetMonEntityData(EntityInfo *, u32);
extern void sub_80420C8(Entity *r0);
extern void nullsub_68(Entity *);
extern void nullsub_67(Entity *);
extern void nullsub_66(Entity *);
extern void nullsub_65(Entity *);
extern void nullsub_64(Entity *);
extern void nullsub_63(Entity *);
extern void nullsub_62(Entity *);
extern void nullsub_61(Entity *);
extern void nullsub_60(Entity *);
extern void nullsub_59(Entity *);
extern void nullsub_58(Entity *);
extern void nullsub_57(Entity *);
extern void sub_8041B34(Entity *);
void sub_8041BD0(Entity *r0, u8 r1);
void sub_8041EB4(Entity *);
void sub_8041EA4(Entity *);
extern void sub_8041E84(Entity *);
extern void sub_8041E94(Entity *);
extern void sub_8041E74(Entity *);
extern void sub_8041E60(Entity *);
extern void sub_8041E4C(Entity *);
extern void sub_8041E3C(Entity *);
extern void sub_803F580(u32);
extern void sub_8041E1C(Entity *);
extern void nullsub_89(Entity *);
extern void nullsub_88(Entity *);
extern void nullsub_87(Entity *);
extern void nullsub_86(Entity *);
extern void sub_8041E0C(Entity *);
extern void sub_8041DD8(Entity *r0, s32 r1); // NOTE: is s16 in another file
extern s32 sub_803D870(UnkDungeonGlobal_unk1CD98 *strPtr, s32 id);
extern bool8 sub_806AA0C(s32, u32);

void MuzzleTarget(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if ((EntityIsValid(target)) && (!HasSafeguardStatus(pokemon, target, TRUE))) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->muzzled.muzzled != TRUE) {
        entityInfo->muzzled.muzzled = TRUE;
        entityInfo->muzzled.turns = CalculateStatusTurns(target,gMuzzledTurnRange, TRUE) + 1;
        nullsub_86(target);
        TryDisplayDungeonLoggableMessage3(pokemon, target, *gUnknown_80FBF68);
    }
    else
    {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBF84);
    }
    EntityUpdateStatusSprites(target);
  }
}

void TransformStatusTarget(Entity * pokemon, Entity * target)
{
    s16 species;
    s32 iVar5;
    s32 apparentID;
    s16 apparentID_s16;
    s32 index;
    EntityInfo *entityInfo;
    OpenedFile *sprite;
    UnkDungeonGlobal_unk1CD98 auStack544[64];

    if (!EntityIsValid(target))
        return;

    entityInfo = GetEntInfo(target);

    if (entityInfo->invisibleClassStatus.status == STATUS_TRANSFORMED)
        TryDisplayDungeonLoggableMessage3(pokemon, target, *gUnknown_80FBF04);
    else {
        SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0], target, 0);
        iVar5 = sub_803D870(auStack544, 0);

        if (iVar5 == 0)
            TryDisplayDungeonLoggableMessage3(pokemon, target, *gUnknown_80FBEE4);
        else {
            sprite = NULL;

            for (index = 0; index < DUNGEON_MAX_POKEMON; index++) {
                species = ExtractSpeciesIndex(&auStack544[DungeonRandInt(iVar5)]);
                apparentID_s16 = GetMonsterApparentID(target, species);
                apparentID = apparentID_s16;

                if (apparentID != entityInfo->apparentID && sub_806AA0C(apparentID, 1)) {
                    sprite = GetSpriteData(apparentID);
                    if (sprite != NULL)
                        break;
                }
            }

            if (index == DUNGEON_MAX_POKEMON || sprite == NULL)
                TryDisplayDungeonLoggableMessage3(pokemon, target, *gUnknown_80FBEE4);
            else {
                entityInfo->apparentID = apparentID;
                target->axObj.spriteFile = sprite;
                entityInfo->invisibleClassStatus.status = STATUS_TRANSFORMED;
                entityInfo->invisibleClassStatus.turns = CalculateStatusTurns(target, gTransformedTurnRange, TRUE) + 1;
                sub_806CF98(target);
                nullsub_87(target);
                sub_806CCB4(target, sub_806CEBC(target));
                CopyCyanMonsterNametoBuffer(gFormatBuffer_Monsters[1], entityInfo->apparentID);
                TryDisplayDungeonLoggableMessage3(pokemon, target, *gUnknown_80FBEC0);
                EntityUpdateStatusSprites(target);
            }
        }
    }
}

void MobileStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;


  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);

    if (entityInfo->invisibleClassStatus.status == STATUS_TRANSFORMED) {
        SendTransformEndMessage(pokemon,target);
    }
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->invisibleClassStatus.status != STATUS_MOBILE) {
        entityInfo->invisibleClassStatus.status = STATUS_MOBILE;
        entityInfo->invisibleClassStatus.turns = CalculateStatusTurns(target,gMobileTurnRange, FALSE) + 1;
        nullsub_88(target);
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBF28);
    }
    else {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBF50);
    }
    EntityUpdateStatusSprites(target);
  }
}

void ExposeStatusTarget(Entity * pokemon, Entity * target, s16 param_3)
{
  EntityInfo *entityInfo;
  s32 param_3_s16;
  s32 param_3_s16_2;
  bool32 flag;
  bool32 flag2;

  param_3_s16 = param_3;
  param_3_s16_2 = param_3_s16;
  flag = FALSE;
  flag2 = FALSE;

  if ((EntityIsValid(target)) && (!HasSafeguardStatus(pokemon,target,TRUE))) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->hitChanceStages[1] > 10) {
      entityInfo->hitChanceStages[1] = 10;
      flag = TRUE;
    }
    if(flag)
    {
        sub_8041DD8(target,param_3_s16);
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC000);
        flag2 = TRUE;
    }
    if (entityInfo->exposed) {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBFB8);
    }
    else
    {
      if (!flag2) {
        sub_8041DD8(target,param_3_s16_2);
      }
      if (!MonsterIsType(target, TYPE_GHOST)) {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBFD8);
      }
      else {
        entityInfo->exposed = TRUE;
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBF9C);
      }
      EntityUpdateStatusSprites(target);
    }
  }
}

void IdentityItemHolders(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if ((EntityIsValid(target)) && (!HasSafeguardStatus(pokemon, target, TRUE))) {
    entityInfo = GetEntInfo(target);
    if (!gDungeon->unk644.itemHoldersIdentified) {
        nullsub_89(target);
        gDungeon->unk644.itemHoldersIdentified = TRUE;
        EntityUpdateStatusSprites(target);
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC028);
    }
    else
    {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC054);
    }
  }
}

void BlindTarget(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if ((EntityIsValid(target)) && (!HasSafeguardStatus(pokemon, target, TRUE))) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->blinkerClassStatus.status != STATUS_BLINKER) {
        entityInfo->blinkerClassStatus.status = STATUS_BLINKER;
        entityInfo->blinkerClassStatus.turns = CalculateStatusTurns(target,gBlinkerTurnRange, TRUE) + 1;
        sub_8041E0C(target);
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB7F4);
        DungeonRunFrameActions(0x31);
        sub_8049ED4();
        ShowWholeRevealedDungeonMap();
    }
    else
    {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB810);
    }
    EntityUpdateStatusSprites(target);
  }
}

void CrossEyeVisionTarget(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;


  if (EntityIsValid(target)) {
    if(!HasSafeguardStatus(pokemon, target, TRUE))
    {
        entityInfo = GetEntInfo(target);
        SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
        if (entityInfo->blinkerClassStatus.status != STATUS_CROSS_EYED) {
            sub_8041E1C(target);
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB834);
            entityInfo->blinkerClassStatus.status = STATUS_CROSS_EYED;
            entityInfo->blinkerClassStatus.turns = CalculateStatusTurns(target,gCrossEyedTurnRange, TRUE) + 1;
            sub_803F580(0x1);
            sub_8049ED4();
            ShowWholeRevealedDungeonMap();
        }
        else
        {
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB85C);
        }
        EntityUpdateStatusSprites(target);
    }
  }
}

void RestoreVisionTarget(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;


  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->blinkerClassStatus.status != STATUS_EYEDROPS) {
        entityInfo->blinkerClassStatus.status = STATUS_EYEDROPS;
        entityInfo->blinkerClassStatus.turns = CalculateStatusTurns(target,gEyedropsTurnRange, FALSE) + 1;
        sub_8041E3C(target);
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB880);
        DungeonRunFrameActions(0x31);
        sub_8049ED4();
        ShowWholeRevealedDungeonMap();
    }
    else
    {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB89C);
    }
    EntityUpdateStatusSprites(target);
  }
}

void RestorePPTarget(Entity * pokemon,Entity * target, s32 param_3)
{
  volatile s32 PP;
  volatile s32 basePP;
  Move *movePtr;
  Move *movePtr1;
  s32 index;
  bool8 PPChanged;
  EntityInfo *entityInfo;

  PPChanged = FALSE;
  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);

    for(index = 0; index < MAX_MON_MOVES; index++)
    {
      movePtr = &entityInfo->moves.moves[index];
      movePtr1 = movePtr;
      if ((movePtr->moveFlags & MOVE_FLAG_EXISTS)) {
        PP = movePtr->PP;
        basePP = GetMoveBasePP(movePtr1);
        if (PP < basePP) {
          PP += param_3;
          if (PP > basePP) {
            PP = basePP;
          }
          movePtr->PP = PP;
          PPChanged = TRUE;
        }
      }
    }
    if (PPChanged) {
      sub_8041E4C(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FDBD0);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FDBF0);
    }
    EntityUpdateStatusSprites(target);
  }
}

void RaiseAtkStatTarget(Entity * pokemon, Entity *target, s32 increment)
{
  u32 oldStat;
  u32 oldStat1;
  s32 newStat;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);

    entityInfo = GetEntInfo(target);
    oldStat = entityInfo->atk[0];
    oldStat1 = oldStat;

    newStat = entityInfo->atk[0] + increment;
    if (0xfe < newStat) {
      newStat = 0xff;
    }
    entityInfo->atk[0] = newStat;
    if (oldStat1 < (u8)newStat) {
      sub_8041E60(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC33C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC360);
    }
    EntityUpdateStatusSprites(target);
  }
}

void RaiseSpAtkStatTarget(Entity * pokemon, Entity *target, s32 increment)
{
  u32 oldStat;
  u32 oldStat1;
  s32 newStat;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);

    entityInfo = GetEntInfo(target);
    oldStat = entityInfo->atk[1];
    oldStat1 = oldStat;

    newStat = entityInfo->atk[1] + increment;
    if (0xfe < newStat) {
      newStat = 0xff;
    }
    entityInfo->atk[1] = newStat;
    if (oldStat1 < (u8)newStat) {
      sub_8041E74(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC388);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC3B4);
    }
    EntityUpdateStatusSprites(target);
  }
}

void RaiseDefStatTarget(Entity * pokemon, Entity *target, s32 increment)
{
  u32 oldStat;
  u32 oldStat1;
  s32 newStat;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);

    entityInfo = GetEntInfo(target);
    oldStat = entityInfo->def[0];
    oldStat1 = oldStat;

    newStat = entityInfo->def[0] + increment;
    if (0xfe < newStat) {
      newStat = 0xff;
    }
    entityInfo->def[0] = newStat;
    if (oldStat1 < (u8)newStat) {
      sub_8041E84(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC3D8);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC3FC);
    }
    EntityUpdateStatusSprites(target);
  }
}

void RaiseSpDefStatTarget(Entity * pokemon, Entity *target, s32 increment)
{
  u32 oldStat;
  u32 oldStat1;
  s32 newStat;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);

    entityInfo = GetEntInfo(target);
    oldStat = entityInfo->def[1];
    oldStat1 = oldStat;

    newStat = entityInfo->def[1] + increment;
    if (0xfe < newStat) {
      newStat = 0xff;
    }
    entityInfo->def[1] = newStat;
    if (oldStat1 < (u8)newStat) {
      sub_8041E94(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC428);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC454);
    }
    EntityUpdateStatusSprites(target);
  }
}

void LongTossStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[1],target,0);
    if (entityInfo->longTossClassStatus.status != STATUS_LONG_TOSS) {
      entityInfo->longTossClassStatus.status = STATUS_LONG_TOSS;
      sub_8041EA4(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FD20C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FD22C);
    }
    EntityUpdateStatusSprites(target);
}

void PierceStatusTarget(Entity * pokemon, Entity * target)
{
    EntityInfo *entityInfo;

    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[1],target,0);
    if (entityInfo->longTossClassStatus.status != STATUS_PIERCE) {
      entityInfo->longTossClassStatus.status = STATUS_PIERCE;
      sub_8041EB4(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FD254);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FD27C);
    }
    EntityUpdateStatusSprites(target);
}

void SetChargeStatusTarget(Entity *pokemon, Entity *target, u8 newStatus, Move *move, u8 *message)
{
  bool8 bVar2;
  Move *movePtr;
  s32 index;
  bool8 uVar5;
  s32 iVar7;
  s32 iVar8;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if ((entityInfo->bideClassStatus.status == newStatus) && (newStatus == STATUS_ENRAGED)) {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FC074);
    }
    else {
      entityInfo->bideClassStatus.status = newStatus;

      for(index = 0; index < MAX_MON_MOVES; index++)
      {
        movePtr = &entityInfo->moves.moves[index];
        if(movePtr == move)
        {
            entityInfo->bideClassStatus.moveSlot = index;
            break;
        }
      }
      entityInfo->unk14A = 1;

      uVar5 = FALSE;
      if (newStatus == STATUS_FLYING || newStatus == STATUS_BOUNCING) {
        entityInfo->unkFF = 1;
        uVar5 = TRUE;
      }
      else if (newStatus == STATUS_DIVING || newStatus == STATUS_DIGGING) {
        entityInfo->unkFF = 2;
      }
      if (newStatus == STATUS_BIDE) {
        entityInfo->bideClassStatus.turns = CalculateStatusTurns(target,gBideTurnRange, FALSE) + 1;
        entityInfo->unkA0 = 0;
      }
      if (newStatus == STATUS_ENRAGED) {
        entityInfo->bideClassStatus.turns = CalculateStatusTurns(target,gEnragedTurnRange, FALSE) + 1;
      }
      sub_8041BD0(target,uVar5);
      TryDisplayDungeonLoggableMessage3(pokemon,target,message);
      EntityUpdateStatusSprites(target);

      // TODO: this could probably be cleaner..
      for (index = 0, iVar8 = 0xc7ff; index < 400; index++) {
        bVar2 = TRUE;
        if (entityInfo->unkFF == 1)
            if(iVar7 = entityInfo->unk174.raw, bVar2 = FALSE, iVar7 > iVar8) // unk174 -> u32 to s32
            {
                bVar2 = TRUE;
            }
        if (bVar2) {
          break;
        }
        DungeonRunFrameActions(0x53);
      }
    }
  }
}

void sub_8079764(Entity * pokemon)
{
    EntityInfo *entityInfo;

    if (EntityIsValid(pokemon)) {
        entityInfo = GetEntInfo(pokemon);
        if ((entityInfo->bideClassStatus.status != STATUS_BIDE) && (entityInfo->bideClassStatus.status != STATUS_ENRAGED)) {
            entityInfo->bideClassStatus.status = STATUS_NONE;
            entityInfo->unk14A = 0;
            entityInfo->unkFF = 0;
        }
        EntityUpdateStatusSprites(pokemon);
    }
}

void CounterStatusTarget(Entity * pokemon, Entity * target, u8 newStatus)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status == newStatus) {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB10C);
    }
    else {
      nullsub_57(target);
      if ((entityInfo->reflectClassStatus.status != STATUS_COUNTER) && (entityInfo->reflectClassStatus.status != STATUS_MINI_COUNTER)) {
        entityInfo->reflectClassStatus.turns =  CalculateStatusTurns(target,gCounterTurnRange, FALSE) + 1;
      }
      entityInfo->reflectClassStatus.status = newStatus;
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB0E0);
      EntityUpdateStatusSprites(target);
    }
  }
}

void SafeguardStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_SAFEGUARD) {
      entityInfo->reflectClassStatus.status = STATUS_SAFEGUARD;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gSafeguardTurnRange, FALSE) + 1;
      nullsub_58(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB048);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB074);
    }
    EntityUpdateStatusSprites(target);
  }
}

void MistStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_MIST) {
      entityInfo->reflectClassStatus.status = STATUS_MIST;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gMistTurnRange, FALSE) + 1;
      nullsub_59(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB09C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB0C4);
    }
    EntityUpdateStatusSprites(target);
  }
}

void WishStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_WISH) {
      entityInfo->reflectClassStatus.status = STATUS_WISH;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gWishTurnRange, FALSE) + 1;
      sub_8041B34(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAE1C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAE3C);
    }
    EntityUpdateStatusSprites(target);
  }
}

void MagicCoatStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_MAGIC_COAT) {
      entityInfo->reflectClassStatus.status = STATUS_MAGIC_COAT;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gMagicCoatTurnRange, FALSE) + 1;
      nullsub_60(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAF5C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAF8C);
    }
    EntityUpdateStatusSprites(target);
  }
}

void LightScreenStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_LIGHT_SCREEN) {
      entityInfo->reflectClassStatus.status = STATUS_LIGHT_SCREEN;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gLightScreenTurnRange, FALSE) + 1;
      nullsub_61(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB130);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB160);
    }
    EntityUpdateStatusSprites(target);
  }
}

void ReflectStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_REFLECT) {
      entityInfo->reflectClassStatus.status = STATUS_REFLECT;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gReflectTurnRange, FALSE) + 1;
      nullsub_62(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB17C);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB1A8);
    }
    EntityUpdateStatusSprites(target);
  }
}

void ProtectStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    nullsub_63(target);
    entityInfo = GetEntInfo(target);
    if (entityInfo->reflectClassStatus.status != STATUS_PROTECT) {
      entityInfo->reflectClassStatus.status = STATUS_PROTECT;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gProtectTurnRange, FALSE) + 1;
      SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB9B0);
    }
    else {
      SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FB9D8);
    }
    EntityUpdateStatusSprites(target);
  }
}

void MirrorCoatStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_MIRROR_COAT) {
      entityInfo->reflectClassStatus.status = STATUS_MIRROR_COAT;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gMirrorCoatTurnRange, FALSE) + 1;
      nullsub_64(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBAC0);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBAE4);
    }
    EntityUpdateStatusSprites(target);
  }
}

void EndureStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_ENDURING) {
      entityInfo->reflectClassStatus.status = STATUS_ENDURING;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gEnduringTurnRange, FALSE) + 1;
      nullsub_65(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBBF0);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBC14);
    }
    EntityUpdateStatusSprites(target);
  }
}

void MirrorMoveStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_MIRROR_MOVE) {
      entityInfo->reflectClassStatus.status = STATUS_MIRROR_MOVE;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gMirrorMoveTurnRange, FALSE) + 1;
      nullsub_66(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBC38);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBC5C);
    }
    EntityUpdateStatusSprites(target);
  }
}

void Conversion2StatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);

    if(AbilityIsActive(target, ABILITY_FORECAST))
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gPtrForecastPreventsConversion2Message);
    else
    {
        SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
        if (entityInfo->reflectClassStatus.status != STATUS_CONVERSION2) {
            entityInfo->reflectClassStatus.status = STATUS_CONVERSION2;
            entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gConversion2TurnRange, FALSE) + 1;
            nullsub_67(target);
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBC7C);
        }
        else {
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBCA4);
        }
        EntityUpdateStatusSprites(target);
    }
  }
}

void VitalThrowStatusTarget(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (entityInfo->reflectClassStatus.status != STATUS_VITAL_THROW) {
      entityInfo->reflectClassStatus.status = STATUS_VITAL_THROW;
      entityInfo->reflectClassStatus.turns = CalculateStatusTurns(target, gVitalThrowTurnRange, FALSE) + 1;
      nullsub_68(target);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBCC8);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBCF0);
    }
    EntityUpdateStatusSprites(target);
  }
}

void sub_8079E34(Entity * pokemon, Entity * target, bool8 param_3)
{
  bool8 statChanged;
  EntityInfo *entityInfo;
  s32 index;

  statChanged = FALSE;
  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);

    for(index = 0; index < 2; index++)
    {
      if (entityInfo->offensiveStages[index] != DEFAULT_STAT_STAGE) {
        entityInfo->offensiveStages[index] = DEFAULT_STAT_STAGE;
        statChanged = TRUE;
      }
      if (entityInfo->defensiveStages[index] != DEFAULT_STAT_STAGE) {
        entityInfo->defensiveStages[index] = DEFAULT_STAT_STAGE;
        statChanged = TRUE;
      }
      if (entityInfo->hitChanceStages[index] != DEFAULT_STAT_STAGE) {
        entityInfo->hitChanceStages[index] = DEFAULT_STAT_STAGE;
        statChanged = TRUE;
      }
      if (!F248EqualsInt(entityInfo->offensiveMultipliers[index], 1)) {
        entityInfo->offensiveMultipliers[index] = F248_ONE;
        statChanged = TRUE;
      }
      if (!F248EqualsInt(entityInfo->defensiveMultipliers[index], 1)) {
        entityInfo->defensiveMultipliers[index] = F248_ONE;
        statChanged = TRUE;
      }
    }
    if (statChanged) {
      sub_80420C8(target);
    }
    else if (param_3 != 0) {
      sub_80420C8(target);
    }
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    if (statChanged) {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBD18);
    }
    else {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FBD3C);
    }
    EntityUpdateStatusSprites(target);
  }
}

void sub_8079F20(Entity * pokemon, Entity * target, u8 param_3, u8 param_4)
{
  bool8 moveUnsealed; // r9
  s32 moveSpeed;
  Move *move;
  EntityInfo *entityInfo; // r7
  bool8 bVar8; // r8
  s32 index;

  bVar8 = FALSE;
  moveUnsealed = FALSE;
  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    if (HasNegativeStatus(target)) {
      bVar8 = TRUE;
      EndSleepClassStatus(pokemon,target,0,0);
      if (!EntityIsValid(target)) {
        return;
      }
      EndBurnClassStatus(pokemon,target);
      EndFrozenClassStatus(pokemon,target);
      EndCringeClassStatus(pokemon,target);
      EndCurseClassStatus(pokemon,target,0);
      EndLeechSeedClassStatus(pokemon,target);
      SendMoveEndMessage(pokemon,target);
      SendEyesightEndMessage(pokemon,target);
      SendMuzzledEndMessage(pokemon,target);
      if (entityInfo->perishSongTurns != 0) {
        entityInfo->perishSongTurns = 0;
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_8100594);
      }
      if (entityInfo->exposed) {
        entityInfo->exposed = FALSE;
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gPtrExposedWoreOffMessage);
      }
    }

    moveSpeed = CalcSpeedStage(target);
    for(index = 0; index < NUM_SPEED_COUNTERS; index++)
    {
      entityInfo->speedDownCounters[index] = 0;
    }

    if (moveSpeed != CalcSpeedStage(target)) {
      bVar8 = TRUE;
      TryDisplayDungeonLoggableMessage3(pokemon,target,gUnknown_80FA124[entityInfo->speedStage]);
    }

    for(index = 0; index < MAX_MON_MOVES; index++)
    {
        move = &entityInfo->moves.moves[index];
        if ((move->moveFlags & MOVE_FLAG_EXISTS) && (move->moveFlags2 & MOVE_FLAG_EXISTS)) {
            bVar8 = TRUE;
            moveUnsealed = TRUE;
            move->moveFlags2 &= ~(MOVE_FLAG_EXISTS);
        }
    }

    if (bVar8) {
      if (param_3 != 0) {
        sub_80420C8(target);
      }
      if (moveUnsealed) {
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gPtrSealedMoveReleasedMessage);
      }
    }
    else if (param_4 == 0) {
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_81004E8);
    }
    EntityUpdateStatusSprites(target);
  }
}

void sub_807A0CC(Entity * pokemon, Entity * target)
{
  Move *move;
  EntityInfo *entityInfo;
  s32 index;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    ResetMonEntityData(entityInfo,0);
    entityInfo->perishSongTurns = 0;
    entityInfo->exposed = FALSE;

    for(index = 0; index < MAX_MON_MOVES; index++)
    {
        move = &entityInfo->moves.moves[index];
        if ((move->moveFlags & MOVE_FLAG_EXISTS)) {
            move->moveFlags2 &= ~(MOVE_FLAG_EXISTS);
        }
    }
    EntityUpdateStatusSprites(target);
  };
}

void EndSleepClassStatus(Entity * pokemon, Entity * target, bool8 param_3, bool8 param_4)
{
  EntityInfo *entityInfo;
  bool8 isAsleep;

  isAsleep = FALSE;
  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->sleepClassStatus.status) {
        case STATUS_NONE:
        case 6:
            break;
        case STATUS_SLEEP:
            isAsleep = TRUE;
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA6E8);
            break;
        case STATUS_SLEEPLESS:
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA708);
            break;
        case STATUS_NIGHTMARE:
            isAsleep = TRUE;
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA70C);
            if (param_4) {
                DealDamageToEntity(target,gNightmareDmgValue,8,0x20f);
            }
            break;
        case STATUS_NAPPING:
            isAsleep = TRUE;
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA710);
            HealTargetHP(pokemon,target,gNappingHpHealValue, 0, FALSE);
            entityInfo->sleepClassStatus.status = 0;
            sub_8079F20(pokemon,target,1,1);
            break;
        case STATUS_YAWNING:
            if (param_3) {
                entityInfo->sleepClassStatus.status = STATUS_NONE;
                SleepStatusTarget(pokemon,target,CalculateStatusTurns(target, gSleepFromYawnTurnRange, TRUE) + 1, TRUE);
                return;
            }
            TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA734);
            break;
  }
  entityInfo->sleepClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
  if (isAsleep) {
    sub_806CE68(target,8);
  }
}

void EndBurnClassStatus(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->burnClassStatus.status) {
    case STATUS_NONE:
    case 5:
        break;
    case STATUS_POISONED:
    case STATUS_BADLY_POISONED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA8A8);
        break;
    case STATUS_PARALYSIS:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA868);
        break;
    case STATUS_BURN:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA888);
        break;

  }
  entityInfo->burnClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
}

void EndFrozenClassStatus(Entity * pokemon, Entity *target)
{
  bool8 isFrozen;
  EntityInfo *entityInfo;

  isFrozen = FALSE;
  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->frozenClassStatus.status) {
    case STATUS_NONE:
    case 8:
        break;
    case STATUS_FROZEN:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA8BC);
        isFrozen = TRUE;
        break;
    case STATUS_CONSTRICTION:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA820);
        break;
    case STATUS_SHADOW_HOLD:
    case STATUS_INGRAIN:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA824);
        break;
    case STATUS_WRAP:
    case STATUS_WRAPPED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA81C);
        sub_8076CB4(entityInfo->unk9C);
        break;
    case STATUS_PETRIFIED:
        TryDisplayDungeonLoggableMessage3(pokemon,target, *gPtrMonNoLongerPetrifiedMessage);
        break;
  }
  entityInfo->frozenClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
  if (isFrozen) {
    sub_8042A74(target);
  }
}

void EndCringeClassStatus(Entity * pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->cringeClassStatus.status) {
    case STATUS_NONE:
    case 8:
        break;
    case STATUS_CONFUSED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA800);
        break;
    case STATUS_COWERING:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA97C);
        break;
    case STATUS_TAUNTED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA9DC);
        break;
    case STATUS_PAUSED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAC38);
        break;
    case STATUS_INFATUATED:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAB90);
        break;
    case STATUS_ENCORE:
        TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FAAAC);
        break;
    case STATUS_CRINGE:
        TryDisplayDungeonLoggableMessage3(pokemon,target, *gPtrMonNoLongerCringingMessage);
        break;
  }
  entityInfo->cringeClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
  CalcSpeedStage(target);
}

void EndReflectClassStatus(Entity * pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->reflectClassStatus.status) {
    case STATUS_NONE:
    case 0xF:
        break;
    case STATUS_REFLECT:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA638);
        break;
    case STATUS_SAFEGUARD:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA69C);
        break;
    case STATUS_LIGHT_SCREEN:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA658);
        break;
    case STATUS_COUNTER:
    case STATUS_MINI_COUNTER:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA67C);
        break;
    case STATUS_MAGIC_COAT:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA6BC);
        break;
    case STATUS_WISH:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA6D4);
        break;
    case STATUS_PROTECT:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA9C0);
        break;
    case STATUS_MIRROR_COAT:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAA68);
        break;
    case STATUS_ENDURING:
        LogMessageByIdWithPopupCheckUser(target, *gPtrMonStoppedEnduringMessage);
        break;
    case STATUS_MIRROR_MOVE:
        LogMessageByIdWithPopupCheckUser(target,*gPtrMonMirrorMoveFadedMessage);
        break;
    case STATUS_CONVERSION2:
        LogMessageByIdWithPopupCheckUser(target, *gPtrMonConversion2FailedMessage);
        break;
    case STATUS_VITAL_THROW:
        LogMessageByIdWithPopupCheckUser(target, *gPtrMonGaveUpVitalThrowMessage);
        break;
    case STATUS_MIST:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAB40);
        break;
  }
  entityInfo->reflectClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
}

void EndCurseClassStatus(Entity * pokemon, Entity * target, u8 curseClassStatus)
{
  u32 uVar3;
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    switch(entityInfo->curseClassStatus.status) {
        case STATUS_NONE:
        case 4:
            break;
        case STATUS_CURSED:
            if (curseClassStatus != STATUS_CURSED) {
                LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA7BC);
            }
            break;
        case STATUS_SNATCH:
            if (curseClassStatus != STATUS_SNATCH) {
                LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA7DC);
            }
            gDungeon->snatchPokemon = NULL;
            gDungeon->unk17B3C = 0;
            break;
        case STATUS_DECOY:
            entityInfo->curseClassStatus.status = STATUS_NONE;
            uVar3 = sub_806CEBC(target);
            sub_806CCB4(target,uVar3);
            gDungeon->decoyIsActive = FALSE;
            if (curseClassStatus != STATUS_DECOY) {
                SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
                LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA9A0);
            }
            break;
    }
    entityInfo->curseClassStatus.status = STATUS_NONE;
    EntityUpdateStatusSprites(target);
  }
}

void EndLeechSeedClassStatus(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
    switch(entityInfo->leechSeedClassStatus.status)
    {
        case STATUS_NONE:
            break;
        case STATUS_LEECH_SEED:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA79C);
            break;
        case STATUS_DESTINY_BOND:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAA8C);
            break;
    }
    entityInfo->leechSeedClassStatus.status = STATUS_NONE;
    entityInfo->leechSeedClassStatus.unk8 = 0xff;
    EntityUpdateStatusSprites(target);
  }
}

void SendMoveEndMessage(Entity * pokemon, Entity * target)
{
  EntityInfo * entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->sureShotClassStatus.status) {
        case STATUS_NONE:
        case 5:
            break;
        case STATUS_SURE_SHOT:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA8E0);
            break;
        case STATUS_WHIFFER:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA90C);
            break;
        case STATUS_SET_DAMAGE:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA934);
            break;
        case STATUS_FOCUS_ENERGY:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA95C);
            break;
  }
  entityInfo->sureShotClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
}

void SendTransformEndMessage(Entity * pokemon, Entity *target)
{
  bool8 isInvisible;
  EntityInfo *entityInfo;
  u32 uVar3;

  isInvisible = FALSE;
  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->invisibleClassStatus.status) {
        case STATUS_NONE:
        case 4:
            break;
        case STATUS_INVISIBLE:
            isInvisible = TRUE;
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FA9F4);
            break;
        case STATUS_MOBILE:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FABBC);
            break;
        case STATUS_TRANSFORMED:
            entityInfo->apparentID = GetMonsterApparentID(target, entityInfo->id);
            target->axObj.spriteFile = GetSpriteData(entityInfo->apparentID);
            uVar3 = sub_806CEBC(target);
            sub_806CCB4(target,uVar3);
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAB6C);
            break;
  }
  entityInfo->invisibleClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
  if (isInvisible) {
    sub_807EC28(TRUE);
  }
}

void SendEyesightEndMessage(Entity * pokemon,Entity * target)
{
  EntityInfo *entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->blinkerClassStatus.status) {
        case STATUS_NONE:
        case 4:
            break;
        case STATUS_BLINKER:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAA0C);
            break;
        case STATUS_CROSS_EYED:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAA2C);
            break;
        case STATUS_EYEDROPS:
            LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FAA48);
            break;
  }
  entityInfo->blinkerClassStatus.status = STATUS_NONE;
  EntityUpdateStatusSprites(target);
  if (entityInfo->isTeamLeader) {
    DungeonRunFrameActions(0x31);
    sub_8049ED4();
    ShowWholeRevealedDungeonMap();
  }
}

void SendMuzzledEndMessage(Entity * pokemon, Entity * target)
{
  EntityInfo *entityInfo;

  if (!EntityIsValid(target)) {
    return;
  }
  entityInfo = GetEntInfo(target);
  SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
  switch(entityInfo->muzzled.muzzled) {
    case FALSE:
    case 2:
        break;
    case TRUE:
        LogMessageByIdWithPopupCheckUser(target,*gUnknown_80FABC0);
        break;
  }
  entityInfo->muzzled.muzzled = FALSE;
  EntityUpdateStatusSprites(target);
}

bool8 TrySendImmobilizeSleepEndMsg(Entity * pokemon, Entity * target)
{
    EntityInfo *entityInfo = GetEntInfo(target);
    bool32 msg = FALSE;

    if (entityInfo->frozenClassStatus.status == STATUS_PETRIFIED) {
        EndFrozenClassStatus(pokemon, target);
        msg = TRUE;
    }
    if (entityInfo->sleepClassStatus.status == STATUS_SLEEP && entityInfo->sleepClassStatus.turns == 0x7f) {
        EndSleepClassStatus(pokemon,target, FALSE, TRUE);
        msg = TRUE;
    }
    return msg;
}

void WakeUpPokemon(Entity * pokemon)
{
  EntityInfo *entityInfo;

  entityInfo = GetEntInfo(pokemon);
  entityInfo->sleepClassStatus.status = STATUS_NONE;
  entityInfo->sleepClassStatus.turns = 0;
  sub_806A898(pokemon, 1, 1);
  EntityUpdateStatusSprites(pokemon);
}

void SendThawedMessage(Entity *pokemon, Entity *target)
{
  EntityInfo *entityInfo;

  if (EntityIsValid(target)) {
    entityInfo = GetEntInfo(target);
    if (entityInfo->frozenClassStatus.status == STATUS_FROZEN) {
      entityInfo->frozenClassStatus.status = STATUS_NONE;
      entityInfo->frozenClassStatus.turns = 0;
      entityInfo->frozenClassStatus.damageCountdown = 0;
      SubstitutePlaceholderStringTags(gFormatBuffer_Monsters[0],target,0);
      TryDisplayDungeonLoggableMessage3(pokemon,target,*gUnknown_80FA8BC); // $m0 thawed out!
      EntityUpdateStatusSprites(target);
    }
  }
}

void sub_807AA30(void)
{
  bool32 adjacentCheck;
  bool32 forceWakeup;
  u8 room;
  s32 xDiff;
  s32 wildIndex;
  s32 yDiff;
  Entity *teamEntity;
  Entity *wildEntity;
  EntityInfo *entityInfo;
  s32 teamIndex;

  for(wildIndex = 0; wildIndex < DUNGEON_MAX_WILD_POKEMON; wildIndex++)
  {
    wildEntity = gDungeon->wildPokemon[wildIndex];
    if (EntityIsValid(wildEntity) &&
        (entityInfo = GetEntInfo(wildEntity), entityInfo->sleepClassStatus.status == STATUS_SLEEP) &&
        (entityInfo->sleepClassStatus.turns == 0x7F)) {
      adjacentCheck = FALSE;
      forceWakeup = FALSE;
      room = GetEntityRoom(wildEntity);

      for(teamIndex = 0; teamIndex < MAX_TEAM_MEMBERS; teamIndex++)
      {
        teamEntity = gDungeon->teamPokemon[teamIndex];
        if (EntityIsValid(teamEntity) && !HasHeldItem(teamEntity, ITEM_SNEAK_SCARF)) {
          xDiff = teamEntity->pos.x - wildEntity->pos.x;
          if (xDiff < 0) {
            xDiff = -xDiff;
          }
          if (xDiff < 2) {
            yDiff = teamEntity->pos.y- wildEntity->pos.y;
            if (yDiff < 0) {
              yDiff = -yDiff;
            }
            if (yDiff < 2) {
              adjacentCheck = TRUE;
              break;
            }
          }
          if (HasHeldItem(teamEntity, ITEM_RACKET_BAND) && (room == GetEntityRoom(teamEntity)))
            goto _WakeUp;
        }
      }

      if(forceWakeup)
        goto _WakeUp;
      else if(adjacentCheck)
        forceWakeup = TRUE;

      if (forceWakeup) {
_WakeUp:
        WakeUpPokemon(wildEntity);
      }
    }
  }
}

extern s16 sub_803D970(u32);
extern void sub_804178C(u32);

void sub_807AB38(Entity *entity, bool8 forcedMonsterHouse)
{
    u8 monsterHouseRoomId;
    DungeonPos positions[100];
    RoomData *monsterHouseRoomData;
    s32 x, y, count;
    s32 randMonstersCount;

    if (GetEntInfo(entity)->isNotTeamMember)
        return;
    if (!(GetTileAtEntitySafe(entity)->terrainType & TERRAIN_TYPE_IN_MONSTER_HOUSE))
        return;

    if (gDungeon->unk644.monsterHouseTriggered)
        return;
    gDungeon->unk644.monsterHouseTriggered = TRUE;

    monsterHouseRoomId = gDungeon->monsterHouseRoom;
    if (monsterHouseRoomId == CORRIDOR_ROOM)
        return;

    monsterHouseRoomData = &gDungeon->roomData[monsterHouseRoomId];
    count = 0;
    if (forcedMonsterHouse) {
        for (y = entity->pos.y - 4; y <= entity->pos.y + 4; y++) {
            for (x = entity->pos.x - 4; x <= entity->pos.x + 4; x++) {
                Tile *tile = GetTileMut(x, y);
                if (tile->monster == NULL && GetTerrainType(tile) == TERRAIN_TYPE_NORMAL && count < 100) {
                    positions[count].x = x;
                    positions[count].y = y;
                    count++;
                }
            }
        }
    }
    else {
        s32 xStart, xEnd;
        s32 yStart, yEnd;

        xStart = max(entity->pos.x - 4, monsterHouseRoomData->bottomRightCornerX);
        xEnd = min(entity->pos.x + 5, monsterHouseRoomData->topLeftCornerX);

        yStart = max(entity->pos.y - 4, monsterHouseRoomData->bottomRightCornerY);
        yEnd = min(entity->pos.y + 5, monsterHouseRoomData->topLeftCornerY);
        for (y = yStart; y < yEnd; y++) {
            for (x = xStart; x < xEnd; x++) {
                Tile *tile = GetTileMut(x, y);
                if (tile->monster == NULL && GetTerrainType(tile) == TERRAIN_TYPE_NORMAL && tile->terrainType & TERRAIN_TYPE_IN_MONSTER_HOUSE && count < 100) {
                    positions[count].x = x;
                    positions[count].y = y;
                    count++;
                }
            }
        }
    }

    randMonstersCount = DungeonRandRange(gMonsterHouseMinMons, gMonsterHouseMaxMons);
    if (randMonstersCount >= count)
        randMonstersCount = count;

    for (y = 0; y < randMonstersCount; y++) {
        s32 i, j;
        s32 rndId = DungeonRandInt(count);
        for (i = 0; i < count; i++) {
            if (positions[rndId].x != 0)
                break;

            rndId++;
            if (rndId >= count)
                rndId = 0;
        }

        if (positions[rndId].x == 0) {
            break;
        }
        else
        {
            struct unkStruct_806B7F8 spawnStruct;

            spawnStruct.species = sub_803D970(1);
            spawnStruct.level = 0;
            spawnStruct.unk2 = 0;
            spawnStruct.unk4 = 0;
            spawnStruct.unk10 = 1;
            spawnStruct.pos.x = positions[rndId].x;
            spawnStruct.pos.y = positions[rndId].y;
            if (sub_806AA0C(spawnStruct.species, 1)) {
                Entity *newMonster = sub_806B7F8(&spawnStruct, FALSE);
                if (EntityIsValid(newMonster)) {
                    newMonster->unk1C = IntToF248_2(200);
                    for (j = 0; j < 100; j++) {
                        newMonster->unk1C = s24_8_mul(newMonster->unk1C, IntToF248_2(0.665));
                        if (newMonster->unk1C.raw < IntToF248_2(1).raw) {
                            break;
                        }
                        DungeonRunFrameActions(0x57);
                    }
                    newMonster->unk1C = IntToF248_2(0);
                }
            }
        }

    }

    sub_804178C(1);
}

