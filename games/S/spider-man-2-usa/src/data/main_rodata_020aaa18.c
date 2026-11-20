/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020aa4f0[];
extern u8 data_020aa4f8[];
extern u8 data_020aa500[];
extern u8 data_020aa508[];
extern u8 data_020aa510[];
extern u8 data_020aa518[];
extern u8 data_020aa520[];
extern u8 data_020aa528[];
extern u8 data_020aa530[];
extern u8 data_020aa538[];
extern u8 data_020aa540[];
extern u8 data_020aa548[];
extern u8 data_020aa550[];
extern u8 data_020aa558[];
extern u8 data_020aa560[];
extern u8 data_020aa568[];
extern u8 data_020aa570[];
extern u8 data_020aa578[];
extern u8 data_020aa580[];
extern u8 data_020aa588[];
extern u8 data_020aa590[];
extern u8 data_020aa598[];
extern u8 data_020aa5a0[];
extern u8 data_020aa5a8[];
extern u8 data_020aa5b0[];
extern u8 data_020aa5b8[];
extern u8 data_020aa5c0[];
extern u8 data_020aa5c8[];
extern u8 data_020aa5d0[];
extern u8 data_020aa5d8[];
extern u8 data_020aa5e0[];
extern u8 data_020aa5e8[];
extern u8 data_020aa5f0[];
extern u8 data_020aa5f8[];
extern u8 data_020aa600[];
extern u8 data_020aa608[];
extern u8 data_020aa610[];
extern u8 data_020aa618[];
extern u8 data_020aa620[];
extern u8 data_020aa628[];
extern u8 data_020aa630[];
extern u8 data_020aa638[];
extern u8 data_020aa640[];
extern u8 data_020aa648[];
extern u8 data_020aa650[];
extern u8 data_020aa658[];
extern u8 data_020aa660[];
extern u8 data_020aa718[];
extern u8 data_020aa7f0[];
extern u8 data_020aa810[];
extern u8 data_020aa830[];
extern u8 data_020aa850[];
extern u8 data_020aa870[];
extern u8 data_020aa8a0[];
extern u8 data_020aa8d8[];
extern u8 data_020aa914[];
extern u8 data_020aa958[];
extern u8 data_020ed7a8[];
extern u8 data_020ee748[];
extern u8 data_020ef688[];
extern u8 data_020ef708[];
extern u8 data_020ef788[];
extern u8 data_020ef7a8[];
extern u8 data_020ef828[];
extern u8 data_020ef8a8[];
extern u8 data_020ef928[];
extern u8 data_020ef9a8[];
extern u8 data_020efa28[];
extern u8 data_020efaa8[];
extern u8 data_020efb28[];
extern u8 data_020efba8[];
extern u8 data_020efc28[];
extern u8 data_020efd88[];
extern u8 data_020f0588[];
extern u8 data_020f0b88[];
extern u8 data_020f0ba8[];
extern u8 data_020f0bc8[];
extern u8 data_020f0c48[];
extern u8 data_020f0cc8[];
extern u8 data_020f2768[];
extern u8 data_020f3368[];
extern u8 data_020f3f68[];
extern u8 data_020f4b68[];
extern u8 data_020f5768[];
extern u8 data_020f8bc8[];

const u32 data_020aaa18[48]  = {0x008000BF, 0xFFFF0003, 0x00030050, 0x0008FFFF, 0x00DF000B, 0x000B0008, 0x00980007, 0x00DF0002,
                                0x00020064, 0x0008001F, 0x00C8000A, 0x000A0024, 0x005B003E, 0x003E0005, 0x00050086, 0x00B10057,
                                0x00770006, 0x000600B0, 0x005B0077, 0x00DB0005, 0x00060048, 0x005B0096, 0x00970005, 0x00050086,
                                0x00000040, 0x001B0001, 0x00010043, 0x00A80024, 0x00420001, 0x000100B0, 0x00AE009D, 0x00D70001,
                                0x00090016, 0x00300022, 0x003F0005, 0x00050030, 0x0030005F, 0x007E0005, 0x0005002F, 0x00900002,
                                0x00D70005, 0x0008003A, 0x00B6FFFF, 0x00F10000, 0x00040054, 0x00B60022, 0xFFFF0000, 0x00000000};
