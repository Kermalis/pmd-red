#include "global.h"
#include "code_800E9E4.h"
#include "code_803E46C.h"
#include "code_803E668.h"
#include "code_806CD90.h"
#include "code_80869E4.h"
#include "constants/direction.h"
#include "dungeon_util.h"
#include "dungeon_util_1.h"
#include "random.h"
#include "structs/str_dungeon.h"

// This file may originally be merged with code_8086A3C.c and code_8057824_1.c

// ???
extern u32 gDungeonBrightness;

EWRAM_DATA static unkStruct_202F3D0 gUnknown_202F3D0 = {0};

// data_8107010.s
extern u32 gUnknown_8107314[];

s8 sub_8002984(s8, u8);
extern void BgColorCallNullsub4(void);
extern void SetDungeonBGColorRGB(u32, u32, u32, u32, u32);
extern void PlaySoundEffect(u32);


extern void sub_8085EB0(void);
extern void sub_803E748(void);
extern s32 GetCameraXPos(void);
extern s32 GetCameraYPos(void);
extern void sub_803F878(u32, u32);
extern void sub_8086A54(Entity *);
extern void sub_8086A3C(Entity *);
extern void PlaySoundEffect(u32);
extern void sub_80861F8(u32, Entity *, u32);
extern u32 sub_8002A70(u32, s32, u8);

void SpriteShockEffect(Entity *entity)
{
    PlaySoundEffect(464);
    sub_80861F8(323, entity, 0);
}

static void sub_80862DC(Entity *entity)
{
    PixelPos pos;
    pos.x = entity->pixelPos.x;
    pos.y = entity->pixelPos.y + 0x3800;

    sub_804535C(entity, &pos);
    sub_806CDD4(entity, 0, DIRECTION_NORTH);
    sub_8086A54(entity);
}

static void sub_8086310(Entity *entity)
{
    PixelPos pos;
    pos.x = entity->pixelPos.x;
    pos.y = entity->pixelPos.y + 0x9000;

    sub_804535C(entity, &pos);
    sub_806CE68(entity, DIRECTION_SOUTH);
    sub_8086A3C(entity);
    entity->isVisible = 0;
}

static void sub_8086348(Entity *entity)
{
    PixelPos pos;
    pos.x = entity->pixelPos.x + 0x7800;
    pos.y = entity->pixelPos.y - 0x2000;

    sub_804535C(entity, &pos);
    sub_806CDD4(entity, 0, DIRECTION_WEST);
    sub_8086A54(entity);
}

static void sub_8086384(Entity *entity)
{
    PixelPos pos;
    pos.x = entity->pixelPos.x + 0x7800;
    pos.y = entity->pixelPos.y;

    sub_804535C(entity, &pos);
    sub_806CDD4(entity, 0, DIRECTION_WEST);
    sub_8086A54(entity);
}

static void sub_80863B8(Entity *entity)
{
    sub_806CDD4(entity, 0, DIRECTION_NORTH);
}

static void sub_80863C8(Entity *entity)
{
    sub_806CDD4(entity, 0, DIRECTION_SOUTH);
}

static void sub_80863D8(Entity *entity)
{
    sub_806CDD4(entity, 0, DIRECTION_WEST);
}

static void sub_80863E8(Entity *entity)
{
    sub_806CDD4(entity, 6, DIRECTION_NORTH);
}

static void sub_80863F8(Entity *entity)
{
    sub_806CE68(entity, DIRECTION_NORTH);
}

static void sub_8086404(Entity *entity)
{
    sub_806CE68(entity, DIRECTION_WEST);
}

static void sub_8086410(Entity *entity)
{
    IncreaseEntityPixelPos(entity, 0, -0x100);
}

static void sub_8086424(Entity *entity)
{
    IncreaseEntityPixelPos(entity, 0, 0x100);
}

static void sub_8086434(Entity *entity)
{
    IncreaseEntityPixelPos(entity, -0x100, 0);
}

