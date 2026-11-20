/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov007_02268d00[];
extern u8 data_ov007_02268d08[];
extern u8 data_ov007_0226912c[];
extern u8 data_ov007_02269180[];
extern u8 data_ov007_0226919c[];
extern u8 data_ov007_022693e8[];
extern u8 data_ov007_02269404[];
extern u8 data_ov007_0226943c[];

#pragma explicit_zero_data on
u32 data_ov007_02269d10[4] = {0};
#pragma explicit_zero_data on
u32 data_ov007_02269d20[9]  = {0};
u32 data_ov007_02269d44[25] = {0x0000FFFC, 0x00400040, (u32) &data_ov007_02268d08, (u32) &data_ov007_0226943c,
                               0x0000FFFC, 0x00400040, (u32) &data_ov007_02268d08, (u32) &data_ov007_0226912c,
                               0x0200FFFC, 0x000C000C, (u32) &data_ov007_02268d00, (u32) &data_ov007_02269404,
                               0x0200FFFC, 0x000C000C, (u32) &data_ov007_02268d00, (u32) &data_ov007_022693e8,
                               0x0100FFFC, 0x000C000C, (u32) &data_ov007_02268d00, (u32) &data_ov007_02269180,
                               0x0100FFFC, 0x000C000C, (u32) &data_ov007_02268d00, (u32) &data_ov007_0226919c,
                               0x0100FFFC};