const u32 data_020aaad8[396] = {(u32) &data_020aa8d8, (u32) &data_020ed7a8, 0xFFEEFF9B,           0x002500CC,
                                0x0000000A,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa914,
                                (u32) &data_020ee748, 0xFFEEFF9B,           0x002500CC,           0x0000000B,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa5c8, (u32) &data_020ef688,
                                0xFFF9FFF9,           0x00100010,           0x00000001,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa5d0, (u32) &data_020ef708, 0xFFF9FFF9,
                                0x00100010,           0x00000001,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa5d8, (u32) &data_020ef788, 0x00410053,           0x00010001,
                                0x00000001,           (u32) &data_020aa518, (u32) &data_020aa5f0, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa5e8,
                                (u32) &data_020ef7a8, 0x00010000,           0x000C0010,           0x00000001,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa530, (u32) &data_020ef828,
                                0x00000000,           0x00100010,           0x00000001,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa538, (u32) &data_020ef828, 0x00000000,
                                0x00100010,           0x00000001,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa540, (u32) &data_020ef8a8, 0x00000000,           0x00100010,
                                0x00000001,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa548,
                                (u32) &data_020ef928, 0x00010000,           0x00100010,           0x00000001,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa558, (u32) &data_020ef928,
                                0x00010000,           0x00100010,           0x00000001,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa568, (u32) &data_020ef9a8, 0x00010000,
                                0x00100010,           0x00000001,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa570, (u32) &data_020efa28, 0xFFF9FFF7,           0x00100010,
                                0x00000001,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa580,
                                (u32) &data_020efa28, 0xFFF9FFF7,           0x00100010,           0x00000001,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa590, (u32) &data_020efaa8,
                                0xFFF9FFF7,           0x00100010,           0x00000001,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa598, (u32) &data_020efb28, 0xFFF9FFF9,
                                0x00100010,           0x00000001,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa5a8, (u32) &data_020efb28, 0xFFF9FFF9,           0x00100010,
                                0x00000001,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa5b0,
                                (u32) &data_020efba8, 0xFFF9FFF9,           0x00100010,           0x00000001,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa718, (u32) &data_020efc28,
                                0x00010000,           0x00480010,           0x00000004,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa870, (u32) &data_020efd88, 0xFFF10001,
                                0x000E00FD,           0x00000008,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa660, (u32) &data_020f0588, 0xFFF7FFD1,           0x0014005F,
                                0x00000003,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa5e0,
                                (u32) &data_020f0b88, 0xFFFDFFFD,           0x00080008,           0x00000001,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa588, (u32) &data_020f0ba8,
                                0x00000000,           0x00C00000,           0x00000001,           (u32) &data_020aa520,
                                (u32) &data_020aa5f8, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa550, (u32) &data_020f0ba8, 0x00000000,
                                0x00C00000,           0x00000001,           (u32) &data_020aa500, (u32) &data_020aa600,
                                (u32) &data_020aa608, (u32) &data_020aa610, 0x00000000,           0x00000000,
                                (u32) &data_020aa560, (u32) &data_020f0ba8, 0x00000000,           0x00C00000,
                                0x00000001,           (u32) &data_020aa4f0, (u32) &data_020aa618, (u32) &data_020aa620,
                                (u32) &data_020aa628, 0x00000000,           0x00000000,           (u32) &data_020aa578,
                                (u32) &data_020f0ba8, 0x00000000,           0x00C00000,           0x00000001,
                                (u32) &data_020aa4f8, (u32) &data_020aa630, (u32) &data_020aa638, 0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa5a0, (u32) &data_020f0ba8,
                                0x00000000,           0x00C00000,           0x00000001,           (u32) &data_020aa508,
                                (u32) &data_020aa640, (u32) &data_020aa648, 0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa5b8, (u32) &data_020f0bc8, 0xFFFAFFFA,
                                0x000D000D,           0x00000001,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa5c0, (u32) &data_020f0c48, 0xFFFAFFFA,           0x000D000D,
                                0x00000001,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa8a0,
                                (u32) &data_020f0cc8, 0x003E0021,           0x004100BA,           0x00000009,
                                (u32) &data_020aa510, (u32) &data_020aa650, (u32) &data_020aa658, 0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa7f0, (u32) &data_020f2768,
                                0xFFF2FFA1,           0x001D00C0,           0x00000005,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aa810, (u32) &data_020f3368, 0xFFF2FFA1,
                                0x001D00C0,           0x00000005,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                (u32) &data_020aa830, (u32) &data_020f3f68, 0xFFF3FFA1,           0x001C00C0,
                                0x00000005,           (u32) &data_020aa528, 0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           (u32) &data_020aa850,
                                (u32) &data_020f4b68, 0xFFF3FFA1,           0x001C00C0,           0x00000005,
                                (u32) &data_020aa528, 0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           0x00000000,           (u32) &data_020aa958, (u32) &data_020f5768,
                                0x00000000,           0x00C000FF,           0x00000020,           (u32) &data_020aa528,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000,
                                0x00000000,           (u32) &data_020aaa18, (u32) &data_020f8bc8, 0x00000000,
                                0x00C000FF,           0x00000020,           (u32) &data_020aa528, 0x00000000,
                                0x00000000,           0x00000000,           0x00000000,           0x00000000};
