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
extern u8 func_0204aa90[];
extern u8 func_0204aa98[];
extern u8 func_0204aae0[];
extern u8 func_0204abd0[];
extern u8 func_0204abd4[];
extern u8 func_0204abe8[];
extern u8 func_0204ac68[];
extern u8 func_0204ace8[];
extern u8 func_0204af20[];
extern u8 func_0204af70[];
extern u8 func_0204b024[];
extern u8 func_0204b050[];
extern u8 func_0204b070[];
extern u8 func_0204b078[];
extern u8 func_0204b10c[];
extern u8 func_0204b128[];
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
extern u8 func_0204b338[];
extern u8 func_0204b358[];
extern u8 func_0204b4a8[];
extern u8 func_0204b4cc[];
extern u8 func_0204b500[];
extern u8 func_0204b504[];
extern u8 func_0204b508[];
extern u8 func_0204b570[];
extern u8 func_0204b574[];
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
extern u8 func_0208f670[];
extern u8 func_0208f6c4[];
extern u8 func_0208f77c[];
extern u8 func_0208f9a4[];
extern u8 func_0208ff84[];
extern u8 func_02090318[];
extern u8 func_02090324[];
extern u8 func_02090348[];
extern u8 func_020909a4[];
extern u8 func_02090a00[];

#pragma explicit_zero_data on
u32 data_020e7f64[3] = {0};
#pragma explicit_zero_data on
u32 data_020e7f70[4] = {0};
#pragma explicit_zero_data on
u32 data_020e7f80[6]  = {0};
u32 data_020e7f98[83] = {
    (u32) &func_0208f670, (u32) &func_0208f6c4, (u32) &func_020477d8, (u32) &func_02047818, (u32) &func_020478d0,
    (u32) &func_02047aa0, (u32) &func_020479ec, (u32) &func_02047a48, (u32) &func_02048f64, (u32) &func_0204775c,
    (u32) &func_02047e84, (u32) &func_02047e9c, (u32) &func_02048064, (u32) &func_02048124, (u32) &func_020481ec,
    (u32) &func_020482d8, (u32) &func_020483e0, (u32) &func_02048524, (u32) &func_02048550, (u32) &func_0204857c,
    (u32) &func_020488bc, (u32) &func_02090318, (u32) &func_02090324, (u32) &func_0208ff84, (u32) &func_020489b0,
    (u32) &func_0204b150, (u32) &func_02048b24, (u32) &func_0208f9a4, (u32) &func_02048c00, (u32) &func_02048ef4,
    (u32) &func_02048ef0, (u32) &func_0204b1d8, (u32) &func_0204aa8c, (u32) &func_0204aa98, (u32) &func_0204abe8,
    (u32) &func_0204ac68, (u32) &func_0204ace8, (u32) &func_0204af20, (u32) &func_0204af70, (u32) &func_0204b078,
    (u32) &func_0204b4cc, (u32) &func_0208f77c, (u32) &func_0204b024, (u32) &func_0204b050, (u32) &func_0204b070,
    (u32) &func_0204aae0, (u32) &func_0204abd0, (u32) &func_0204abd4, (u32) &func_0204b128, (u32) &func_0204b10c,
    (u32) &func_0204b134, (u32) &func_02090348, (u32) &func_0204b158, (u32) &func_0204b1a4, (u32) &func_0204b1a8,
    (u32) &func_0204b1e0, (u32) &func_0204b1f4, (u32) &func_0204b330, (u32) &func_0204b20c, (u32) &func_0204b338,
    (u32) &func_0204b358, (u32) &func_0204b4a8, (u32) &func_0204ba48, (u32) &func_0204b500, (u32) &func_0204b504,
    (u32) &func_0204b508, (u32) &func_020909a4, (u32) &func_0204b570, (u32) &func_0204b574, (u32) &func_02090a00,
    (u32) &func_0204b61c, (u32) &func_0204b620, (u32) &func_0204b624, (u32) &func_0204aa90, (u32) &func_0204b628,
    (u32) &func_0204b6d8, (u32) &func_0204b848, (u32) &func_0204b8b8, (u32) &func_0204b914, (u32) &func_0204b938,
    (u32) &func_0204b960, (u32) &func_0204b964, (u32) &func_0204b9c4};
