/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02143510[];
extern u8 data_02143540[];
extern u8 func_02007e58[];
extern u8 func_0200949c[];
extern u8 func_02009514[];
extern u8 func_02009e18[];
extern u8 func_02009e54[];
extern u8 func_02009e58[];
extern u8 func_02009e60[];
extern u8 func_02009ee8[];
extern u8 func_02009fb4[];
extern u8 func_02009fbc[];
extern u8 func_0200a044[];
extern u8 func_0200a120[];
extern u8 func_0200a1b0[];
extern u8 func_0200a240[];
extern u8 func_0200a2c0[];
extern u8 func_0200a2c8[];
extern u8 func_0200a2d0[];
extern u8 func_0200a2ec[];
extern u8 func_0200a2f0[];
extern u8 func_0200a2f4[];
extern u8 func_0200a308[];
extern u8 func_0200aad8[];
extern u8 func_0200aae8[];
extern u8 func_0200aaf8[];
extern u8 func_0200ab08[];
extern u8 func_0200ab18[];
extern u8 func_0200ab28[];
extern u8 func_0200ab38[];
extern u8 func_0200ab48[];
extern u8 func_0200ab68[];
extern u8 func_0200ab78[];
extern u8 func_0200ab88[];
extern u8 func_0200ab98[];
extern u8 func_0200d8f8[];
extern u8 func_0200d90c[];
extern u8 func_0200d910[];
extern u8 func_0200d914[];

u32 data_021435a8[14]  = {0x00610052, 0x006D0079, 0x006E0061, 0x00630020, 0x006E006F, 0x00720074, 0x00200065,
                          0x0065006C, 0x00200073, 0x0061006C, 0x00690070, 0x0073006E, 0x00000000, (u32) &data_021435a8};
u32 data_021435e0[143] = {0x006F0043,
                          0x006C006C,
                          0x00630065,
                          0x00690074,
                          0x006E006F,
                          0x00640020,
                          0x00200065,
                          0x0069004D,
                          0x0069006E,
                          0x004A0020,
                          0x00750065,
                          0x00000078,
                          (u32) &data_021435e0,
                          (u32) &data_02143510,
                          (u32) &data_02143540,
                          0x020436C4,
                          0x00000000,
                          0x02043714,
                          0x00000000,
                          0x00000000,
                          0x00000000,
                          0x020427A4,
                          0x02042A30,
                          (u32) &func_0200a2c0,
                          (u32) &func_0200a2c8,
                          (u32) &func_0200a2d0,
                          0x02042CDC,
                          0x02043210,
                          0x020432A8,
                          0x020436A8,
                          0x020436B4,
                          0x0201D488,
                          0x0201D2FC,
                          0x0201D8F8,
                          0x00000000,
                          0x00000000,
                          0x020426B4,
                          0x0204376C,
                          0x020439AC,
                          (u32) &func_02007e58,
                          (u32) &func_02009ee8,
                          (u32) &func_02009e60,
                          (u32) &func_02009e58,
                          0x00000000,
                          0x00000000,
                          0x02043A44,
                          0x02043A34,
                          (u32) &func_0200ab98,
                          (u32) &func_0200ab88,
                          (u32) &func_0200ab78,
                          (u32) &func_0200ab68,
                          0x00000000,
                          0x00000000,
                          0x0204272C,
                          0x020437FC,
                          0x020439E0,
                          (u32) &func_02009514,
                          (u32) &func_0200a044,
                          (u32) &func_02009fbc,
                          (u32) &func_02009fb4,
                          0x00000000,
                          0x00000000,
                          0x02043A24,
                          0x02043A14,
                          (u32) &func_0200ab38,
                          (u32) &func_0200ab28,
                          (u32) &func_0200ab18,
                          (u32) &func_0200ab08,
                          0x00000000,
                          0x00000000,
                          0x0204392C,
                          0x0204388C,
                          (u32) &func_0200a2c0,
                          (u32) &func_0200a2c8,
                          (u32) &func_0200a2d0,
                          0x020422C0,
                          0x02042390,
                          0x0201D528,
                          0x0201D820,
                          0x020423B4,
                          0x0201D488,
                          0x0201D2FC,
                          0x0201D8F8,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200a240,
                          (u32) &func_0200a1b0,
                          (u32) &func_02009e54,
                          (u32) &func_02009514,
                          (u32) &func_0200a044,
                          (u32) &func_02009fbc,
                          (u32) &func_02009fb4,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200ab48,
                          (u32) &func_0200aaf8,
                          (u32) &func_0200ab38,
                          (u32) &func_0200ab28,
                          (u32) &func_0200ab18,
                          (u32) &func_0200ab08,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200949c,
                          (u32) &func_0200a120,
                          (u32) &func_02009e18,
                          (u32) &func_02007e58,
                          (u32) &func_02009ee8,
                          (u32) &func_02009e60,
                          (u32) &func_02009e58,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200aae8,
                          (u32) &func_0200aad8,
                          (u32) &func_0200ab98,
                          (u32) &func_0200ab88,
                          (u32) &func_0200ab78,
                          (u32) &func_0200ab68,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200d8f8,
                          (u32) &func_0200d914,
                          0x020CA3AC,
                          (u32) &func_0200d90c,
                          (u32) &func_0200d910,
                          0x00000000,
                          0x00000000,
                          0x02021578,
                          0x02021564,
                          (u32) &func_02009e54,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200a2ec,
                          (u32) &func_0200a308,
                          (u32) &func_02009e18,
                          0x00000000,
                          0x00000000,
                          (u32) &func_0200a2f0,
                          (u32) &func_0200a2f4,
                          0x00000000,
                          0x00000000,
                          0x00000000,
                          0x00000000,
                          0x00000001};
