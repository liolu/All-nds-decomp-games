/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0209e020[];
extern u8 data_0209e068[];
extern u8 data_0209e070[];
extern u8 data_0209e078[];
extern u8 data_0209e080[];
extern u8 data_0209e088[];
extern u8 data_0209e094[];
extern u8 data_0209e0a0[];
extern u8 data_0209e0b0[];
extern u8 data_0209e0bc[];
extern u8 data_0209e0c8[];
extern u8 data_0209e0d4[];
extern u8 data_0209e0e0[];
extern u8 data_0209e0e8[];
extern u8 data_0209e0f4[];
extern u8 data_0209e0fc[];
extern u8 data_0209e108[];
extern u8 data_0209e114[];
extern u8 data_0209e124[];
extern u8 data_0209e138[];
extern u8 data_0209e144[];
extern u8 data_0209e154[];
extern u8 data_0209e15c[];
extern u8 data_0209e168[];
extern u8 data_0209e170[];
extern u8 data_0209e17c[];
extern u8 data_0209e188[];
extern u8 data_0209e194[];
extern u8 data_0209e1a0[];
extern u8 data_0209e1a8[];
extern u8 data_0209e1b0[];
extern u8 data_0209e1bc[];
extern u8 data_0209e1c4[];
extern u8 data_0209e1cc[];
extern u8 data_0209e1d4[];
extern u8 data_0209e1dc[];
extern u8 data_0209e1e4[];
extern u8 func_02047b7c[];
extern u8 func_02047cec[];
extern u8 func_02047e70[];
extern u8 func_02047f5c[];
extern u8 func_02047f80[];
extern u8 func_02048024[];
extern u8 func_020480b0[];
extern u8 func_020481a0[];
extern u8 func_020481fc[];
extern u8 func_0204821c[];
extern u8 func_02048240[];
extern u8 func_02048250[];
extern u8 func_020482bc[];
extern u8 func_02048420[];
extern u8 func_020484e4[];
extern u8 func_0204855c[];
extern u8 func_020485d4[];
extern u8 func_02048768[];
extern u8 func_020487d4[];
extern u8 func_0204884c[];
extern u8 func_0204888c[];
extern u8 func_02048928[];
extern u8 func_0204896c[];
extern u8 func_02048a74[];
extern u8 func_02048af4[];
extern u8 func_02048b98[];
extern u8 func_02048bb8[];
extern u8 func_02048c50[];
extern u8 func_02048cbc[];
extern u8 func_02048cd8[];
extern u8 func_02048d68[];
extern u8 func_02048de8[];
extern u8 func_02048e00[];
extern u8 func_02048e38[];
extern u8 func_02048e9c[];
extern u8 func_02048f08[];

u32 data_0209de60[1]   = {(u32) &data_0209e020};
u32 data_0209de64[111] = {
    (u32) &data_0209e068, (u32) &func_02047b7c, 0x00000002, (u32) &data_0209e070, (u32) &func_02047cec, 0x00000001,
    (u32) &data_0209e078, (u32) &func_02047e70, 0x00000005, (u32) &data_0209e080, (u32) &func_02047f5c, 0x00000001,
    (u32) &data_0209e088, (u32) &func_02047f80, 0x00000003, (u32) &data_0209e094, (u32) &func_02048024, 0x00000002,
    (u32) &data_0209e0a0, (u32) &func_020480b0, 0x00000004, (u32) &data_0209e0b0, (u32) &func_020481a0, 0x00000002,
    (u32) &data_0209e0bc, (u32) &func_020481fc, 0x00000001, (u32) &data_0209e0c8, (u32) &func_0204821c, 0x00000001,
    (u32) &data_0209e0d4, (u32) &func_02048240, 0x00000000, (u32) &data_0209e0e0, (u32) &func_02048250, 0x00000002,
    (u32) &data_0209e0e8, (u32) &func_020482bc, 0x00000003, (u32) &data_0209e0f4, (u32) &func_02048420, 0x00000002,
    (u32) &data_0209e0fc, (u32) &func_020484e4, 0x00000002, (u32) &data_0209e108, (u32) &func_0204855c, 0x00000002,
    (u32) &data_0209e114, (u32) &func_020485d4, 0x00000009, (u32) &data_0209e124, (u32) &func_02048768, 0x00000001,
    (u32) &data_0209e138, (u32) &func_020487d4, 0x00000001, (u32) &data_0209e144, (u32) &func_0204884c, 0x00000000,
    (u32) &data_0209e154, (u32) &func_0204888c, 0x00000001, (u32) &data_0209e15c, (u32) &func_02048928, 0x00000001,
    (u32) &data_0209e168, (u32) &func_0204896c, 0x00000002, (u32) &data_0209e170, (u32) &func_02048a74, 0x00000002,
    (u32) &data_0209e17c, (u32) &func_02048af4, 0x00000002, (u32) &data_0209e188, (u32) &func_02048b98, 0x00000000,
    (u32) &data_0209e194, (u32) &func_02048bb8, 0x00000001, (u32) &data_0209e1a0, (u32) &func_02048c50, 0x00000001,
    (u32) &data_0209e1a8, (u32) &func_02048cbc, 0x00000000, (u32) &data_0209e1b0, (u32) &func_02048cd8, 0x00000001,
    (u32) &data_0209e1bc, (u32) &func_02048d68, 0x00000000, (u32) &data_0209e1c4, (u32) &func_02048de8, 0x00000000,
    (u32) &data_0209e1cc, (u32) &func_02048e00, 0x00000001, (u32) &data_0209e1d4, (u32) &func_02048e38, 0x00000001,
    (u32) &data_0209e1dc, (u32) &func_02048e9c, 0x00000001, (u32) &data_0209e1e4, (u32) &func_02048f08, 0x00000000,
    0x00000000,           0x00000000,           0x00000000};
