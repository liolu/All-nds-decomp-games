/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02134f14[];
extern u8 data_02134f38[];
extern u8 data_02134f5c[];
extern u8 data_02134f80[];
extern u8 data_02134fa4[];
extern u8 data_02134fc8[];
extern u8 data_02134fec[];
extern u8 data_02135010[];
extern u8 data_02135034[];
extern u8 data_02135058[];
extern u8 data_0213507c[];
extern u8 data_021350a0[];
extern u8 data_021350c4[];
extern u8 data_021350e8[];
extern u8 data_0213510c[];
extern u8 data_02135130[];
extern u8 data_02135154[];
extern u8 data_02135178[];
extern u8 data_0213519c[];
extern u8 data_021351c0[];
extern u8 data_021351e4[];
extern u8 data_02135208[];
extern u8 data_0213522c[];
extern u8 data_02135250[];
extern u8 data_02135274[];
extern u8 data_02135298[];
extern u8 data_021352bc[];
extern u8 data_021352e0[];
extern u8 data_02135304[];
extern u8 data_02135328[];
extern u8 data_0213534c[];
extern u8 data_02135370[];
extern u8 data_02135394[];
extern u8 data_021353b8[];
extern u8 data_021353dc[];
extern u8 data_02135400[];
extern u8 data_02135424[];
extern u8 data_02135448[];
extern u8 data_0213546c[];
extern u8 data_02135490[];
extern u8 data_021354b4[];
extern u8 data_021354d8[];
extern u8 data_021354fc[];
extern u8 data_02135520[];
extern u8 data_02135544[];
extern u8 data_02135568[];
extern u8 data_0213558c[];
extern u8 data_021355b0[];
extern u8 data_021355d4[];
extern u8 data_021355f8[];
extern u8 data_0213561c[];
extern u8 data_02135640[];
extern u8 data_02135664[];
extern u8 data_02135688[];
extern u8 data_021356ac[];
extern u8 data_021356d0[];
extern u8 data_021356f4[];
extern u8 data_02135718[];
extern u8 data_0213573c[];
extern u8 data_02135760[];
extern u8 data_02135784[];
extern u8 data_021357a8[];
extern u8 data_021357cc[];
extern u8 data_021357f0[];
extern u8 data_02135814[];
extern u8 data_02135880[];
extern u8 data_021358a4[];
extern u8 data_021358c8[];
extern u8 data_021358ec[];
extern u8 data_02135910[];
extern u8 data_02135934[];
extern u8 data_02135958[];
extern u8 data_0213597c[];
extern u8 data_021359a0[];
extern u8 data_021359c4[];
extern u8 data_021359e8[];
extern u8 data_02135a0c[];
extern u8 data_02135a30[];
extern u8 data_02135a54[];
extern u8 data_02135a78[];
extern u8 data_02135a9c[];
extern u8 data_02135ac0[];
extern u8 data_02135ae4[];
extern u8 data_02135b08[];
extern u8 data_02135b2c[];
extern u8 data_02135b50[];
extern u8 data_02135b98[];
extern u8 data_02135bbc[];
extern u8 data_02135be0[];
extern u8 data_02135c04[];
extern u8 data_02135c28[];
extern u8 data_02135c4c[];
extern u8 data_0214e25c[];

u32 data_02135c70[9]  = {0x0739858A, 0xE8777739,           0x00000000, 0x00000000, 0x00000030,
                         0x00000000, (u32) &data_0214e25c, 0x00000001, 0x00000000};
u32 data_02135c94[93] = {
    (u32) &data_02135c70, (u32) &data_02135250, (u32) &data_02135298, (u32) &data_021352bc, (u32) &data_021352e0,
    (u32) &data_02135304, (u32) &data_02135328, (u32) &data_0213534c, (u32) &data_02135370, (u32) &data_02135394,
    (u32) &data_021353b8, (u32) &data_02135ae4, (u32) &data_021353dc, (u32) &data_02135400, (u32) &data_02135424,
    (u32) &data_02135a54, (u32) &data_02135448, (u32) &data_0213546c, (u32) &data_02135490, (u32) &data_021354b4,
    (u32) &data_021354d8, (u32) &data_021354fc, (u32) &data_02135520, (u32) &data_02135934, (u32) &data_02135544,
    (u32) &data_02135568, (u32) &data_0213558c, (u32) &data_021358a4, (u32) &data_021355b0, (u32) &data_021355d4,
    (u32) &data_021355f8, (u32) &data_02135814, (u32) &data_0213561c, (u32) &data_02135640, (u32) &data_02135664,
    (u32) &data_02135688, (u32) &data_021356ac, (u32) &data_021356d0, (u32) &data_021356f4, (u32) &data_02135718,
    (u32) &data_0213573c, (u32) &data_02135760, (u32) &data_02135784, (u32) &data_021357a8, (u32) &data_021357cc,
    (u32) &data_021357f0, (u32) &data_02135880, (u32) &data_021358c8, (u32) &data_021358ec, (u32) &data_02135910,
    (u32) &data_02135958, (u32) &data_0213597c, (u32) &data_021359a0, (u32) &data_021359c4, (u32) &data_021359e8,
    (u32) &data_02135a0c, (u32) &data_02135a30, (u32) &data_02135a78, (u32) &data_02135a9c, (u32) &data_02135ac0,
    (u32) &data_02135b08, (u32) &data_02135b2c, (u32) &data_02135b50, (u32) &data_02135b98, (u32) &data_02135bbc,
    (u32) &data_02135be0, (u32) &data_02135c04, (u32) &data_02135c28, (u32) &data_02135c4c, (u32) &data_02135274,
    (u32) &data_02134f14, (u32) &data_02134f38, (u32) &data_02134f5c, (u32) &data_021351e4, (u32) &data_02134f80,
    (u32) &data_02134fa4, (u32) &data_02134fc8, (u32) &data_02135154, (u32) &data_02134fec, (u32) &data_02135010,
    (u32) &data_02135034, (u32) &data_02135058, (u32) &data_0213507c, (u32) &data_021350a0, (u32) &data_021350c4,
    (u32) &data_021350e8, (u32) &data_0213510c, (u32) &data_02135130, (u32) &data_02135178, (u32) &data_0213519c,
    (u32) &data_021351c0, (u32) &data_02135208, (u32) &data_0213522c};
