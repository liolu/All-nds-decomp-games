/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e30c4[];
extern u8 data_020e30d8[];
extern u8 data_020e3110[];
extern u8 data_020e3144[];
extern u8 data_020e314c[];
extern u8 data_020e3154[];
extern u8 data_020e315c[];
extern u8 data_020e3164[];
extern u8 data_020e316c[];
extern u8 data_020e3174[];
extern u8 data_020e318c[];
extern u8 data_020e3198[];
extern u8 data_020e31a4[];
extern u8 data_020e31b0[];
extern u8 data_020e31bc[];
extern u8 data_020e31c8[];
extern u8 data_020e31d4[];
extern u8 data_020e31e0[];
extern u8 data_020e31ec[];
extern u8 data_020e31f8[];
extern u8 data_020e3210[];
extern u8 data_020e321c[];
extern u8 data_020e3228[];
extern u8 data_020e3234[];
extern u8 data_020e324c[];
extern u8 data_020e3258[];
extern u8 data_020e3264[];
extern u8 data_020e3270[];
extern u8 data_020e327c[];
extern u8 data_020e3288[];
extern u8 data_020e3294[];
extern u8 data_020e32a0[];
extern u8 data_020e32ac[];
extern u8 data_020e32b8[];
extern u8 data_020e32c4[];
extern u8 data_020e32d0[];
extern u8 data_020e32dc[];
extern u8 data_020e32e8[];
extern u8 data_020e32f4[];
extern u8 data_020e3300[];
extern u8 data_020e3310[];
extern u8 data_020e3320[];
extern u8 data_020e3330[];
extern u8 data_020e3340[];
extern u8 data_020e3350[];
extern u8 data_020e3360[];
extern u8 data_020e3370[];
extern u8 data_020e3380[];
extern u8 data_020e3390[];
extern u8 data_020e33a0[];
extern u8 data_020e33b0[];
extern u8 data_020e33c0[];
extern u8 data_020e33d0[];
extern u8 data_020e33e0[];
extern u8 data_020e33f0[];
extern u8 data_020e3400[];
extern u8 data_020e3410[];
extern u8 data_020e3420[];
extern u8 data_020e3430[];
extern u8 data_020e3440[];
extern u8 data_020e3450[];
extern u8 data_020e3460[];
extern u8 data_020e3470[];
extern u8 data_020e3480[];
extern u8 data_020e3490[];
extern u8 data_020e34a4[];
extern u8 data_020e34b8[];
extern u8 data_020e34cc[];
extern u8 data_020e34e0[];
extern u8 data_020e34f4[];
extern u8 data_020e3508[];
extern u8 data_020e351c[];
extern u8 data_020e3544[];
extern u8 data_020e3558[];
extern u8 data_020e356c[];

u32 data_020e35c0[24]  = {0x00000001, (u32) &data_020e3198, 0x00000002, (u32) &data_020e3340, 0x00000003, (u32) &data_020e31ec,
                          0x00000004, (u32) &data_020e32dc, 0x00000005, (u32) &data_020e31a4, 0x00000006, (u32) &data_020e31d4,
                          0x00000007, (u32) &data_020e3420, 0x00000008, (u32) &data_020e34b8, 0x00000009, (u32) &data_020e3154,
                          0x0000000A, (u32) &data_020e316c, 0x0000000B, (u32) &data_020e314c, 0xFFFFFFFF, 0x00000000};
u32 data_020e3620[26]  = {0x00000000, (u32) &data_020e34cc,
                          0x00000001, (u32) &data_020e3450,
                          0x00000002, (u32) &data_020e3320,
                          0x00000004, (u32) &data_020e33d0,
                          0x00000003, (u32) &data_020e32d0,
                          0x00000005, (u32) &data_020e356c,
                          0x00000006, (u32) &data_020e3470,
                          0x00000007, (u32) &data_020e3480,
                          0x00000008, (u32) &data_020e31b0,
                          0x00000009, (u32) &data_020e324c,
                          0x0000000A, (u32) &data_020e3350,
                          0x0000000B, (u32) &data_020e3360,
                          0xFFFFFFFF, 0x00000000};
