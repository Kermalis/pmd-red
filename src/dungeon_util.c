#include "global.h"
#include "structs/str_dungeon.h"
#include "structs/str_traps.h"
#include "code_800F958.h"
#include "code_8041AD0.h"
#include "code_8069E0C.h"
#include "code_807E5AC.h"
#include "dungeon_items.h"
#include "dungeon_map_access.h"
#include "dungeon_util.h"

extern u8 gUnknown_202EE70[MAX_TEAM_BODY_SIZE];
extern u8 gUnknown_202EE76[DUNGEON_MAX_WILD_POKEMON_BODY_SIZE];

const DungeonPos gAdjacentTileOffsets[] = {
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
    {-1, -1},
    {-1, 0},
    {-1, 1}
};

bool8 EntityIsValid(Entity *entity)
{
    if (!entity)
    {
        return FALSE;
    }
    return entity->type != ENTITY_NOTHING;
}

u32 GetEntityType(Entity *entity)
{
    return entity->type;
}

u8 GetEntityRoom(Entity *entity)
{
    return entity->room;
}

Trap* GetTrapData(Entity *entity)
{
    return entity->axObj.info.trap;
}

Item* GetItemData(Entity *entity)
{
    return entity->axObj.info.item;
}

Trap* GetTrapData_1(Entity *entity)
{
    return entity->axObj.info.trap;
}

Item* GetItemData_1(Entity *entity)
{
    return entity->axObj.info.item;
}

const Tile *GetTileAtEntity(Entity *entity)
{
    return GetTile(entity->pos.x, entity->pos.y);
}

Tile *GetTileAtEntitySafe(Entity *entity)
{
    return GetTileMut(entity->pos.x, entity->pos.y);
}

void sub_804513C(void)
{
  s32 index;

  for(index = 0; index < MAX_TEAM_MEMBERS; index++)
  {
      gDungeon->teamPokemon[index] = &gDungeon->teamPokemonEntities[index];
      gDungeon->teamPokemon[index]->type = ENTITY_NOTHING;
  }

  for(index = 0; index < MAX_TEAM_BODY_SIZE; index++)
  {
      gUnknown_202EE70[index] = 0;
  }

  for(index = 0; index < DUNGEON_MAX_WILD_POKEMON; index++)
  {
      gDungeon->wildPokemon[index] = &gDungeon->wildPokemonEntities[index];
      gDungeon->wildPokemon[index]->type = ENTITY_NOTHING;
  }

  for(index = 0; index < DUNGEON_MAX_WILD_POKEMON_BODY_SIZE; index++)
  {
      gUnknown_202EE76[index] = 0;
  }

  for(index = 0; index < DUNGEON_MAX_POKEMON; index++)
  {
      gDungeon->activePokemon[index] = NULL;
  }

  for (index = 0; index < DUNGEON_MAX_ITEMS; index++)
  {
      gDungeon->items[index] = &gDungeon->itemEntities[index];
      gDungeon->items[index]->type = ENTITY_NOTHING;
  }

  for(index = 0; index < DUNGEON_MAX_TRAPS; index++)
  {
      gDungeon->traps[index] = &gDungeon->trapEntites[index];
      gDungeon->traps[index]->type = ENTITY_NOTHING;
  }
}

void sub_804522C(void) {
    s32 index;
    Entity *entity;
    Entity *entity2;
    EntityInfo *info;
    u32 statusSprites;
    bool8 crossEyed;

    crossEyed = gDungeon->unk181e8.hallucinating;
    if (gDungeon->unk181e8.blinded)
    {
        for(index = 0; index < DUNGEON_MAX_POKEMON; index++)
        {
            entity = gDungeon->activePokemon[index];
            if(EntityIsValid(entity))
            {
                if(entity == gDungeon->unk181e8.cameraTarget)
                {
                    sub_806C51C(entity);
                }
                else
                {
                    info = GetEntInfo(entity);
                    statusSprites = EntityGetStatusSprites(entity);
                    UpdateDungeonPokemonSprite(info->unk98, info->apparentID, statusSprites, FALSE);
                }
            }
        }
    }
    else
    {
        for(index = 0; index < MAX_TEAM_MEMBERS; index++)
        {
            entity2 = gDungeon->teamPokemon[index];
            if(EntityIsValid(entity2))
            {
                sub_806C51C(entity2);
            }
        }
        for(index = 0; index < DUNGEON_MAX_WILD_POKEMON; index++)
        {
            entity2 = gDungeon->wildPokemon[index];
            if(EntityIsValid(entity2))
            {
                sub_806C51C(entity2);
            }
        }

        for(index = 0; index < gDungeon->numItems; index++)
        {
            sub_80462AC(gDungeon->items[index], crossEyed, 1, 0xFF, 0);
        }

        if(crossEyed)
            sub_807FA9C();
    }
}

void sub_804535C(Entity *entity, PixelPos *pos)
{
  if (pos != NULL) {
    entity->pixelPos.x = pos->x;
    entity->pixelPos.y = pos->y;
  }
  else {
    entity->pixelPos.x = X_POS_TO_PIXELPOS(entity->pos.x);
    entity->pixelPos.y = Y_POS_TO_PIXELPOS(entity->pos.y);
  }
}

void SetEntityPixelPos(Entity *entity, s32 x, s32 y)
{
    entity->pixelPos.x = x;
    entity->pixelPos.y = y;
}

void IncreaseEntityPixelPos(Entity *entity, s32 x, s32 y)
{
    entity->pixelPos.x += x;
    entity->pixelPos.y += y;
}

