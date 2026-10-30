/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020351ac[];
extern u8 func_020351b4[];
extern u8 func_020351bc[];
extern u8 func_020351c4[];
extern u8 func_020351cc[];
extern u8 func_02035324[];
extern u8 func_0203539c[];
extern u8 func_020353b4[];
extern u8 func_020353cc[];
extern u8 func_020353e4[];
extern u8 func_02035400[];
extern u8 func_0203541c[];
extern u8 func_02035438[];
extern u8 func_02035454[];
extern u8 func_0203546c[];
extern u8 func_02035488[];
extern u8 func_020354c8[];
extern u8 func_020354d0[];
extern u8 func_020354d8[];
extern u8 func_020354dc[];
extern u8 func_020354e0[];
extern u8 func_020354e4[];
extern u8 func_020354e8[];
extern u8 func_020354ec[];
extern u8 func_020354f0[];
extern u8 func_020354f4[];
extern u8 func_020354f8[];
extern u8 func_020354fc[];
extern u8 func_02035500[];
extern u8 func_02035504[];
extern u8 func_02035508[];
extern u8 func_0203550c[];
extern u8 func_02035510[];
extern u8 func_02035514[];
extern u8 func_02035518[];
extern u8 func_0203551c[];
extern u8 func_02035520[];
extern u8 func_02035524[];
extern u8 func_02035534[];
extern u8 func_02035544[];
extern u8 func_02035554[];
extern u8 func_02035564[];
extern u8 func_02035574[];
extern u8 func_02035584[];
extern u8 func_020355bc[];
extern u8 func_020355c0[];
extern u8 func_020355c4[];
extern u8 func_02035614[];
extern u8 func_02035634[];
extern u8 func_0203564c[];
extern u8 func_02035664[];
extern u8 func_02035668[];
extern u8 func_0203566c[];
extern u8 func_02035670[];
extern u8 func_02035a80[];
extern u8 func_02035ad8[];
extern u8 func_02035c3c[];
extern u8 func_02035d7c[];
extern u8 func_02035d84[];
extern u8 func_02035d8c[];
extern u8 func_02035d94[];
extern u8 func_02035d9c[];
extern u8 func_02035dac[];
extern u8 func_02035db4[];
extern u8 func_02035e28[];
extern u8 func_02035e40[];
extern u8 func_02035e58[];
extern u8 func_02035e80[];
extern u8 func_02035ea8[];
extern u8 func_02035f0c[];
extern u8 func_02035ff4[];
extern u8 func_02036014[];
extern u8 func_0203601c[];
extern u8 func_0203608c[];
extern u8 func_020360f0[];
extern u8 func_02036154[];
extern u8 func_020361b8[];
extern u8 func_020361bc[];
extern u8 func_02036214[];
extern u8 func_02036234[];
extern u8 func_0203623c[];
extern u8 func_02036244[];
extern u8 func_0203629c[];
extern u8 func_020362bc[];
extern u8 func_02036484[];
extern u8 func_020364a4[];
extern u8 func_02036748[];
extern u8 func_020425d0[];
extern u8 func_020425d4[];
extern u8 func_020425d8[];
extern u8 func_020425dc[];
extern u8 func_020425e0[];
extern u8 func_020425e4[];
extern u8 func_020425e8[];
extern u8 func_020c36c0[];
extern u8 func_020c3710[];
extern u8 func_020c3724[];
extern u8 func_020c372c[];
extern u8 func_020c374c[];
extern u8 func_020c376c[];
extern u8 func_020ca69c[];
extern u8 func_020ca708[];
extern u8 func_020ca73c[];
extern u8 func_020ca774[];
extern u8 func_020ca784[];
extern u8 func_020ca7a8[];
extern u8 func_020ca7d4[];
extern u8 func_020ca7d8[];
extern u8 func_020ca7dc[];
extern u8 func_020ca858[];
extern u8 func_020ca874[];

u32 data_020fbc34[9]  = {(u32) &func_020425e4, (u32) &func_020425e8, (u32) &func_020425e0,
                         (u32) &func_020425dc, (u32) &func_020425d8, (u32) &func_020425d4,
                         (u32) &func_020425d0, 0x00000000,           0x00000000};
