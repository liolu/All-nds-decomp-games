/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02007848[];
extern u8 func_0200784c[];
extern u8 func_02007c10[];
extern u8 func_02007c14[];
extern u8 func_020e3f00[];
extern u8 func_020e41ec[];
extern u8 func_020e425c[];
extern u8 func_020e42b0[];
extern u8 func_020e4304[];
extern u8 func_020e4e44[];
extern u8 func_020e739c[];
extern u8 func_020e7494[];
extern u8 func_020e74a8[];
extern u8 func_020e76b4[];
extern u8 func_020e78bc[];
extern u8 func_020e7948[];
extern u8 func_020e7980[];
extern u8 func_020e7994[];
extern u8 func_020e8428[];
extern u8 func_020e842c[];
extern u8 func_020ebd9c[];
extern u8 func_020ebda0[];
extern u8 func_020ee5c8[];
extern u8 func_020ee8a8[];
extern u8 func_020ee8e0[];
extern u8 func_020ee908[];
extern u8 func_020ee9e0[];
extern u8 func_020eea24[];
extern u8 func_020eeaa4[];
extern u8 func_020eead8[];
extern u8 func_020eeaec[];
extern u8 func_020eeca4[];
extern u8 func_020eecb8[];
extern u8 func_020eee40[];
extern u8 func_020eeee0[];
extern u8 func_020eef00[];
extern u8 func_020eef90[];
extern u8 func_020eeff0[];
extern u8 func_020ef02c[];
extern u8 func_020ef074[];
extern u8 func_020ef09c[];
extern u8 func_020ef0d4[];
extern u8 func_020ef0ec[];
extern u8 func_020ef100[];
extern u8 func_020ef104[];
extern u8 func_020ef110[];
extern u8 func_020ef118[];
extern u8 func_020ef120[];
extern u8 func_020ef128[];
extern u8 func_020ef194[];
extern u8 func_020ef1ec[];
extern u8 func_020ef264[];
extern u8 func_020ef280[];
extern u8 func_020ef28c[];
extern u8 func_020ef338[];
extern u8 func_020ef368[];
extern u8 func_020ef380[];

u32 data_0214e538[13] = {(u32) &func_020ee908,
                         (u32) &func_020ee8e0,
                         (u32) &func_020ee5c8,
                         (u32) &func_020ee8a8,
                         0x00000000,
                         0x00000000,
                         (u32) &func_020ebd9c,
                         (u32) &func_020ebda0,
                         0x00000000,
                         0x00000000,
                         0x00000001,
                         0x00000000,
                         0x00000000};
u32 data_0214e56c[17] = {(u32) &func_020eeaa4,
                         (u32) &func_020eeaec,
                         (u32) &func_020ee9e0,
                         0x00000000,
                         0x00000000,
                         (u32) &func_020e8428,
                         (u32) &func_020e842c,
                         0x00000000,
                         0x00000000,
                         (u32) &func_02007c10,
                         (u32) &func_02007c14,
                         0x00000000,
                         0x00000000,
                         (u32) &func_02007848,
                         (u32) &func_0200784c,
                         0x00000000,
                         0x00000000};
u32 data_0214e5b0[25] = {
    (u32) &func_020ef074, (u32) &func_020ef02c, (u32) &func_020e76b4, (u32) &func_020ef118, (u32) &func_020e7980,
    (u32) &func_020e41ec, (u32) &func_020e425c, (u32) &func_020e42b0, (u32) &func_020e4e44, (u32) &func_020eef00,
    (u32) &func_020eef90, (u32) &func_020eeff0, (u32) &func_020e7994, 0x020D02F4,           (u32) &func_020e3f00,
    (u32) &func_020e4304, (u32) &func_020e7948, (u32) &func_020e74a8, (u32) &func_020eee40, (u32) &func_020ef120,
    (u32) &func_020eeee0, (u32) &func_020ef128, 0x0201C7C4,           0x00000000,           0x00000000};
u32 data_0214e614[46] = {(u32) &func_020ef0d4, (u32) &func_020ef09c,
                         (u32) &func_020eeca4, (u32) &func_020eecb8,
                         (u32) &func_020ef110, 0x00000000,
                         0x00000000,           (u32) &func_020ebd9c,
                         (u32) &func_020ebda0, 0x00000000,
                         0x00000000,           0x00000000,
                         0x00000000,           (u32) &func_020ef0ec,
                         0x0201C790,           (u32) &func_020e76b4,
                         (u32) &func_020ef118, (u32) &func_020e7980,
                         (u32) &func_020e41ec, (u32) &func_020e425c,
                         (u32) &func_020e42b0, (u32) &func_020e4e44,
                         (u32) &func_020e739c, (u32) &func_020e7494,
                         (u32) &func_020e78bc, (u32) &func_020e7994,
                         0x020D02F4,           (u32) &func_020e3f00,
                         (u32) &func_020e4304, (u32) &func_020e7948,
                         (u32) &func_020e74a8, (u32) &func_020ef104,
                         (u32) &func_020ef120, 0x00000000,
                         (u32) &func_020ef128, 0x0201C7C4,
                         0x00000000,           0x00000000,
                         (u32) &func_020ef100, (u32) &func_020eead8,
                         (u32) &func_020eea24, 0x00000000,
                         0x0201C57C,           0x00000001,
                         0x00000000,           0x00000000};
u32 data_0214e6cc[48] = {(u32) &func_020ef194, (u32) &func_020ef1ec, (u32) &func_020e76b4, (u32) &func_020ef118,
                         (u32) &func_020e7980, (u32) &func_020e41ec, (u32) &func_020e425c, (u32) &func_020e42b0,
                         (u32) &func_020e4e44, (u32) &func_020ef28c, (u32) &func_020ef338, (u32) &func_020e78bc,
                         (u32) &func_020e7994, 0x020D02F4,           (u32) &func_020e3f00, (u32) &func_020e4304,
                         (u32) &func_020e7948, (u32) &func_020e74a8, (u32) &func_020ef104, (u32) &func_020ef380,
                         (u32) &func_020ef264, (u32) &func_020ef368, (u32) &func_020ef280, 0x00000000,
                         0x00000000,           (u32) &func_020ef0ec, 0x0201C790,           (u32) &func_020e76b4,
                         (u32) &func_020ef118, (u32) &func_020e7980, (u32) &func_020e41ec, (u32) &func_020e425c,
                         (u32) &func_020e42b0, (u32) &func_020e4e44, (u32) &func_020e739c, (u32) &func_020e7494,
                         (u32) &func_020e78bc, (u32) &func_020e7994, 0x020D02F4,           (u32) &func_020e3f00,
                         (u32) &func_020e4304, (u32) &func_020e7948, (u32) &func_020e74a8, (u32) &func_020ef104,
                         (u32) &func_020ef120, 0x00000000,           (u32) &func_020ef128, 0x0201C7C4};
