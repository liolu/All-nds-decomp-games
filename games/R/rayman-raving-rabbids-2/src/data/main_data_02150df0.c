/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_0200a2f0[];
extern u8 func_0200a2f4[];
extern u8 func_020d3e94[];
extern u8 func_020d416c[];
extern u8 func_020d41a4[];
extern u8 func_020d41ac[];
extern u8 func_020d4234[];
extern u8 func_020d47fc[];
extern u8 func_020d488c[];
extern u8 func_020d4914[];
extern u8 func_020d4918[];
extern u8 func_020d499c[];
extern u8 func_020d49ac[];
extern u8 func_020d49cc[];
extern u8 func_020d49dc[];
extern u8 func_020d49ec[];
extern u8 func_020d49fc[];
extern u8 func_020e4a54[];
extern u8 func_020e4bcc[];
extern u8 func_020e4d2c[];
extern u8 func_020e4e44[];
extern u8 func_020e52d4[];
extern u8 func_020e5914[];
extern u8 func_0210bf70[];
extern u8 func_0210bfe8[];
extern u8 func_0210d708[];
extern u8 func_0210d710[];
extern u8 func_02111940[];
extern u8 func_021119c8[];
extern u8 func_02111aa4[];
extern u8 func_0211200c[];
extern u8 func_0211201c[];
extern u8 func_0211202c[];
extern u8 func_0211203c[];
extern u8 func_0211204c[];
extern u8 func_0211205c[];
extern u8 func_02121bd8[];
extern u8 func_02122710[];
extern u8 func_021229f8[];
extern u8 func_02122c38[];
extern u8 func_02122e8c[];
extern u8 func_02122ea0[];
extern u8 func_0212305c[];
extern u8 func_02123070[];
extern u8 func_021230a4[];
extern u8 func_021230d4[];
extern u8 func_02123154[];
extern u8 func_021231e4[];
extern u8 func_02123264[];
extern u8 func_02123374[];
extern u8 func_021233f8[];
extern u8 func_02123494[];
extern u8 func_02123514[];
extern u8 func_021239a4[];
extern u8 func_02123afc[];
extern u8 func_02123c74[];
extern u8 func_02123d00[];
extern u8 func_02123de0[];
extern u8 func_02123ed0[];
extern u8 func_02123fcc[];
extern u8 func_02124048[];
extern u8 func_02124154[];
extern u8 func_021241ec[];
extern u8 func_02124268[];
extern u8 func_0212449c[];
extern u8 func_021245ec[];
extern u8 func_02124670[];

u32 data_02150df0[14] = {(u32) &func_02122ea0, (u32) &func_02122e8c, (u32) &func_0210d710, 0x00000000, 0x00000000,
                         (u32) &func_0200a2f0, (u32) &func_0200a2f4, 0x00000000,           0x00000000, 0x00000000,
                         0x00000000,           0x00000001,           0x00000000,           0x00000000};
u32 data_02150e28[30] = {
    (u32) &func_0212305c, (u32) &func_02123070, (u32) &func_021230a4, (u32) &func_02121bd8, 0x020D02D4,
    (u32) &func_020e4a54, (u32) &func_020e4bcc, (u32) &func_020e4d2c, (u32) &func_020e4e44, 0x020D02DC,
    0x020D02E0,           0x020D02E4,           0x020D02EC,           0x020D02F4,           (u32) &func_020e52d4,
    (u32) &func_020e5914, (u32) &func_02122710, (u32) &func_021230d4, (u32) &func_02123154, (u32) &func_021231e4,
    (u32) &func_02123264, (u32) &func_02123374, (u32) &func_021233f8, (u32) &func_02123494, (u32) &func_021229f8,
    (u32) &func_02122c38, (u32) &func_02123514, 0x00000001,           0x00000000,           0x00000000};
u32 data_02150ea0[82] = {(u32) &func_021239a4, (u32) &func_02123afc,
                         (u32) &func_02123c74, (u32) &func_02121bd8,
                         0x020D02D4,           (u32) &func_020e4a54,
                         (u32) &func_020e4bcc, (u32) &func_020e4d2c,
                         (u32) &func_020e4e44, 0x020D02DC,
                         0x020D02E0,           0x020D02E4,
                         0x020D02EC,           0x020D02F4,
                         (u32) &func_020e52d4, (u32) &func_020e5914,
                         (u32) &func_02123d00, (u32) &func_02123de0,
                         (u32) &func_02123ed0, (u32) &func_02123fcc,
                         (u32) &func_02124048, (u32) &func_021245ec,
                         (u32) &func_02124154, (u32) &func_021241ec,
                         (u32) &func_02124268, (u32) &func_0212449c,
                         (u32) &func_02124670, 0x00000000,
                         0x00000000,           (u32) &func_020d488c,
                         (u32) &func_020d47fc, (u32) &func_020d416c,
                         (u32) &func_020d3e94, (u32) &func_020d4234,
                         (u32) &func_020d41ac, (u32) &func_020d41a4,
                         0x00000000,           0x00000000,
                         (u32) &func_020d49ac, (u32) &func_020d499c,
                         (u32) &func_020d49fc, (u32) &func_020d49ec,
                         (u32) &func_020d49dc, (u32) &func_020d49cc,
                         0x00000000,           0x00000000,
                         (u32) &func_020d4914, (u32) &func_020d4918,
                         (u32) &func_020d416c, 0x00000000,
                         0x00000000,           (u32) &func_0210bf70,
                         (u32) &func_02111aa4, (u32) &func_0210d710,
                         (u32) &func_0210bfe8, (u32) &func_021119c8,
                         (u32) &func_02111940, (u32) &func_0210d708,
                         0x00000000,           0x00000000,
                         (u32) &func_0211205c, (u32) &func_0211200c,
                         (u32) &func_0211204c, (u32) &func_0211203c,
                         (u32) &func_0211202c, (u32) &func_0211201c,
                         0x00000000,           0x00000000,
                         (u32) &func_02122ea0, (u32) &func_02122e8c,
                         (u32) &func_0210d710, 0x00000000,
                         0x00000000,           (u32) &func_0200a2f0,
                         (u32) &func_0200a2f4, 0x00000000,
                         0x00000000,           0x00000000,
                         0x00000000,           0x00000001,
                         0x00000000,           0x00000000};