u32 data_020fbc58[68] = {(u32) &func_020ca708, (u32) &func_020ca858, (u32) &func_020351ac, (u32) &func_020351b4,
                         (u32) &func_020351bc, (u32) &func_020351c4, (u32) &func_020351cc, (u32) &func_02035584,
                         (u32) &func_02035574, (u32) &func_02035564, (u32) &func_02035554, (u32) &func_02035544,
                         (u32) &func_02035534, (u32) &func_02035524, (u32) &func_02035614, (u32) &func_02035634,
                         (u32) &func_0203564c, (u32) &func_02035520, (u32) &func_0203551c, (u32) &func_02035518,
                         (u32) &func_02035514, (u32) &func_02035510, (u32) &func_020355c0, (u32) &func_0203550c,
                         (u32) &func_02035508, (u32) &func_02035504, (u32) &func_020355bc, (u32) &func_02035500,
                         (u32) &func_020354fc, (u32) &func_020354f8, (u32) &func_020354f4, (u32) &func_02035670,
                         (u32) &func_0203566c, (u32) &func_020ca7d4, (u32) &func_020354f0, (u32) &func_020354ec,
                         (u32) &func_02035664, (u32) &func_020354e8, (u32) &func_020354e4, (u32) &func_020354e0,
                         (u32) &func_020354dc, (u32) &func_020354d8, (u32) &func_020354c8, (u32) &func_020354d0,
                         (u32) &func_02035488, (u32) &func_0203546c, (u32) &func_02035454, (u32) &func_02035438,
                         (u32) &func_0203541c, (u32) &func_02035400, (u32) &func_020353e4, (u32) &func_020353cc,
                         (u32) &func_020353b4, (u32) &func_0203539c, (u32) &func_02035324, (u32) &func_02035a80,
                         (u32) &func_02035ad8, (u32) &func_020355c4, (u32) &func_020ca7dc, (u32) &func_020c3710,
                         (u32) &func_020c36c0, (u32) &func_020c376c, (u32) &func_020c374c, (u32) &func_020c372c,
                         (u32) &func_020c3724, (u32) &func_020ca7d8, 0x00000000,           0x00000000};
u32 data_020fbd68[82] = {(u32) &func_020ca69c, (u32) &func_020ca874,
                         (u32) &func_020351ac, (u32) &func_020351b4,
                         (u32) &func_020351bc, (u32) &func_020351c4,
                         (u32) &func_020351cc, (u32) &func_02035584,
                         (u32) &func_02035574, (u32) &func_02035564,
                         (u32) &func_02035554, (u32) &func_02035544,
                         (u32) &func_02035534, (u32) &func_02035524,
                         (u32) &func_02035db4, (u32) &func_02035e28,
                         (u32) &func_02035e40, (u32) &func_02035520,
                         (u32) &func_0203551c, (u32) &func_020360f0,
                         (u32) &func_02035514, (u32) &func_02036154,
                         (u32) &func_020361b8, (u32) &func_02035ea8,
                         (u32) &func_02035f0c, (u32) &func_02035504,
                         (u32) &func_0203601c, (u32) &func_0203608c,
                         (u32) &func_020354fc, (u32) &func_020354f8,
                         (u32) &func_020354f4, (u32) &func_02035e58,
                         (u32) &func_02035e80, (u32) &func_02035668,
                         (u32) &func_020354f0, (u32) &func_020354ec,
                         (u32) &func_02035664, (u32) &func_020354e8,
                         (u32) &func_020354e4, (u32) &func_020354e0,
                         (u32) &func_020354dc, (u32) &func_020354d8,
                         (u32) &func_020354c8, (u32) &func_020354d0,
                         (u32) &func_02035488, (u32) &func_0203546c,
                         (u32) &func_02035454, (u32) &func_02035438,
                         (u32) &func_0203541c, (u32) &func_02035400,
                         (u32) &func_020353e4, (u32) &func_020353cc,
                         (u32) &func_020353b4, (u32) &func_0203539c,
                         (u32) &func_02035324, (u32) &func_02035a80,
                         (u32) &func_02035ad8, (u32) &func_02035c3c,
                         (u32) &func_020ca7a8, (u32) &func_020ca784,
                         (u32) &func_020ca774, (u32) &func_020ca73c,
                         (u32) &func_0203623c, (u32) &func_02035dac,
                         (u32) &func_02036014, (u32) &func_02035d7c,
                         (u32) &func_02036214, (u32) &func_0203629c,
                         (u32) &func_02035ff4, (u32) &func_02036484,
                         (u32) &func_020362bc, (u32) &func_02035d84,
                         (u32) &func_02036234, (u32) &func_02035d8c,
                         (u32) &func_02036748, (u32) &func_02035d94,
                         (u32) &func_020364a4, (u32) &func_02035d9c,
                         (u32) &func_020361bc, (u32) &func_02036244,
                         0x00000000,           0x00000000};
