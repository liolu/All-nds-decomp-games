/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020bb758[];
extern u8 data_020bc438[];
extern u8 data_020be7a4[];
extern u8 data_020be814[];
extern u8 data_020bedd4[];
extern u8 data_020c03d4[];
extern u8 data_020c0444[];
extern u8 data_020c0cd4[];
extern u8 data_020c1a04[];
extern u8 data_020c1a94[];
extern u8 data_020c1aac[];
extern u8 data_020c1ac4[];
extern u8 data_020c1b54[];
extern u8 data_020c1b84[];
extern u8 data_020c1bfc[];
extern u8 data_020c1c5c[];
extern u8 data_020c1c74[];
extern u8 data_020e1710[];
extern u8 data_020e1790[];
extern u8 data_020e1bf0[];
extern u8 data_020e44b0[];
extern u8 data_020e44f0[];
extern u8 data_020e4510[];
extern u8 data_020e45d0[];
extern u8 data_020e48b0[];
extern u8 data_020e48d0[];
extern u8 data_020e48f0[];
extern u8 data_020e4950[];
extern u8 data_020e49d0[];
extern u8 data_020e4a10[];
extern u8 data_020e4a70[];
extern u8 data_020e4c10[];
extern u8 data_020e4cb0[];
extern u8 data_020e4f50[];
extern u8 data_020e5070[];
extern u8 data_020e50d0[];
extern u8 data_020e51b0[];
extern u8 data_020e51f0[];
extern u8 data_020e5250[];
extern u8 data_020e5310[];
extern u8 data_020e5330[];
extern u8 data_020e5350[];
extern u8 data_020e5410[];
extern u8 data_020e5e70[];
extern u8 data_020e5f30[];
extern u8 data_020e68d0[];
extern u8 data_020e6db4[];
extern u8 data_020e6e04[];
extern u8 data_020e6e2c[];
extern u8 data_020e6e54[];
extern u8 data_020e6e7c[];
extern u8 data_020e6ea4[];
extern u8 data_020e6ecc[];
extern u8 data_020e6ef4[];
extern u8 data_020e6f1c[];
extern u8 data_020e6f44[];
extern u8 data_020e6f6c[];
extern u8 data_020e71ec[];
extern u8 data_020e7214[];
extern u8 data_020e723c[];
extern u8 data_020e7264[];
extern u8 data_020e728c[];
extern u8 data_020e72b4[];
extern u8 data_020e72dc[];
extern u8 data_020e7304[];
extern u8 data_020e732c[];
extern u8 data_020e7354[];
extern u8 data_020e737c[];
extern u8 data_020e73a4[];
extern u8 data_020e73cc[];
extern u8 data_020e73f4[];
extern u8 data_020e741c[];
extern u8 data_020e7444[];
extern u8 data_020e746c[];
extern u8 data_020e7494[];
extern u8 data_020e750c[];
extern u8 data_020e755c[];
extern u8 data_020ea2a4[];
extern u8 data_020ea304[];
extern u8 data_020ea334[];
extern u8 data_020ea364[];
extern u8 data_020ea3c4[];
extern u8 data_020eacf4[];
extern u8 data_020ebef8[];
extern u8 data_020ebfa0[];
extern u8 data_020ec010[];
extern u8 data_020ec048[];
extern u8 data_020ec080[];
extern u8 data_020eef34[];
extern u8 data_020eef74[];
extern u8 data_020eefb4[];
extern u8 data_020eeff4[];
extern u8 data_020ef034[];
extern u8 data_020ef0b4[];
extern u8 data_020ef534[];
extern u8 data_020ef734[];
extern u8 data_020ef934[];
extern u8 data_020f0ccc[];
extern u8 data_020f0d14[];
extern u8 data_020f0d5c[];
extern u8 data_020f0da4[];
extern u8 data_020f0dec[];
extern u8 data_020f0e34[];
extern u8 data_020ffc40[];
extern u8 data_02102534[];
extern u8 data_02108568[];
extern u8 data_021093f4[];
extern u8 data_021094d4[];

