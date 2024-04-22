#include "global.h"
#include "battle_anim.h"
#include "item_menu_icons.h"
#include "sprite.h"
#include "random.h"
#include "gpu_regs.h"
#include "item.h"
#include "item_icon.h"
#include "sound.h"
#include "menu.h"
#include "malloc.h"
#include "util.h"
#include "graphics.h"
#include "battle_scripts.h"
#include "battle_controllers.h"
#include "constants/moves.h"
#include "constants/hold_effects.h"

const struct SpriteTemplate gShadowSneakImpactSpriteTemplate = 
{
    .tileTag = ANIM_TAG_IMPACT,
    .paletteTag = ANIM_TAG_HANDS_AND_FEET,
    .oam = &gOamData_AffineNormal_ObjBlend_32x32,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gAffineAnims_IceCrystalHit,
    .callback = AnimIceEffectParticle
};

//fairy wind
const struct SpriteTemplate gFairyWindCloudTemplate =
{
    .tileTag = ANIM_TAG_PINK_CLOUD,
    .paletteTag = ANIM_TAG_PINK_CLOUD,
    .oam = &gOamData_AffineNormal_ObjNormal_32x32,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gSwiftStarAffineAnimTable,
    .callback = AnimTranslateLinearSingleSineWave
};

//Creates purple flames that surround the target.
//No args.
void AnimTask_PurpleFlamesOnTarget(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    task->data[0] = 0;
    task->data[1] = 16;
    task->data[9] = GetBattlerSpriteCoord(gBattleAnimTarget, BATTLER_COORD_X_2);
    task->data[10] = GetBattlerYCoordWithElevation(gBattleAnimTarget);
    task->data[11] = (GetBattlerSpriteCoordAttr(gBattleAnimTarget, BATTLER_COORD_ATTR_WIDTH) / 2) + 8;
    task->data[7] = 0;
    task->data[5] = GetBattlerSpriteBGPriority(gBattleAnimTarget);
    task->data[6] = GetBattlerSpriteSubpriority(gBattleAnimTarget) - 2;
    task->data[3] = 0;
    task->data[4] = 16;
    SetGpuReg(REG_OFFSET_BLDCNT, (BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL));
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 0x10));
    task->data[8] = 0;
    task->func = AnimTask_GrudgeFlames_Step;
}

void InitSpritePosToAnimTargetsCentre(struct Sprite *sprite, bool32 respectMonPicOffsets)
{
    if (!respectMonPicOffsets)
    {
        sprite->x = (GetBattlerSpriteCoord2(gBattleAnimTarget, BATTLER_COORD_X)
                       +  GetBattlerSpriteCoord2(BATTLE_PARTNER(gBattleAnimTarget), BATTLER_COORD_X)) / 2;
        sprite->y = (GetBattlerSpriteCoord2(gBattleAnimTarget, BATTLER_COORD_Y)
                       +  GetBattlerSpriteCoord2(BATTLE_PARTNER(gBattleAnimTarget), BATTLER_COORD_Y)) / 2;
    }

    SetAnimSpriteInitialXOffset(sprite, gBattleAnimArgs[0]);
    sprite->y += gBattleAnimArgs[1];
}
