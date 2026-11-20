/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020bba48[];
extern u8 data_020bc568[];
extern u8 data_020bca40[];
extern u8 data_020bcb68[];
extern u8 data_020bcdb8[];
extern u8 data_020bd280[];
extern u8 data_020bd3f8[];
extern u8 data_020c58cc[];
extern u8 data_020c5c14[];
extern u8 data_020c5d2c[];
extern u8 data_020c5fe8[];
extern u8 data_020c8a04[];
extern u8 data_020cc6d4[];
extern u8 data_020cfe80[];
extern u8 data_020cff44[];
extern u8 data_020d0254[];
extern u8 data_020d1e38[];
extern u8 data_020d27d8[];
extern u8 data_020d57dc[];
extern u8 data_020d93cc[];
extern u8 data_020da194[];
extern u8 data_020dbaf4[];
extern u8 data_020dc3ec[];
extern u8 data_020dc964[];
extern u8 data_020deaa4[];
extern u8 data_020defe4[];
extern u8 data_020df118[];
extern u8 data_020df284[];
extern u8 data_020dfd20[];
extern u8 data_020e0944[];
extern u8 data_020e0a78[];
extern u8 data_020e0a94[];

u32 data_021161f0[100] = {
    0x0006FFFC,           0x00040004,           (u32) &data_020bc568, (u32) &data_020dc3ec, 0x0011FFFC,
    0x00150015,           (u32) &data_020bd3f8, (u32) &data_020d1e38, 0x0011FFFC,           0x00050005,
    (u32) &data_020bcdb8, (u32) &data_020d27d8, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48,
    (u32) &data_020da194, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020dfd20,
    0x0011FFFC,           0x000F000B,           (u32) &data_020bd280, (u32) &data_020c5c14, 0x0011FFFC,
    0x000A000B,           (u32) &data_020bba48, (u32) &data_020c5d2c, 0x0011FFFC,           0x000B000B,
    (u32) &data_020bcb68, (u32) &data_020dc964, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020c5fe8, 0x0011FFFC,           0x00090009,           (u32) &data_020bca40, (u32) &data_020df118,
    0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020cfe80, 0x0011FFFC,
    0x00050005,           (u32) &data_020bcdb8, (u32) &data_020cff44, 0x0011FFFC,           0x000A000B,
    (u32) &data_020bba48, (u32) &data_020d57dc, 0x0011FFFC,           0x00150015,           (u32) &data_020bd3f8,
    (u32) &data_020e0944, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020c8a04,
    0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020c58cc, 0x0011FFFC,
    0x000B000B,           (u32) &data_020bcb68, (u32) &data_020dbaf4, 0x0011FFFC,           0x000F000B,
    (u32) &data_020bd280, (u32) &data_020e0a78, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48,
    (u32) &data_020e0a94, 0x0011FFFC,           0x000B000B,           (u32) &data_020bcb68, (u32) &data_020d93cc,
    0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8, (u32) &data_020cc6d4, 0x0011FFFC,
    0x00090009,           (u32) &data_020bca40, (u32) &data_020d0254, 0x0011FFFC,           0x000B000B,
    (u32) &data_020bcb68, (u32) &data_020deaa4, 0x0011FFFC,           0x00050005,           (u32) &data_020bcdb8,
    (u32) &data_020df284, 0x0011FFFC,           0x000A000B,           (u32) &data_020bba48, (u32) &data_020defe4};
u32 data_02116380[101] = {
    0x00010000, 0x00000000, 0x00F00100, 0xC12E0101, 0x010B0101, 0x010200EE, 0x010B00F7, 0x000000F8, 0x00640052, 0x001F0073,
    0x006E0278, 0x00710074, 0x0072001F, 0x00710062, 0x00640064, 0x001F006D, 0x0060006D, 0x0064006C, 0x0073FFFF, 0x001F006E,
    0x0060006C, 0x00620073, 0x001F0067, 0x006E0278, 0x00710074, 0x0043001F, 0x002D0052, 0x004B0000, 0x001F0064, 0x006E006D,
    0x001F006C, 0x00260063, 0x00629263, 0x00600071, 0x001F006D, 0x00720064, 0xFFFF0073, 0x00740060, 0x00720072, 0x001F0068,
    0x00640062, 0x0074006B, 0x001F0068, 0x00640063, 0x006B001F, 0x001F0060, 0x00520043, 0x0000002D, 0x006B0048, 0x0073001F,
    0x006E0074, 0x006D001F, 0x006C006E, 0x001F0064, 0x00600072, 0x8A5F0071, 0x0270FFFF, 0x00640074, 0x006B006B, 0x001F006E,
    0x00740072, 0x001F006B, 0x00520043, 0x0000002D, 0x00640043, 0x006D0068, 0x004D001F, 0x006C0060, 0x001F0064, 0x006D0064,
    0x00720073, 0x0071026F, 0x00620068, 0x00730067, 0x0063FFFF, 0x006C0064, 0x0063001F, 0x00680064, 0x0064006D, 0x001F0072,
    0x00520043, 0x001F002D, 0x00520000, 0x001F0064, 0x006E0062, 0x0068026F, 0x00710060, 0x001F925F, 0x006B0064, 0x006D001F,
    0x006C006E, 0x00710061, 0xFFFF0064, 0x00640063, 0x0073001F, 0x001F0074, 0x006E0062, 0x0072006D, 0x006B006E, 0x002D0060,
    0x00000000};
