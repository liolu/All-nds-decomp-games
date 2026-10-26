/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020c4a78[];
extern u8 data_020c5108[];
extern u8 data_020cf400[];
extern u8 data_020d08c8[];
extern u8 data_020d58d8[];
extern u8 data_020d5be8[];
extern u8 data_020d6ed4[];
extern u8 data_020d70e8[];
extern u8 data_020d7254[];
extern u8 data_020d72a8[];
extern u8 data_020d72c4[];
extern u8 data_020d7388[];
extern u8 data_020d73a4[];
extern u8 data_020d73c0[];
extern u8 data_020d73f8[];
extern u8 data_020d7414[];
extern u8 data_020d744c[];
extern u8 data_020d7468[];
extern u8 data_020d74d8[];
extern u8 data_020d74f4[];
extern u8 data_020d752c[];
extern u8 data_020d75b8[];
extern u8 data_020d75d4[];
extern u8 data_020d760c[];
extern u8 data_020d76d0[];
extern u8 data_020d7708[];
extern u8 data_020d7740[];
extern u8 data_020d7778[];
extern u8 data_020d7804[];
extern u8 data_020d783c[];
extern u8 data_020d7858[];
extern u8 data_020d78c8[];
extern u8 data_020d7938[];
extern u8 data_020d7970[];
extern u8 data_020d79e0[];
extern u8 data_020d7aa4[];
extern u8 data_020d7ac0[];
extern u8 data_020d7b14[];
extern u8 data_020d7b4c[];
extern u8 data_020d7ba0[];
extern u8 data_020d7bd8[];
extern u8 data_020d7c10[];
extern u8 data_020d7c48[];
extern u8 data_020d7c64[];
extern u8 data_020d7c9c[];
extern u8 data_020d7cb8[];
extern u8 data_020d7cf0[];
extern u8 data_020d7d28[];
extern u8 data_020dd7b8[];
extern u8 data_020e0c00[];
extern u8 data_ov309_022b006c[];

u32 data_0212ad38[200] = {
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d70e8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7254,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d72a8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d72c4,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020cf400, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7388,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d73a4, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d73c0,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020dd7b8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d73f8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7414, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d744c,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7468, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d74d8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d74f4, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d752c,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d58d8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d75b8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d75d4, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d760c,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020c4a78, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d76d0,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7708, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7740,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7778, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020c5108,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7804, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d783c,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7858, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d5be8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d78c8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7938,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7970, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d79e0,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d6ed4, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7aa4,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7ac0, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7b14,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7b4c, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d08c8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7ba0, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7bd8,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7c10, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7c48,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7c64, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7c9c,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7cb8, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7cf0,
    0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020d7d28, 0xFFFFFFFF, 0x00100010, 0x00000000, (u32) &data_020e0c00};