void sub_8086448(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_80862DC);

    for (i = 0; i < 56; i++) {
        XPos = GetCameraXPos();
        YPos = GetCameraYPos();
        YPos += 0x100;
        sub_803F878(XPos, YPos);
        sub_80855E4(sub_8086410);
        DungeonRunFrameActions(0x46);
    }

    sub_80855E4(sub_80863F8);
}

static void sub_8086494(void)
{
    s32 i;

    sub_8085930(DIRECTION_NORTHEAST);
    sub_803E708(4, 70);

    sub_8085930(DIRECTION_EAST);
    sub_803E708(4, 70);

    sub_8085930(DIRECTION_SOUTHEAST);
    sub_803E708(4, 70);

    sub_8085930(DIRECTION_SOUTH);
    sub_803E708(4, 70);

    sub_80855E4(sub_80863C8);

    for (i = 0; i < 144; i++) {
        sub_80855E4(sub_8086424);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_8086310);
}

void sub_8086500(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_8086348);

    for (i = 0; i < 72; i++) {
        XPos = GetCameraXPos();
        XPos += 0x100;
        YPos = GetCameraYPos();
        sub_803F878(XPos, YPos);
        sub_80855E4(sub_8086434);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_8086404);
}

void sub_808654C(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_8086384);

    for (i = 0; i < 120; i++) {
        XPos = GetCameraXPos();
        XPos += 0x100;
        YPos = GetCameraYPos();
        sub_803F878(XPos, YPos);
        sub_80855E4(sub_8086434);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_8086404);
}

void sub_8086598(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_80863B8);

    for (i = 0; i < 24; i++) {
        XPos = GetCameraXPos();
        YPos = GetCameraYPos();
        sub_803F878(XPos, YPos - 0x100);
        sub_80855E4(sub_8086410);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_80863F8);
}

void sub_80865E8(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_80863E8);

    for (i = 0; i < 12; i++) {
        XPos = GetCameraXPos();
        YPos = GetCameraYPos();
        sub_803F878(XPos, YPos + 0x200);
        sub_80855E4(sub_8086424);
        sub_80855E4(sub_8086424);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_80863F8);
}

void sub_808663C(void)
{
    s32 i;
    u32 XPos;
    u32 YPos;

    sub_80855E4(sub_80863E8);

    for (i = 0; i < 16; i++) {
        XPos = GetCameraXPos();
        YPos = GetCameraYPos();
        sub_803F878(XPos, YPos + 0x200);
        sub_80855E4(sub_8086424);
        sub_80855E4(sub_8086424);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_80863F8);
}

void sub_8086690(void)
{
    s32 i;

    sub_80855E4(sub_80863D8);

    for (i = 0; i < 48; i++) {
        sub_80855E4(sub_8086434);
        DungeonRunFrameActions(70);
    }

    sub_80855E4(sub_8086404);
}

void sub_80866C4(const struct DungeonDialogueStruct *dialogue)
{
    SpriteLookAroundEffect(xxx_call_GetLeader());
    sub_803E708(10, 70);
    DisplayDungeonDialogue(dialogue);
    sub_803E708(10, 70);
    sub_8086494();
    gDungeon->unk2 = 1;
}

UNUSED static void sub_80866FC(void)
{
    s32 i;

    for (i = 0; i >= -250; i -= 10) {
        SetDungeonBGColorRGB(i, i, i, 1, 0);
        DungeonRunFrameActions(70);
    }
}

UNUSED static void sub_808627C(void)
{
    sub_803E748();
}

void sub_8086738(void)
{
    s32 i;

    for (i = 0; i < 250; i += 10) {
        SetDungeonBGColorRGB(i, i, i, 1, 0);
        DungeonRunFrameActions(70);
    }
}

void sub_8086764(void)
{
    s32 i;

    for (i = 250; i >= 0; i -= 5) {
        SetDungeonBGColorRGB(i, i, i, 1, 0);
        DungeonRunFrameActions(70);
    }

    sub_8085EB0();
}

void sub_8086794(void)
{
    s32 i;

    gDungeonBrightness = 0;

    for (i = 0; i < 200; i++) {
        SetDungeonBGColorRGB(0, 0, 0, 1, 0);
        BgColorCallNullsub4();
        DungeonRunFrameActions(70);

        if ((i & 3) == 0) {
            gDungeonBrightness++;
            if (gDungeonBrightness == 31)
                break;
        }
    }

    DungeonRunFrameActions(70);
    gDungeon->unk7 = 0;
}