u32 data_020e3688[200] = {
    (u32) &data_020e315c, 0x00000000,           0x00000009,           0x00000000,           (u32) &data_020e318c,
    0x00000008,           0x00000001,           0x00000000,           (u32) &data_020e31c8, 0x00000004,
    0x00000001,           0x00000000,           (u32) &data_020e327c, 0x0000000C,           0x00000001,
    0x00000000,           (u32) &data_020e31e0, 0x00000010,           0x00000001,           0x00000000,
    (u32) &data_020e3370, 0x00000014,           0x00000008,           (u32) &data_020e3620, (u32) &data_020e32ac,
    0x00000018,           0x00000004,           (u32) &data_020e3110, (u32) &data_020e3144, 0x0000001C,
    0x00000003,           0x00000000,           (u32) &data_020e33f0, 0x00000024,           0x00000007,
    0x00000000,           (u32) &data_020e3234, 0x00000020,           0x00000003,           0x00000000,
    (u32) &data_020e3508, 0x0000002C,           0x00000007,           0x00000000,           (u32) &data_020e31f8,
    0x00000034,           0x00000007,           0x00000000,           (u32) &data_020e3400, 0x0000003C,
    0x00000007,           0x00000000,           (u32) &data_020e3410, 0x00000044,           0x00000007,
    0x00000000,           (u32) &data_020e34a4, 0x0000004C,           0x00000007,           0x00000000,
    (u32) &data_020e33a0, 0x00000054,           0x00000007,           0x00000000,           (u32) &data_020e3430,
    0x0000005C,           0x00000007,           0x00000000,           (u32) &data_020e3440, 0x00000064,
    0x00000007,           0x00000000,           (u32) &data_020e32b8, 0x0000006C,           0x00000007,
    0x00000000,           (u32) &data_020e32c4, 0x00000074,           0x00000007,           0x00000000,
    (u32) &data_020e32f4, 0x0000008C,           0x00000007,           0x00000000,           (u32) &data_020e3310,
    0x0000007C,           0x00000007,           0x00000000,           (u32) &data_020e3330, 0x00000084,
    0x00000007,           0x00000000,           (u32) &data_020e34e0, 0x00000094,           0x00000007,
    0x00000000,           (u32) &data_020e321c, 0x000000AC,           0x00000007,           0x00000000,
    (u32) &data_020e32a0, 0x000000B4,           0x00000007,           0x00000000,           (u32) &data_020e3258,
    0x000000BC,           0x00000007,           0x00000000,           (u32) &data_020e32e8, 0x000000C4,
    0x00000007,           0x00000000,           (u32) &data_020e3490, 0x000000CC,           0x00000007,
    0x00000000,           (u32) &data_020e3264, 0x0000009C,           0x00000007,           0x00000000,
    (u32) &data_020e3270, 0x000000A4,           0x00000007,           0x00000000,           (u32) &data_020e3164,
    0x000000D4,           0x00000006,           (u32) &data_020e30d8, (u32) &data_020e3288, 0x000000DC,
    0x00000006,           (u32) &data_020e30d8, (u32) &data_020e3294, 0x000000E4,           0x00000007,
    0x00000000,           (u32) &data_020e3380, 0x000000EC,           0x00000007,           0x00000000,
    (u32) &data_020e3300, 0x000000F4,           0x00000007,           0x00000000,           (u32) &data_020e3390,
    0x000000FC,           0x00000007,           0x00000000,           (u32) &data_020e3558, 0x00000104,
    0x00000007,           0x00000000,           (u32) &data_020e351c, 0x0000010C,           0x00000007,
    0x00000000,           (u32) &data_020e3544, 0x00000114,           0x00000007,           0x00000000,
    (u32) &data_020e33c0, 0x0000011C,           0x00000007,           0x00000000,           (u32) &data_020e3460,
    0x00000124,           0x00000007,           0x00000000,           (u32) &data_020e34f4, 0x0000012C,
    0x00000007,           0x00000000,           (u32) &data_020e33e0, 0x00000134,           0x00000007,
    0x00000000,           (u32) &data_020e3174, 0x0000013C,           0x00000007,           0x00000000,
    (u32) &data_020e3228, 0x00000144,           0x00000007,           0x00000000,           (u32) &data_020e31bc,
    0x0000014C,           0x00000007,           0x00000000,           (u32) &data_020e3210, 0x00000154,
    0x00000007,           0x00000000,           (u32) &data_020e33b0, 0x0000015C,           0x00000007,
    0x00000000,           (u32) &data_020e30c4, 0x00000000,           0x00000000,           0x00000000};