u32 data_0212eab4[217] = {
    0x00010001, 0x00000000, 0xC19000C7, 0x01420123, 0x015A0127, 0x00C80132, 0x00C70100, 0x0142012A, 0x015A0127, 0x00C80132,
    0x01360105, 0x014700B6, 0x011C0102, 0x011900F1, 0x00A400FF, 0x01190100, 0x013A0118, 0x01370151, 0x0105012D, 0x00F1011F,
    0x00FF00F4, 0x011600E8, 0x00EC00FA, 0x00B6C17B, 0xC13D0147, 0x00A500F8, 0x0000FFFF, 0x00600041, 0x00730073, 0x0064006B,
    0x0060001F, 0x00600266, 0x006D0068, 0x00730072, 0x0073001F, 0x00640067, 0x006E001F, 0x026F026F, 0x0072006E, 0x006D0068,
    0x001F0266, 0x00640073, 0x006C0060, 0x0073001F, 0xFFFF006E, 0x00600073, 0x0064006A, 0x0073001F, 0x00640067, 0x006D001F,
    0x006C0074, 0x00640061, 0x001F0071, 0x0065006E, 0x0073001F, 0x00680071, 0x006A0062, 0x001F0072, 0x006E0278, 0x001F0074,
    0x00680061, 0x002D0063, 0x00410000, 0x00730060, 0x00640073, 0x002C0079, 0x006E0075, 0x00720074, 0x0062001F, 0x006D006E,
    0x00710073, 0x001F0064, 0x0026006B, 0x02709263, 0x00680074, 0x0064026F, 0x0060FFFF, 0x00750063, 0x00710064, 0x00640072,
    0x026F001F, 0x0074006E, 0x001F0071, 0x00600266, 0x006D0266, 0x00710064, 0x0060001F, 0x00730074, 0x006D0060, 0xFFFF0073,
    0x00640063, 0x006B001F, 0x00750064, 0x00649263, 0x001F0072, 0x00740270, 0x001F0064, 0x00640063, 0x006C001F, 0x00720068,
    0x00720064, 0x0000002D, 0x00600041, 0x00730073, 0x00730068, 0x001F0068, 0x006E0062, 0x0073006D, 0x006E0071, 0x006B001F,
    0x00600026, 0x0073006B, 0x00600071, 0x0072001F, 0x00740270, 0x00630060, 0x00600071, 0x026FFFFF, 0x00710064, 0x0073001F,
    0x0073006E, 0x006B0060, 0x00790068, 0x00600079, 0x00640071, 0x0068001F, 0x001F006B, 0x0074006D, 0x0064006C, 0x006E0071,
    0x0063001F, 0xFFFF0068, 0x0071026F, 0x00720064, 0x001F0064, 0x00680063, 0x00670062, 0x00600068, 0x00600071, 0x006E0073,
    0x0000002D, 0x00640055, 0x00720071, 0x00620074, 0x00640067, 0x0063001F, 0x00640068, 0x0040001F, 0x0079006D, 0x00670060,
    0x001F006B, 0x00730052, 0x00620068, 0x00640067, 0x0079001F, 0x001F0074, 0x00640266, 0x00680076, 0x006D006D, 0x006D0064,
    0x001F022B, 0x0063FFFF, 0x00640068, 0x0063001F, 0x001F0074, 0x006E0075, 0x001F0071, 0x00740051, 0x0063006D, 0x006D0064,
    0x00640061, 0x00680266, 0x006D006D, 0x0065001F, 0x00720064, 0x02660073, 0x006B0064, 0x02660064, 0x001F0073, 0x00600067,
    0x00730072, 0x0000002D, 0x00740049, 0x02660064, 0x001F0060, 0x006E0062, 0x0073006D, 0x00600071, 0x0064001F, 0x001F006B,
    0x02700064, 0x00680074, 0x006E026F, 0x0062001F, 0x006D006E, 0x00710073, 0x00710060, 0x006E0068, 0x026F001F, 0x00710060,
    0xFFFF0060, 0x006E0062, 0x0072006D, 0x02660064, 0x00680074, 0x001F0071, 0x0060006B, 0x001F0072, 0x00600061, 0x00600079,
    0x001F0072, 0x026F0060, 0x0072006E, 0x00600073, 0x00600063, 0x002D0072, 0x00000000};
