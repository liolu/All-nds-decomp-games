/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov066_02268ca0[];
extern u8 data_ov066_02268ca8[];
extern u8 data_ov066_02268cb8[];
extern u8 data_ov066_02268cc0[];
extern u8 data_ov066_02268cc8[];
extern u8 data_ov066_02268ce0[];
extern u8 data_ov066_02268cf0[];
extern u8 data_ov066_02268cf8[];
extern u8 data_ov066_02268d08[];
extern u8 data_ov066_02268d18[];
extern u8 data_ov066_02268d20[];
extern u8 data_ov066_02268d58[];
extern u8 data_ov066_02268d60[];
extern u8 data_ov066_02268d68[];
extern u8 data_ov066_02268d88[];
extern u8 data_ov066_02268ea4[];
extern u8 data_ov066_02268ec0[];
extern u8 data_ov066_02268f14[];
extern u8 data_ov066_02268f30[];
extern u8 data_ov066_02268f4c[];
extern u8 data_ov066_02268fbc[];
extern u8 data_ov066_02269048[];
extern u8 data_ov066_02269064[];
extern u8 data_ov066_0226909c[];
extern u8 data_ov066_022690f0[];
extern u8 data_ov066_0226910c[];
extern u8 data_ov066_02269160[];
extern u8 data_ov066_0226917c[];
extern u8 data_ov066_02269198[];
extern u8 data_ov066_02269224[];
extern u8 data_ov066_02269240[];
extern u8 data_ov066_02269278[];
extern u8 data_ov066_02269294[];
extern u8 data_ov066_022692b0[];
extern u8 data_ov066_022692e8[];
extern u8 data_ov066_02269304[];
extern u8 data_ov066_022693ac[];
extern u8 data_ov066_022693c8[];
extern u8 data_ov066_02269400[];
extern u8 data_ov066_022694a8[];
extern u8 data_ov066_022694c4[];
extern u8 data_ov066_02269668[];
extern u8 data_ov066_02269684[];
extern u8 data_ov066_022696bc[];
extern u8 data_ov066_02269710[];
extern u8 data_ov066_02269780[];
extern u8 data_ov066_0226979c[];
extern u8 data_ov066_022697d4[];

u32 data_ov066_0226c314[11]  = {0x0302FFFC, 0x00080010, (u32) &data_ov066_02268cc0, (u32) &data_ov066_022696bc,
                                0x0402FFFC, 0x00040010, (u32) &data_ov066_02268ca8, (u32) &data_ov066_022694a8,
                                0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8};
u32 data_ov066_0226c340[125] = {(u32) &data_ov066_02269224, 0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8,
                                (u32) &data_ov066_022694c4, 0x0402FFFC, 0x000D0010, (u32) &data_ov066_02268d68,
                                (u32) &data_ov066_02269240, 0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58,
                                (u32) &data_ov066_02269198, 0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8,
                                (u32) &data_ov066_02269294, 0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58,
                                (u32) &data_ov066_02268ec0, 0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58,
                                (u32) &data_ov066_022692b0, 0x0302FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_02269160, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_02268f30, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20,
                                (u32) &data_ov066_0226909c, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8,
                                (u32) &data_ov066_02269304, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0,
                                (u32) &data_ov066_02269780, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_0226917c, 0x0302FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_022692e8, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_022692e8, 0x0001FFFC, 0x00080005, (u32) &data_ov066_02268d08,
                                (u32) &data_ov066_02269048, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20,
                                (u32) &data_ov066_022693ac, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8,
                                (u32) &data_ov066_022690f0, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8,
                                (u32) &data_ov066_02268f4c, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0,
                                (u32) &data_ov066_0226910c, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_02269278, 0x0001FFFC, 0x00080005, (u32) &data_ov066_02268ca0,
                                (u32) &data_ov066_022693c8, 0x0001FFFC, 0x00080006, (u32) &data_ov066_02268cf8,
                                (u32) &data_ov066_02269400, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0,
                                (u32) &data_ov066_022697d4, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20,
                                (u32) &data_ov066_0226979c, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18,
                                (u32) &data_ov066_02269668, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0,
                                (u32) &data_ov066_02269684, 0x0001FFFC, 0x00080005, (u32) &data_ov066_02268d60,
                                (u32) &data_ov066_02269710, 0x0202FFFC, 0x00150015, (u32) &data_ov066_02268ce0,
                                (u32) &data_ov066_02268ea4, 0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20,
                                (u32) &data_ov066_02268f14, 0x0001FFFC, 0x00080006, (u32) &data_ov066_02268d88,
                                (u32) &data_ov066_02268fbc, 0x0202FFFC, 0x00150015, (u32) &data_ov066_02268ce0,
                                (u32) &data_ov066_02269064};
u32 data_ov066_0226c534[136] = {0x0302FFFC, 0x00080010, (u32) &data_ov066_02268cc0, (u32) &data_ov066_022696bc,
                                0x0402FFFC, 0x00040010, (u32) &data_ov066_02268ca8, (u32) &data_ov066_022694a8,
                                0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8, (u32) &data_ov066_02269224,
                                0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8, (u32) &data_ov066_022694c4,
                                0x0402FFFC, 0x000D0010, (u32) &data_ov066_02268d68, (u32) &data_ov066_02269240,
                                0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58, (u32) &data_ov066_02269198,
                                0x0402FFFC, 0x00070010, (u32) &data_ov066_02268cc8, (u32) &data_ov066_02269294,
                                0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58, (u32) &data_ov066_02268ec0,
                                0x0402FFFC, 0x000A0010, (u32) &data_ov066_02268d58, (u32) &data_ov066_022692b0,
                                0x0302FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_02269160,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_02268f30,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20, (u32) &data_ov066_0226909c,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8, (u32) &data_ov066_02269304,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0, (u32) &data_ov066_02269780,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_0226917c,
                                0x0302FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_022692e8,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_022692e8,
                                0x0001FFFC, 0x00080005, (u32) &data_ov066_02268d08, (u32) &data_ov066_02269048,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20, (u32) &data_ov066_022693ac,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8, (u32) &data_ov066_022690f0,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cb8, (u32) &data_ov066_02268f4c,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0, (u32) &data_ov066_0226910c,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_02269278,
                                0x0001FFFC, 0x00080005, (u32) &data_ov066_02268ca0, (u32) &data_ov066_022693c8,
                                0x0001FFFC, 0x00080006, (u32) &data_ov066_02268cf8, (u32) &data_ov066_02269400,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0, (u32) &data_ov066_022697d4,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20, (u32) &data_ov066_0226979c,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d18, (u32) &data_ov066_02269668,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268cf0, (u32) &data_ov066_02269684,
                                0x0001FFFC, 0x00080005, (u32) &data_ov066_02268d60, (u32) &data_ov066_02269710,
                                0x0202FFFC, 0x00150015, (u32) &data_ov066_02268ce0, (u32) &data_ov066_02268ea4,
                                0x0001FFFC, 0x00180010, (u32) &data_ov066_02268d20, (u32) &data_ov066_02268f14,
                                0x0001FFFC, 0x00080006, (u32) &data_ov066_02268d88, (u32) &data_ov066_02268fbc,
                                0x0202FFFC, 0x00150015, (u32) &data_ov066_02268ce0, (u32) &data_ov066_02269064};
