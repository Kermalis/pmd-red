#include "global.h"
#include "structs/axdata.h"

extern void sub_80A68A0(u32);
extern void sub_80A7094(axPokemon *, u32, u32, u32);
extern void sub_80A7310(axPokemon *, u32, u32, u32);
extern void ResetCurrentScriptFile();

static EWRAM_DATA s16 sUnknown_2039DE0 = {0};

extern const struct GroundScriptHeader gNullGroundScript;
extern const struct GroundScriptHeader *gMapScriptTable[]; // 811E2F8

void sub_80A7714(u32 a0)
{
    sub_80A68A0(a0);
}

void sub_80A7720(axPokemon *a0, u32 a1, u32 a2)
{
    sub_80A7094(a0, 0, a1, a2);
    sub_80A7310(a0, a1, 0, a2);
}

void sub_80A7744(void)
{
    sUnknown_2039DE0 = -1;
}

void sub_80A7754(void)
{
    sUnknown_2039DE0 = -1;
}

void SetCurrentScriptFile(s16 a0)
{
    s32 temp = a0;

    ResetCurrentScriptFile();

    if (temp != -1)
        sUnknown_2039DE0 = temp;
}

void ResetCurrentScriptFile(void)
{
    if (sUnknown_2039DE0 != -1)
        sUnknown_2039DE0 = -1;
}

bool8 ChangeScriptFile(s16 a0)
{
    s32 temp;
    s32 temp2;
    temp = a0;
    temp2 = temp;
    if (sUnknown_2039DE0 != temp) {
        if (temp < 0)
            ResetCurrentScriptFile();
        else
            SetCurrentScriptFile(temp2);
        return TRUE;
    }
    return FALSE;
}

const struct GroundScriptHeader *GetGroundScript(s16 a0)
{
    if (a0 != -1)
        return gMapScriptTable[a0];
    else
        return &gNullGroundScript;
}
