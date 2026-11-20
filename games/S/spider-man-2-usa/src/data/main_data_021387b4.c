/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_021377d0[];
extern u8 data_021377f4[];
extern u8 data_02137818[];
extern u8 data_0213783c[];
extern u8 data_02137860[];
extern u8 data_02137884[];
extern u8 data_021378a8[];
extern u8 data_021378cc[];
extern u8 data_021378f0[];
extern u8 data_02137914[];
extern u8 data_02137938[];
extern u8 data_0213795c[];
extern u8 data_02137980[];
extern u8 data_021379a4[];
extern u8 data_021379c8[];
extern u8 data_021379ec[];
extern u8 data_02137a10[];
extern u8 data_02137a34[];
extern u8 data_02137a58[];
extern u8 data_02137a7c[];
extern u8 data_02137aa0[];
extern u8 data_02137ac4[];
extern u8 data_02137ae8[];
extern u8 data_02137b0c[];
extern u8 data_02137b30[];
extern u8 data_02137b54[];
extern u8 data_02137b78[];
extern u8 data_02137b9c[];
extern u8 data_02137bc0[];
extern u8 data_02137be4[];
extern u8 data_02137c08[];
extern u8 data_02137c2c[];
extern u8 data_02137c50[];
extern u8 data_02137c74[];
extern u8 data_02137c98[];
extern u8 data_02137cbc[];
extern u8 data_02137ce0[];
extern u8 data_02137d04[];
extern u8 data_02137d28[];
extern u8 data_02137d4c[];
extern u8 data_02137d70[];
extern u8 data_02137d94[];
extern u8 data_02137db8[];
extern u8 data_02137ddc[];
extern u8 data_02137e00[];
extern u8 data_02137e24[];
extern u8 data_02137e48[];
extern u8 data_02137e6c[];
extern u8 data_02137e90[];
extern u8 data_02137eb4[];
extern u8 data_02137ed8[];
extern u8 data_02137efc[];
extern u8 data_02137f20[];
extern u8 data_02137f44[];
extern u8 data_02137f68[];
extern u8 data_02137f8c[];
extern u8 data_02137fb0[];
extern u8 data_02137fd4[];
extern u8 data_02137ff8[];
extern u8 data_0213801c[];
extern u8 data_02138040[];
extern u8 data_02138064[];
extern u8 data_02138088[];
extern u8 data_021380ac[];
extern u8 data_021380d0[];
extern u8 data_021380f4[];
extern u8 data_02138118[];
extern u8 data_0213813c[];
extern u8 data_02138160[];
extern u8 data_02138184[];
extern u8 data_021381a8[];
extern u8 data_021381cc[];
extern u8 data_021381f0[];
extern u8 data_02138214[];
extern u8 data_02138238[];
extern u8 data_0213825c[];
extern u8 data_02138280[];
extern u8 data_021382a4[];
extern u8 data_021382c8[];
extern u8 data_021382ec[];
extern u8 data_02138310[];
extern u8 data_02138334[];
extern u8 data_02138358[];
extern u8 data_0213837c[];
extern u8 data_021383a0[];
extern u8 data_021383c4[];
extern u8 data_021383e8[];
extern u8 data_0213840c[];
extern u8 data_02138430[];
extern u8 data_02138454[];
extern u8 data_02138478[];
extern u8 data_0213849c[];
extern u8 data_021384c0[];
extern u8 data_021384e4[];
extern u8 data_02138508[];
extern u8 data_0213852c[];
extern u8 data_02138550[];
extern u8 data_02138574[];
extern u8 data_02138598[];
extern u8 data_021385bc[];
extern u8 data_021385e0[];
extern u8 data_02138604[];
extern u8 data_02138628[];
extern u8 data_0213864c[];
extern u8 data_02138670[];
extern u8 data_02138694[];
extern u8 data_021386b8[];
extern u8 data_021386dc[];
extern u8 data_02138700[];
extern u8 data_02138724[];
extern u8 data_02138748[];
extern u8 data_0213876c[];
extern u8 data_02138790[];
extern u8 data_02155a80[];

