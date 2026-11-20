/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_021583d8[];
extern u8 data_02158458[];
extern u8 data_02158488[];
extern u8 data_02158498[];
extern u8 data_02158550[];
extern u8 data_02158574[];
extern u8 data_021585b0[];
extern u8 data_021586c4[];
extern u8 data_021586d0[];
extern u8 data_02158700[];
extern u8 data_02158778[];
extern u8 data_02158844[];
extern u8 data_02158868[];
extern u8 data_02158880[];
extern u8 data_021588e0[];
extern u8 data_0215897c[];
extern u8 data_021589ac[];
extern u8 data_021589c4[];
extern u8 data_02158ab4[];
extern u8 data_02158b08[];
extern u8 data_02158b68[];
extern u8 data_02158d9c[];
extern u8 data_02158df0[];
extern u8 data_02158e08[];
extern u8 data_02158f18[];
extern u8 data_02158f38[];
extern u8 data_02159878[];
extern u8 data_02159b78[];
extern u8 data_02159be8[];
extern u8 data_0215a248[];
extern u8 data_0215a288[];
extern u8 data_0215a358[];
extern u8 data_0215aa48[];
extern u8 data_0215acc8[];
extern u8 data_0215adf8[];
extern u8 data_0215ae98[];
extern u8 data_0215af98[];
extern u8 data_0215b560[];
extern u8 data_0215b650[];
extern u8 data_0215bb78[];
extern u8 data_0215bda8[];
extern u8 data_0215c1e0[];
extern u8 data_0215c26c[];
extern u8 data_0215c2a8[];
extern u8 data_0215c5f0[];
extern u8 data_0215c618[];
extern u8 data_0215cc34[];
extern u8 data_0215cdfc[];
extern u8 data_0215cebc[];
extern u8 data_0215d894[];
extern u8 data_0215d954[];
extern u8 data_0215db04[];
extern u8 data_0215e2fc[];
extern u8 data_0215e660[];
extern u8 data_0215e98c[];
extern u8 data_0215e9c4[];
extern u8 data_0215ec10[];
extern u8 data_0215edec[];
extern u8 data_0215efe4[];
extern u8 data_0215f0c4[];
extern u8 data_0215f5b0[];
extern u8 data_0215f71c[];
extern u8 data_0215f9a0[];
extern u8 data_0215fe78[];
extern u8 data_0215ff78[];
extern u8 data_02160058[];
extern u8 data_02160678[];
extern u8 data_021609f8[];
extern u8 data_02160b14[];
extern u8 data_02160d30[];
extern u8 data_02160de4[];
extern u8 data_02160f4c[];
extern u8 data_0216121c[];
extern u8 data_021612ac[];
extern u8 data_02161968[];
extern u8 data_021622c8[];
extern u8 data_02162750[];
extern u8 data_02162d78[];

const u32 data_0209f900[147] = {0x00FF5050,           0x7FFFFFFF,           0x00000000,
                                0x00000000,           (u32) &data_0215b650, (u32) &data_0215cdfc,
                                (u32) &data_02160678, (u32) &data_02158868, (u32) &data_0215c1e0,
                                (u32) &data_021589c4, 0x15151515,           0x00FF1515,
                                0x7FFFFFFF,           0x00000000,           0x00000000,
                                (u32) &data_02158458, (u32) &data_02158550, (u32) &data_02158b68,
                                (u32) &data_0215c26c, (u32) &data_0215cebc, (u32) &data_021586d0,
                                0x15151515,           0x00FF1515,           0x7FFFFFFF,
                                0x00000000,           0x00000000,           (u32) &data_02158844,
                                (u32) &data_021586c4, (u32) &data_02158700, (u32) &data_02158ab4,
                                (u32) &data_02158574, (u32) &data_02158778, 0x15151515,
                                0x00FF1515,           0x7FFFFFFF,           0x00000000,
                                0x00000000,           (u32) &data_02158498, (u32) &data_02158880,
                                (u32) &data_0215bb78, (u32) &data_02158f38, (u32) &data_021588e0,
                                (u32) &data_02159878, 0x15151515,           0x00FF1515,
                                0x7FFFFFFF,           0x00000000,           0x00000000,
                                (u32) &data_02158488, (u32) &data_021589ac, (u32) &data_0215ae98,
                                (u32) &data_02158b08, (u32) &data_02158df0, (u32) &data_02159be8,
                                0x15151515,           0x00FF1515,           0x7FFFFFFF,
                                0x00000000,           0x00000000,           (u32) &data_0215c618,
                                (u32) &data_0216121c, (u32) &data_02162750, (u32) &data_02162d78,
                                (u32) &data_021609f8, (u32) &data_0215e2fc, 0x4C4C4C4C,
                                0x00FF4C4C,           0x7FFF4342,           0x00000000,
                                0x00000000,           (u32) &data_0215adf8, (u32) &data_02161968,
                                (u32) &data_02158f18, (u32) &data_021612ac, (u32) &data_02160b14,
                                (u32) &data_021622c8, 0x2B2B2B2B,           0x00FF2B2B,
                                0x7FFF0302,           0x00000000,           0x00000000,
                                (u32) &data_0215a248, (u32) &data_0215af98, (u32) &data_0215bda8,
                                (u32) &data_0215cc34, (u32) &data_0215d954, (u32) &data_0215b560,
                                0x13131313,           0x00041313,           0x7FFF1514,
                                0x00000000,           0x00000000,           (u32) &data_02159b78,
                                (u32) &data_0215fe78, (u32) &data_02160d30, (u32) &data_0215f5b0,
                                (u32) &data_0215e98c, (u32) &data_0215e9c4, 0x07070707,
                                0x00050707,           0x7FFF1514,           0x00000000,
                                0x00000000,           (u32) &data_0215a358, (u32) &data_0215ff78,
                                (u32) &data_02160de4, (u32) &data_0215f71c, (u32) &data_0215ec10,
                                (u32) &data_0215edec, 0x07070707,           0x00050707,
                                0x7FFF3534,           0x00000000,           0x00000000,
                                (u32) &data_0215a288, (u32) &data_02160058, (u32) &data_02160f4c,
                                (u32) &data_0215f9a0, (u32) &data_0215efe4, (u32) &data_0215f0c4,
                                0x07070707,           0x00050707,           0x7FFF3736,
                                0x00000000,           0x00000000,           (u32) &data_02158d9c,
                                (u32) &data_0215aa48, (u32) &data_0215c5f0, (u32) &data_0215db04,
                                (u32) &data_0215e660, (u32) &data_0215d894, 0x05050505,
                                0x00020505,           0x7FFF0100,           0x00000000,
                                0x00000000,           (u32) &data_021583d8, (u32) &data_0215acc8,
                                (u32) &data_02158e08, (u32) &data_0215897c, (u32) &data_0215c2a8,
                                (u32) &data_021585b0, 0x2B2B2B2B,           0x00FF2B2B,
                                0x7FFF0302,           0x00000000,           0x00000000};
