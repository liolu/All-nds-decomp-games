/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_020425d0[];
extern u8 func_020425d4[];
extern u8 func_020425d8[];
extern u8 func_020425dc[];
extern u8 func_020425e0[];
extern u8 func_020425e4[];
extern u8 func_020425e8[];
extern u8 func_0204775c[];
extern u8 func_020477d8[];
extern u8 func_02047818[];
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
extern u8 func_02048524[];
extern u8 func_02048550[];
extern u8 func_0204857c[];
extern u8 func_020488bc[];
extern u8 func_020489b0[];
extern u8 func_02048b24[];
extern u8 func_02048ef0[];
extern u8 func_02048ef4[];
extern u8 func_02048f64[];
extern u8 func_0204aa8c[];
extern u8 func_0204aa90[];
extern u8 func_0204aa98[];
extern u8 func_0204aae0[];
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
extern u8 func_0204b078[];
extern u8 func_0204b10c[];
extern u8 func_0204b134[];
extern u8 func_0204b150[];
extern u8 func_0204b158[];
extern u8 func_0204b1a4[];
extern u8 func_0204b1a8[];
extern u8 func_0204b1d8[];
extern u8 func_0204b1e0[];
extern u8 func_0204b1f4[];
extern u8 func_0204b20c[];
extern u8 func_0204b330[];
extern u8 func_0204b4cc[];
extern u8 func_0204b500[];
extern u8 func_0204b504[];
extern u8 func_0204b508[];
extern u8 func_0204b50c[];
extern u8 func_0204b570[];
extern u8 func_0204b574[];
extern u8 func_0204b578[];
extern u8 func_0204b61c[];
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
extern u8 func_020c8df4[];
extern u8 func_020c8e08[];
extern u8 func_020c8e24[];
extern u8 func_020c8e28[];
extern u8 func_020c8e2c[];
extern u8 func_020c8e30[];
extern u8 func_020c97dc[];
extern u8 func_020c97e0[];
extern u8 func_020c97ec[];
extern u8 func_020c97f0[];
extern u8 func_020c97f4[];
extern u8 func_020c9a18[];
extern u8 func_020c9a24[];
extern u8 func_020c9cbc[];
extern u8 func_020c9d08[];
extern u8 func_020c9de0[];
extern u8 func_020c9e08[];
extern u8 func_020c9f74[];
extern u8 func_020ca08c[];

u32 data_020fb8e8[9]  = {(u32) &func_020425e4, (u32) &func_020425e8, (u32) &func_020425e0,
                         (u32) &func_020425dc, (u32) &func_020425d8, (u32) &func_020425d4,
                         (u32) &func_020425d0, 0x00000000,           0x00000000};
u32 data_020fb90c[90] = {
    (u32) &func_020c8df4, (u32) &func_020c8e08, (u32) &func_020477d8, (u32) &func_02047818, (u32) &func_020ca08c,
    (u32) &func_02047aa0, (u32) &func_020479ec, (u32) &func_02047a48, (u32) &func_02048f64, (u32) &func_0204775c,
    (u32) &func_02047e84, (u32) &func_02047e9c, (u32) &func_02048064, (u32) &func_02048124, (u32) &func_020481ec,
    (u32) &func_020482d8, (u32) &func_020483e0, (u32) &func_02048524, (u32) &func_02048550, (u32) &func_0204857c,
    (u32) &func_020488bc, (u32) &func_020c8e24, (u32) &func_020c9de0, (u32) &func_020c8e30, (u32) &func_020489b0,
    (u32) &func_0204b150, (u32) &func_02048b24, (u32) &func_020c8e28, (u32) &func_020c9d08, (u32) &func_02048ef4,
    (u32) &func_02048ef0, (u32) &func_0204b1d8, (u32) &func_0204aa8c, (u32) &func_0204aa98, (u32) &func_0204abe8,
    (u32) &func_0204ac68, (u32) &func_0204ace8, (u32) &func_0204af20, (u32) &func_0204af70, (u32) &func_0204b078,
    (u32) &func_0204b4cc, (u32) &func_0204af9c, (u32) &func_0204b024, (u32) &func_0204b050, (u32) &func_0204b070,
    (u32) &func_0204aae0, (u32) &func_020c8e2c, (u32) &func_0204abd4, (u32) &func_020c97e0, (u32) &func_0204b10c,
    (u32) &func_0204b134, (u32) &func_020c97dc, (u32) &func_0204b158, (u32) &func_0204b1a4, (u32) &func_0204b1a8,
    (u32) &func_0204b1e0, (u32) &func_0204b1f4, (u32) &func_0204b330, (u32) &func_0204b20c, (u32) &func_020c97ec,
    (u32) &func_020c97f0, (u32) &func_020c97f4, (u32) &func_0204ba48, (u32) &func_0204b500, (u32) &func_0204b504,
    (u32) &func_0204b508, (u32) &func_0204b50c, (u32) &func_0204b570, (u32) &func_0204b574, (u32) &func_0204b578,
    (u32) &func_0204b61c, (u32) &func_0204b620, (u32) &func_0204b624, (u32) &func_0204aa90, (u32) &func_0204b628,
    (u32) &func_0204b6d8, (u32) &func_0204b848, (u32) &func_0204b8b8, (u32) &func_0204b914, (u32) &func_0204b938,
    (u32) &func_0204b960, (u32) &func_0204b964, (u32) &func_0204b9c4, (u32) &func_020c9cbc, (u32) &func_020c9e08,
    (u32) &func_020c9f74, (u32) &func_020c9a18, (u32) &func_020c9a24, 0x00000000,           0x00000000};