u32 data_021387b4[9]   = {0x0E8FC9A1, 0xE9191A2E,           0x00000000, 0x00000000, 0x0003F060,
                          0x00000000, (u32) &data_02155a80, 0x00000003, 0x00000000};
u32 data_021387d8[114] = {
    (u32) &data_02137db8, (u32) &data_02137884, (u32) &data_021378cc, (u32) &data_021378f0, (u32) &data_02138748,
    (u32) &data_02137914, (u32) &data_02137938, (u32) &data_0213795c, (u32) &data_02137980, (u32) &data_021379a4,
    (u32) &data_021379c8, (u32) &data_021379ec, (u32) &data_02138628, (u32) &data_02137a10, (u32) &data_02137a34,
    (u32) &data_02137a58, (u32) &data_02138598, (u32) &data_02137a7c, (u32) &data_02137aa0, (u32) &data_02137ac4,
    (u32) &data_02138508, (u32) &data_02137ae8, (u32) &data_02137b0c, (u32) &data_02137b30, (u32) &data_02137b54,
    (u32) &data_02137b78, (u32) &data_02137b9c, (u32) &data_02137bc0, (u32) &data_021383e8, (u32) &data_02137be4,
    (u32) &data_02137c08, (u32) &data_02137c2c, (u32) &data_02138358, (u32) &data_02137c50, (u32) &data_02137c74,
    (u32) &data_02137c98, (u32) &data_021382c8, (u32) &data_02137cbc, (u32) &data_02137ce0, (u32) &data_02137d04,
    (u32) &data_02137d28, (u32) &data_02137d4c, (u32) &data_02137d70, (u32) &data_02137d94, (u32) &data_021381a8,
    (u32) &data_02137ddc, (u32) &data_02137e00, (u32) &data_02137e24, (u32) &data_02138118, (u32) &data_02137e48,
    (u32) &data_02137e6c, (u32) &data_02137e90, (u32) &data_02138088, (u32) &data_02137eb4, (u32) &data_02137ed8,
    (u32) &data_02137efc, (u32) &data_02137f20, (u32) &data_02137f44, (u32) &data_02137f68, (u32) &data_02137f8c,
    (u32) &data_02137fb0, (u32) &data_02137fd4, (u32) &data_02137ff8, (u32) &data_0213801c, (u32) &data_02138040,
    (u32) &data_02138064, (u32) &data_021380ac, (u32) &data_021380d0, (u32) &data_021380f4, (u32) &data_0213813c,
    (u32) &data_02138160, (u32) &data_02138184, (u32) &data_021381cc, (u32) &data_021381f0, (u32) &data_02138214,
    (u32) &data_02138238, (u32) &data_0213825c, (u32) &data_02138280, (u32) &data_021382a4, (u32) &data_021382ec,
    (u32) &data_02138310, (u32) &data_02138334, (u32) &data_0213837c, (u32) &data_021383a0, (u32) &data_021383c4,
    (u32) &data_0213840c, (u32) &data_02138430, (u32) &data_02138454, (u32) &data_02138478, (u32) &data_0213849c,
    (u32) &data_021384c0, (u32) &data_021384e4, (u32) &data_0213852c, (u32) &data_02138550, (u32) &data_02138574,
    (u32) &data_021385bc, (u32) &data_021385e0, (u32) &data_02138604, (u32) &data_0213864c, (u32) &data_02138670,
    (u32) &data_02138694, (u32) &data_021386b8, (u32) &data_021386dc, (u32) &data_02138700, (u32) &data_02138724,
    (u32) &data_0213876c, (u32) &data_02138790, (u32) &data_021387b4, (u32) &data_021378a8, (u32) &data_021377d0,
    (u32) &data_021377f4, (u32) &data_02137818, (u32) &data_0213783c, (u32) &data_02137860};