void sub_80867F4(void)
{
    gUnknown_202F3D0.unk0 = 0;
    gUnknown_202F3D0.unk1 = 0;
    gUnknown_202F3D0.unk2 = 0;
    gUnknown_202F3D0.unk3 = 0;
    gUnknown_202F3D0.unk4 = 0;
    gUnknown_202F3D0.unk5 = 0;
}

void sub_808680C(void)
{
    gUnknown_202F3D0.unk0 = 1;
    if (gUnknown_202F3D0.unk3 != 0)
        PlaySoundEffect(505);
}

void sub_808682C(void)
{
    gUnknown_202F3D0.unk0 = 0;
}

void sub_8086838(u8 entity, u8 r1, u8 r2)
{
    gUnknown_202F3D0.unk1 = entity;
    gUnknown_202F3D0.unk2 = r1;
    gUnknown_202F3D0.unk3 = r2;
}

void sub_8086848(u8 entity, u8 r1)
{
    gUnknown_202F3D0.unk4 = entity;
    gUnknown_202F3D0.unk5 = r1;
}

void sub_8086854(void)
{
    if (gUnknown_202F3D0.unk0) {
        if (gUnknown_202F3D0.unk4 == 0) {
            if (gUnknown_202F3D0.unk1) {
                gUnknown_202F3D0.unk4 = 80;
                gUnknown_202F3D0.unk5 = 16;
            }
            else {
                gUnknown_202F3D0.unk4 = RandInt(6) + 2;
                gUnknown_202F3D0.unk5 = RandInt(6) + 2;
            }

            if (gUnknown_202F3D0.unk3 != 0)
                PlaySoundEffect(505);
        }
        else
            gUnknown_202F3D0.unk4--;

        if (gUnknown_202F3D0.unk5 != 0)
            gUnknown_202F3D0.unk5--;

        gDungeon->unk181e8.unk181FC = gUnknown_8107314[gUnknown_202F3D0.unk5];
    }
    else
        gDungeon->unk181e8.unk181FC = 0;
}

void sub_80868F4(Entity *entity)
{
    GetEntInfo(entity)->unk15C = 1;
    GetEntInfo(entity)->unk15D = 1;
}

void sub_8086910(Entity *entity)
{
    GetEntInfo(entity)->unk15C = 0;
    GetEntInfo(entity)->unk15D = 0;
}

void sub_808692C(void)
{
    sub_80859F0(DIRECTION_NORTHWEST);
    sub_803E708(4, 70);

    sub_80859F0(DIRECTION_WEST);
    sub_803E708(4, 70);

    sub_80859F0(DIRECTION_SOUTHWEST);
    sub_803E708(4, 70);

    sub_80859F0(DIRECTION_SOUTH);
    sub_803E708(4, 70);
}

void SpriteLookAroundEffect(Entity *entity)
{
    s8 r4;
    s8 r3;

    r4 = sub_8002984(GetEntInfo(entity)->action.direction, 4);

    sub_80869E4(entity, 4, 2, r4);

    sub_803E708(15, 70);

    r4 = sub_8002984(r4, 5);

    sub_80869E4(entity, 4, 1, r4);

    sub_803E708(15, 70);

    r3 = sub_8002984(r4, 4);

    sub_80869E4(entity, 4, 2, r3);

    sub_803E708(15, 70);
}

void sub_80869E4(struct Entity *entity, s32 a1, u8 a2, s32 _someDirection)
{
    s32 someDirection = (s8) _someDirection;
    struct EntityInfo *info = GetEntInfo(entity);
    s32 direction = (s8) info->action.direction;

    while (direction != someDirection) {
        direction = (s8) sub_8002A70(direction, someDirection, a2);
        info->action.direction = direction;
        info->action.direction &= DIRECTION_MASK;
        sub_806CE68(entity, info->action.direction);
        sub_803E708(a1, 70);
    }
}

