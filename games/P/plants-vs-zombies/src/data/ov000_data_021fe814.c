/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_0204775c[];
extern u8 func_020477d8[];
extern u8 func_02047818[];
extern u8 func_020478d0[];
extern u8 func_020479ec[];
extern u8 func_02047a48[];
extern u8 func_02047aa0[];
extern u8 func_02047e84[];
extern u8 func_02047e9c[];
extern u8 func_02048064[];
extern u8 func_02048124[];
extern u8 func_020481ec[];
extern u8 func_020482d8[];
extern u8 func_020483e0[];
extern u8 func_0204843c[];
extern u8 func_020484a4[];
extern u8 func_02048524[];
extern u8 func_02048550[];
extern u8 func_0204857c[];
extern u8 func_020488bc[];
extern u8 func_020489b0[];
extern u8 func_02048b24[];
extern u8 func_02048c00[];
extern u8 func_02048ef0[];
extern u8 func_02048ef4[];
extern u8 func_02048f64[];
extern u8 func_0204aa8c[];
extern u8 func_0204aa98[];
extern u8 func_0204aae0[];
extern u8 func_0204abd0[];
extern u8 func_0204abd4[];
extern u8 func_0204abe8[];
extern u8 func_0204ac68[];
extern u8 func_0204ace8[];
extern u8 func_0204af20[];
extern u8 func_0204af70[];
extern u8 func_0204af9c[];
extern u8 func_0204b024[];
extern u8 func_0204b050[];
extern u8 func_0204b070[];
extern u8 func_0204b10c[];
extern u8 func_0204b128[];
extern u8 func_0204b134[];
extern u8 func_0204b150[];
extern u8 func_0204b154[];
extern u8 func_0204b158[];
extern u8 func_0204b1a4[];
extern u8 func_0204b1a8[];
extern u8 func_0204b1d8[];
extern u8 func_0204b1e0[];
extern u8 func_0204b1f4[];
extern u8 func_0204b20c[];
extern u8 func_0204b330[];
extern u8 func_0204b338[];
extern u8 func_0204b358[];
extern u8 func_0204b4a8[];
extern u8 func_0204b4cc[];
extern u8 func_0204b620[];
extern u8 func_0204b624[];
extern u8 func_0204b628[];
extern u8 func_0204b6d8[];
extern u8 func_0204b848[];
extern u8 func_0204b8b8[];
extern u8 func_0204b914[];
extern u8 func_0204b938[];
extern u8 func_0204b960[];
extern u8 func_0204b964[];
extern u8 func_0204b9c4[];
extern u8 func_0204ba48[];
extern u8 func_0204c130[];
extern u8 func_0204c134[];
extern u8 func_0204c178[];
extern u8 func_0204c748[];
extern u8 func_0204c77c[];
extern u8 func_0204c814[];
extern u8 func_0204c8f0[];
extern u8 func_0204c91c[];
extern u8 func_0204c950[];
extern u8 func_0204c998[];
extern u8 func_0204e4bc[];
extern u8 func_0204e4c0[];
extern u8 func_0204e4cc[];
extern u8 func_02090c04[];
extern u8 func_ov000_021f0554[];
extern u8 func_ov000_021f09fc[];
extern u8 func_ov000_021f0ab4[];

u32 data_ov000_021fe814[86] = {
    (u32) &func_ov000_021f0ab4, (u32) &func_02090c04,       (u32) &func_020477d8, (u32) &func_02047818,
    (u32) &func_020478d0,       (u32) &func_02047aa0,       (u32) &func_020479ec, (u32) &func_02047a48,
    (u32) &func_02048f64,       (u32) &func_0204775c,       (u32) &func_02047e84, (u32) &func_02047e9c,
    (u32) &func_02048064,       (u32) &func_02048124,       (u32) &func_020481ec, (u32) &func_020482d8,
    (u32) &func_020483e0,       (u32) &func_02048524,       (u32) &func_02048550, (u32) &func_0204857c,
    (u32) &func_020488bc,       (u32) &func_0204843c,       (u32) &func_020484a4, (u32) &func_0204c998,
    (u32) &func_020489b0,       (u32) &func_0204b150,       (u32) &func_02048b24, (u32) &func_ov000_021f0554,
    (u32) &func_02048c00,       (u32) &func_02048ef4,       (u32) &func_02048ef0, (u32) &func_0204b1d8,
    (u32) &func_0204aa8c,       (u32) &func_0204aa98,       (u32) &func_0204abe8, (u32) &func_0204ac68,
    (u32) &func_0204ace8,       (u32) &func_0204af20,       (u32) &func_0204af70, (u32) &func_0204c748,
    (u32) &func_0204b4cc,       (u32) &func_0204af9c,       (u32) &func_0204b024, (u32) &func_0204b050,
    (u32) &func_0204b070,       (u32) &func_0204aae0,       (u32) &func_0204abd0, (u32) &func_0204abd4,
    (u32) &func_0204b128,       (u32) &func_0204b10c,       (u32) &func_0204b134, (u32) &func_0204b154,
    (u32) &func_0204b158,       (u32) &func_0204b1a4,       (u32) &func_0204b1a8, (u32) &func_0204b1e0,
    (u32) &func_0204b1f4,       (u32) &func_0204b330,       (u32) &func_0204b20c, (u32) &func_0204b338,
    (u32) &func_0204b358,       (u32) &func_0204b4a8,       (u32) &func_0204ba48, (u32) &func_0204c77c,
    (u32) &func_0204c814,       (u32) &func_0204c8f0,       (u32) &func_0204e4cc, (u32) &func_0204c91c,
    (u32) &func_0204e4bc,       (u32) &func_0204e4c0,       (u32) &func_0204c950, (u32) &func_0204b620,
    (u32) &func_0204b624,       (u32) &func_ov000_021f09fc, (u32) &func_0204b628, (u32) &func_0204b6d8,
    (u32) &func_0204b848,       (u32) &func_0204b8b8,       (u32) &func_0204b914, (u32) &func_0204b938,
    (u32) &func_0204b960,       (u32) &func_0204b964,       (u32) &func_0204b9c4, (u32) &func_0204c178,
    (u32) &func_0204c130,       (u32) &func_0204c134};
