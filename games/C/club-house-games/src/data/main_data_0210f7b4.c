/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020bac18[];
extern u8 data_020bbec8[];
extern u8 data_020bc010[];
extern u8 data_020bca00[];
extern u8 data_020bca08[];
extern u8 data_020bcba8[];
extern u8 data_020bd220[];
extern u8 data_020bd228[];
extern u8 data_020bd4b8[];
extern u8 data_020bd4c0[];
extern u8 data_020bd4c8[];
extern u8 data_020d61ec[];
extern u8 data_020d6224[];
extern u8 data_020d6240[];
extern u8 data_020d62b0[];
extern u8 data_020d62e8[];
extern u8 data_020d6358[];
extern u8 data_020d6374[];
extern u8 data_020d63ac[];
extern u8 data_020d63c8[];
extern u8 data_020d63e4[];
extern u8 data_020d672c[];
extern u8 data_020d6748[];
extern u8 data_020d6780[];
extern u8 data_020d679c[];
extern u8 data_020d67d4[];
extern u8 data_020d67f0[];
extern u8 data_020d680c[];
extern u8 data_020d6828[];
extern u8 data_020d6860[];
extern u8 data_020d687c[];
extern u8 data_020d6898[];
extern u8 data_020d68b4[];
extern u8 data_0210d6d4[];

u32 data_0210f7b4[21] = {0x0005FFFC, 0x00040004, (u32) &data_020bd220, (u32) &data_020d61ec,
                         0x0005FFFC, 0x00040004, (u32) &data_020bd4b8, (u32) &data_020d6224,
                         0x0005FFFC, 0x0004000C, (u32) &data_020bca00, (u32) &data_020d6240,
                         0x0005FFFC, 0x00040004, (u32) &data_020bca08, (u32) &data_020d62b0,
                         0x0005FFFC, 0x00040004, (u32) &data_020bd4c0, (u32) &data_020d62e8,
                         0x0005FFFC};
u32 data_0210f808[67] = {
    0x0004000C,           (u32) &data_020bc010, (u32) &data_020d6358, 0x0005FFFC,           0x000C0004,
    (u32) &data_020bbec8, (u32) &data_020d6374, 0x0005FFFC,           0x000C0004,           (u32) &data_020bd228,
    (u32) &data_020d63ac, 0x0005FFFC,           0x000C000C,           (u32) &data_020bd4c8, (u32) &data_020d63c8,
    0xFFFFFFFE,           0x003C00F8,           0x00000000,           (u32) &data_020d63e4, 0xFFFFFFFE,
    0x00270070,           0x00000000,           (u32) &data_020d672c, 0x0100FFFD,           0x00280078,
    (u32) &data_0210d6d4, (u32) &data_020d6748, 0x0F05FFFC,           0x00230016,           (u32) &data_020bcba8,
    (u32) &data_020d6780, 0x0F05FFFC,           0x00230016,           (u32) &data_020bcba8, (u32) &data_020d679c,
    0x0F05FFFC,           0x00230016,           (u32) &data_020bcba8, (u32) &data_020d67d4, 0x0F05FFFC,
    0x00230016,           (u32) &data_020bcba8, (u32) &data_020d67f0, 0x0F05FFFC,           0x00230016,
    (u32) &data_020bcba8, (u32) &data_020d680c, 0x0905FFFC,           0x0010000E,           (u32) &data_020bac18,
    (u32) &data_020d6828, 0x0605FFFC,           0x0010000E,           (u32) &data_020bac18, (u32) &data_020d6860,
    0x0705FFFC,           0x0010000E,           (u32) &data_020bac18, (u32) &data_020d687c, 0x0805FFFC,
    0x0010000E,           (u32) &data_020bac18, (u32) &data_020d6898, 0x0505FFFC,           0x0010000E,
    (u32) &data_020bac18, (u32) &data_020d68b4};
u32 data_0210f914[88] = {
    0x00010001, 0x00000000, 0x0000FFFF, 0x00490024, 0x00500050, 0x00460054, 0x00420001, 0x0001004F, 0x0044004A, 0x004F0050,
    0x00550001, 0x00420049, 0x00010055, 0x00560054, 0x0055004A, 0xFFFF0054, 0x0050045A, 0x000F0056, 0x00240000, 0x00500049,
    0x0054004A, 0x0054004A, 0x00460054, 0x0001005B, 0x0008004D, 0x0044004A, 0x004F9C4F, 0x00010046, 0x00560452, 0x0001004A,
    0x00500057, 0x00540056, 0x0044FFFF, 0x00530050, 0x00460053, 0x04510054, 0x004F0050, 0x00010045, 0x0046004D, 0x004E0001,
    0x0046004A, 0x00590056, 0x0000000F, 0x00440034, 0x04480046, 0x004A004D, 0x00560001, 0x0008004F, 0x0044004A, 0x004F0050,
    0x00010042, 0x00490044, 0xFFFF0046, 0x004A0055, 0x00540001, 0x0001004A, 0x00450042, 0x004A0045, 0x00460044, 0x0000000F,
    0xAC410038, 0x004D0049, 0x00010046, 0x004A0046, 0x0001004F, 0x045A0034, 0x0043004E, 0x004D0050, 0x00420001, 0x00540056,
    0xFFFF040D, 0x00420045, 0x00010054, 0x0056005B, 0x00450001, 0x0053004A, 0x04510001, 0x00540042, 0x00550054, 0x0000000F,
    0x004D0026, 0x0448004A, 0x00010046, 0x004F0056, 0x004A0001, 0x00500044, 0x0050004F, 0x0000000F};
