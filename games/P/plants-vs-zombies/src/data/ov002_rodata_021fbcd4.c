/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov002_021fbc04[];
extern u8 data_ov002_0220550c[];

const u32 data_ov002_021fbcd4[5]  = {0xE92D4010, 0xE1A04000, 0xEBFFFFB5, 0xE1A00004, 0xE8BD8010};
const u32 data_ov002_021fbce8[7]  = {0xE92D4010, 0xE1A04000, 0xEBFFFFB0, 0xE1A00004, 0xEBF8E17B, 0xE1A00004, 0xE8BD8010};
const u32 data_ov002_021fbd04[49] = {
    0xE92D4038, 0xE1A05000, 0xE1A00002, 0xE5904000, 0xE1A02001, 0xE594400C, 0xE2851004, 0xE2822038, 0xE12FFF34, 0xE3A04000,
    0xE58540E8, 0xE2850004, 0xE5902000, 0xE3A01001, 0xE592200C, 0xE12FFF32, 0xE5C540D6, 0xE8BD8038, 0xE92D4038, 0xE1A05000,
    0xE59530E8, 0xE1A04002, 0xE3530000, 0x18BD8038, 0xE3510000, 0xE3A01702, 0x0A000007, 0xE3A0300A, 0xE3A02705, 0xE58510B0,
    0xE58530E8, 0xE58520AC, 0xE5902000, 0xE3A01000, 0xEA000007, 0xE3A02701, 0xE3A03064, 0xE2622000, 0xE58510B0, 0xE58530E8,
    0xE58520AC, 0xE5902000, 0xE3A01001, 0xE5922038, 0xE12FFF32, 0xE3A00001, 0xE58540EC, 0xE5C500D6, 0xE8BD8038};
const u32 data_ov002_021fbdc8[58] = {0xE59010E8, 0xE3510014,
                                     0xCA000005, 0xAA000011,
                                     0xE3510000, 0xDA000026,
                                     0xE351000A, 0x0A000007,
                                     0xEA000023, 0xE3510064,
                                     0xCA000001, 0x0A000010,
                                     0xEA00001F, 0xE351006E,
                                     0x0A000014, 0xEA00001C,
                                     0xE59010EC, 0xE2411001,
                                     0xE58010EC, 0xE3510000,
                                     0xD3A01014, 0xEA00000B,
                                     0xE59030AC, 0xE59020F0,
                                     0xE3E0103F, 0xE0432002,
                                     0xE58020AC, 0xE1510642,
                                     0xEA00000C, 0xE59010EC,
                                     0xE2411001, 0xE58010EC,
                                     0xE3510000, 0xD3A0106E,
                                     0xD58010E8, 0xEA000008,
                                     0xE59020AC, 0xE59010F0,
                                     0xE0822001, 0xE1A01642,
                                     0xE58020AC, 0xE3510D05,
                                     0xC3A01000, 0xC58010E8,
                                     0xC5C010D6, 0xE59FC000,
                                     0xE12FFF1C, (u32) &data_ov002_021fbc04,
                                     0xE92D4010, 0xE1A04000,
                                     0xEBFFFF29, 0xE59F2010,
                                     0xE3A01000, 0xE1A00004,
                                     0xE5842000, 0xE58410EC,
                                     0xE8BD8010, (u32) &data_ov002_0220550c};