u32 data_0212b058[201] = {0x00010001,
                          0x00000000,
                          0x0150C179,
                          0x0150C179,
                          0x01190113,
                          0xC1360118,
                          0x010500EA,
                          0x01020102,
                          0x012F0140,
                          0x0105011F,
                          0x00FF00F9,
                          0x00F200EA,
                          0x014000A4,
                          0x011F012F,
                          0x00EAC136,
                          0x00F10105,
                          0x00F00116,
                          0x00F70100,
                          0x00F700FF,
                          0x00EC010B,
                          0x00F40100,
                          0x01010102,
                          0xC17B0118,
                          0x014700B6,
                          0x00F8C13D,
                          0xFFFF00A5,
                          0x00430000,
                          0x006E0071,
                          0x001F026F,
                          0x006E0061,
                          0x00640077,
                          0x001F0072,
                          0x006D006E,
                          0x006E0073,
                          0x0060001F,
                          0x0072001F,
                          0x00600067,
                          0x0278006A,
                          0x026F001F,
                          0x0060006B,
                          0x00650073,
                          0x0071006E,
                          (u32) &data_ov309_022b006c,
                          0x0061FFFF,
                          0x00730074,
                          0x006A001F,
                          0x00640064,
                          0x001F026F,
                          0x00730068,
                          0x0065001F,
                          0x006E0071,
                          0x001F006C,
                          0x00680073,
                          0x026F026F,
                          0x006D0068,
                          0x001F0266,
                          0x0075006E,
                          0x00710064,
                          0x0000002D,
                          0x006E004F,
                          0x00640072,
                          0x001F0079,
                          0x00640063,
                          0x001F0072,
                          0x006B0061,
                          0x0062006E,
                          0x001F0072,
                          0x00740072,
                          0x001F0071,
                          0x006D0074,
                          0xFFFF0064,
                          0x006B026F,
                          0x00730060,
                          0x00650064,
                          0x0071006E,
                          0x0064006C,
                          0x0068001F,
                          0x0072006D,
                          0x00600073,
                          0x006B0061,
                          0x001F0064,
                          0x006D0064,
                          0x0064001F,
                          0x00720072,
                          0x02780060,
                          0x006D0060,
                          0xFFFF0073,
                          0x00640063,
                          0x006C001F,
                          0x00680060,
                          0x0073006D,
                          0x006D0064,
                          0x00710068,
                          0x0072001F,
                          0x006D006E,
                          0x9263001F,
                          0x00740270,
                          0x006B0068,
                          0x00610068,
                          0x00640071,
                          0x0000002D,
                          0x026F0040,
                          0x006E026F,
                          0x02660266,
                          0x00600068,
                          0x0068001F,
                          0x026F001F,
                          0x00790064,
                          0x00680079,
                          0x0072001F,
                          0x001F0074,
                          0x006D0074,
                          0x026F001F,
                          0x00600068,
                          0x006E006D,
                          0x0068FFFF,
                          0x001F006D,
                          0x00680061,
                          0x0068006B,
                          0x006E0062,
                          0x0072001F,
                          0x006D0064,
                          0x00600079,
                          0x0065001F,
                          0x00710060,
                          0x0068006B,
                          0x0062001F,
                          0x00630060,
                          0x00710064,
                          0x002D0064,
                          0x004B0000,
                          0x00720060,
                          0x001F0072,
                          0x00680063,
                          0x001F0064,
                          0x006B004A,
                          0x0073AA6D,
                          0x00640079,
                          0x0060001F,
                          0x00650074,
                          0x0063001F,
                          0x00640068,
                          0x004F001F,
                          0x0060006B,
                          0x00730073,
                          0x006E0065,
                          0x006C0071,
                          0xFFFF001F,
                          0x00600065,
                          0x006B006B,
                          0x006D0064,
                          0x001F022B,
                          0x00640075,
                          0x006C0071,
                          0x00680064,
                          0x00640063,
                          0x0060001F,
                          0x00640061,
                          0x001F0071,
                          0x00600063,
                          0x001F0072,
                          0x006C0054,
                          0x0068006A,
                          0x026F026F,
                          0x006D0064,
                          0xFFFF001F,
                          0x00640063,
                          0x001F0071,
                          0x006B004F,
                          0x00730060,
                          0x00650073,
                          0x0071006E,
                          0x002D006C,
                          0x00520000,
                          0x00640074,
                          0x0073006B,
                          0x001F0060,
                          0x006B0061,
                          0x0270006E,
                          0x00640074,
                          0x001F0072,
                          0x006E0072,
                          0x00710061,
                          0x001F0064,
                          0x006D0074,
                          0x001F0060,
                          0x00600061,
                          0x0060006B,
                          0x0079006D,
                          0xFFFF0060,
                          0x00680072,
                          0x001F006D,
                          0x00640063,
                          0x00640072,
                          0x00740270,
                          0x006B0068,
                          0x00610068,
                          0x00600071,
                          0x006B0071,
                          0x002D0060,
                          0x00000000};