u32 data_0212ee18[218] = {0x00000003, (u32) &data_020c1ac4,
                          0x00000005, (u32) &data_020e71ec,
                          0x00000005, (u32) &data_020e7214,
                          0x00000003, (u32) &data_020c1aac,
                          0x00000003, (u32) &data_020c1b84,
                          0x00000004, (u32) &data_020e44b0,
                          0x00000005, (u32) &data_020e723c,
                          0x00000005, (u32) &data_020e7264,
                          0x00000006, (u32) &data_020ea2a4,
                          0x00000005, (u32) &data_020e728c,
                          0x00000004, (u32) &data_020e44f0,
                          0x00000004, (u32) &data_020e4510,
                          0x00000004, (u32) &data_020e45d0,
                          0x00000005, (u32) &data_020e72b4,
                          0x00000005, (u32) &data_020e72dc,
                          0x00000006, (u32) &data_020ea304,
                          0x00000006, (u32) &data_020ea334,
                          0x00000006, (u32) &data_020ea364,
                          0x00000009, (u32) &data_020f0ccc,
                          0x00000005, (u32) &data_020e7304,
                          0x00000004, (u32) &data_020e48b0,
                          0x00000004, (u32) &data_020e48d0,
                          0x00000004, (u32) &data_020e48f0,
                          0x00000003, (u32) &data_020c1bfc,
                          0x00000004, (u32) &data_020e4950,
                          0x00000006, (u32) &data_020ea3c4,
                          0x00000007, (u32) &data_020ebef8,
                          0x00000005, (u32) &data_020e732c,
                          0x00000004, (u32) &data_020e49d0,
                          0x00000004, (u32) &data_020e4a10,
                          0x00000004, (u32) &data_020e4a70,
                          0x00000004, (u32) &data_020e1bf0,
                          0x00000005, (u32) &data_020e7354,
                          0x00000004, (u32) &data_020e4c10,
                          0x00000005, (u32) &data_020e737c,
                          0x00000004, (u32) &data_020e4cb0,
                          0x00000005, (u32) &data_020e73a4,
                          0x00000005, (u32) &data_020e73cc,
                          0x00000004, (u32) &data_020e4f50,
                          0x00000003, (u32) &data_020c1b54,
                          0x00000004, (u32) &data_020e5070,
                          0x00000004, (u32) &data_020e50d0,
                          0x00000002, (u32) &data_020be7a4,
                          0x00000002, (u32) &data_020be814,
                          0x00000004, (u32) &data_020e51b0,
                          0x00000004, (u32) &data_020e51f0,
                          0x00000004, (u32) &data_020e5250,
                          0x00000004, (u32) &data_020e5310,
                          0x00000004, (u32) &data_020e5330,
                          0x00000004, (u32) &data_020e5350,
                          0x00000004, (u32) &data_020e5410,
                          0x00000008, (u32) &data_020eef34,
                          0x00000009, (u32) &data_020f0d14,
                          0x00000009, (u32) &data_020f0d5c,
                          0x00000008, (u32) &data_020eef74,
                          0x00000008, (u32) &data_020eefb4,
                          0x00000009, (u32) &data_020f0da4,
                          0x00000009, (u32) &data_020f0dec,
                          0x00000008, (u32) &data_020eeff4,
                          0x00000009, (u32) &data_020f0e34,
                          0x00000005, (u32) &data_020e73f4,
                          0x00000001, (u32) &data_020bb758,
                          0x00000008, (u32) &data_020ef034,
                          0x00000005, (u32) &data_020e741c,
                          0x00000005, (u32) &data_020e7444,
                          0x00000005, (u32) &data_020e746c,
                          0x00000008, (u32) &data_020ef0b4,
                          0x00000001, (u32) &data_020bc438,
                          0x00000003, (u32) &data_020c1a04,
                          0x00000003, (u32) &data_020c1a94,
                          0x00000002, (u32) &data_020c03d4,
                          0x00000003, (u32) &data_020c1c74,
                          0x00000003, (u32) &data_020c1c5c,
                          0x00000007, (u32) &data_020ebfa0,
                          0x00000005, (u32) &data_020e7494,
                          0x00000002, (u32) &data_020c0cd4,
                          0x00000002, (u32) &data_020c0444,
                          0x00000004, (u32) &data_020e5e70,
                          0x00000006, (u32) &data_020eacf4,
                          0x00000010, (u32) &data_020ffc40,
                          0x00000004, (u32) &data_020e5f30,
                          0x00000007, (u32) &data_020ec010,
                          0x00000007, (u32) &data_020ec048,
                          0x00000012, (u32) &data_02102534,
                          0x00000007, (u32) &data_020ec080,
                          0x0000001A, (u32) &data_02108568,
                          0x0000001C, (u32) &data_021093f4,
                          0x00000002, (u32) &data_020bedd4,
                          0x0000001C, (u32) &data_021094d4,
                          0x00000008, (u32) &data_020ef534,
                          0x00000008, (u32) &data_020ef734,
                          0x00000008, (u32) &data_020ef934,
                          0x00000005, (u32) &data_020e750c,
                          0x00000004, (u32) &data_020e68d0,
                          0x00000005, (u32) &data_020e755c,
                          0x00000004, (u32) &data_020e1710,
                          0x00000005, (u32) &data_020e6db4,
                          0x00000004, (u32) &data_020e1790,
                          0x00000005, (u32) &data_020e6e04,
                          0x00000005, (u32) &data_020e6e2c,
                          0x00000005, (u32) &data_020e6e54,
                          0x00000005, (u32) &data_020e6e7c,
                          0x00000005, (u32) &data_020e6ea4,
                          0x00000005, (u32) &data_020e6ecc,
                          0x00000005, (u32) &data_020e6ef4,
                          0x00000005, (u32) &data_020e6f1c,
                          0x00000005, (u32) &data_020e6f44,
                          0x00000005, (u32) &data_020e6f6c,
                          0x00000000, 0x00000000};
