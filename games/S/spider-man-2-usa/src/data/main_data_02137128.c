/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02136120[];
extern u8 data_02136144[];
extern u8 data_02136168[];
extern u8 data_0213618c[];
extern u8 data_021361b0[];
extern u8 data_021361d4[];
extern u8 data_021361f8[];
extern u8 data_0213621c[];
extern u8 data_02136240[];
extern u8 data_02136264[];
extern u8 data_02136288[];
extern u8 data_021362ac[];
extern u8 data_021362d0[];
extern u8 data_02136318[];
extern u8 data_0213633c[];
extern u8 data_02136360[];
extern u8 data_02136384[];
extern u8 data_021363a8[];
extern u8 data_021363cc[];
extern u8 data_021363f0[];
extern u8 data_0213645c[];
extern u8 data_02136480[];
extern u8 data_021364a4[];
extern u8 data_021364c8[];
extern u8 data_021364ec[];
extern u8 data_02136510[];
extern u8 data_02136534[];
extern u8 data_02136558[];
extern u8 data_0213657c[];
extern u8 data_021365a0[];
extern u8 data_021365c4[];
extern u8 data_021365e8[];
extern u8 data_0213660c[];
extern u8 data_02136630[];
extern u8 data_02136654[];
extern u8 data_02136678[];
extern u8 data_0213669c[];
extern u8 data_021366c0[];
extern u8 data_021366e4[];
extern u8 data_02136708[];
extern u8 data_0213672c[];
extern u8 data_02136750[];
extern u8 data_02136774[];
extern u8 data_02136798[];
extern u8 data_021367bc[];
extern u8 data_021367e0[];
extern u8 data_02136804[];
extern u8 data_02136828[];
extern u8 data_0213684c[];
extern u8 data_02136870[];
extern u8 data_02136894[];
extern u8 data_021368b8[];
extern u8 data_021368dc[];
extern u8 data_02136900[];
extern u8 data_02136924[];
extern u8 data_02136948[];
extern u8 data_0213696c[];
extern u8 data_02136990[];
extern u8 data_021369b4[];
extern u8 data_021369d8[];
extern u8 data_021369fc[];
extern u8 data_02136a20[];
extern u8 data_02136a44[];
extern u8 data_02136a68[];
extern u8 data_02136a8c[];
extern u8 data_02136ab0[];
extern u8 data_02136ad4[];
extern u8 data_02136af8[];
extern u8 data_02136b1c[];
extern u8 data_02136b40[];
extern u8 data_02136b64[];
extern u8 data_02136b88[];
extern u8 data_02136bac[];
extern u8 data_02136bd0[];
extern u8 data_02136bf4[];
extern u8 data_02136c18[];
extern u8 data_02136c3c[];
extern u8 data_02136c60[];
extern u8 data_02136c84[];
extern u8 data_02136ca8[];
extern u8 data_02136ccc[];
extern u8 data_02136cf0[];
extern u8 data_02136d14[];
extern u8 data_02136d38[];
extern u8 data_02136d5c[];
extern u8 data_02136d80[];
extern u8 data_02136da4[];
extern u8 data_02136dc8[];
extern u8 data_02136dec[];
extern u8 data_02136e10[];
extern u8 data_02136e34[];
extern u8 data_02136e58[];
extern u8 data_02136e7c[];
extern u8 data_02136ea0[];
extern u8 data_02136ec4[];
extern u8 data_02136ee8[];
extern u8 data_02136f0c[];
extern u8 data_02136f30[];
extern u8 data_02136f54[];
extern u8 data_02136f78[];
extern u8 data_02136f9c[];
extern u8 data_02136fc0[];
extern u8 data_02136fe4[];
extern u8 data_02137008[];
extern u8 data_0213702c[];
extern u8 data_02137050[];
extern u8 data_02137074[];
extern u8 data_02137098[];
extern u8 data_021370bc[];
extern u8 data_021370e0[];
extern u8 data_02137104[];
extern u8 data_02150a68[];

u32 data_02137128[9]   = {0xE937E4A6, 0x410719C3,           0x00000000, 0x00000000, 0x0000001C,
                          0x00000000, (u32) &data_02150a68, 0x00000003, 0x00000000};
u32 data_0213714c[112] = {
    (u32) &data_021361b0, (u32) &data_021361f8, (u32) &data_02137104, (u32) &data_0213621c, (u32) &data_02136240,
    (u32) &data_02136264, (u32) &data_02137074, (u32) &data_02136288, (u32) &data_021362ac, (u32) &data_021362d0,
    (u32) &data_02136318, (u32) &data_0213633c, (u32) &data_02136360, (u32) &data_02136f54, (u32) &data_02136384,
    (u32) &data_021363a8, (u32) &data_021363cc, (u32) &data_02136ec4, (u32) &data_021363f0, (u32) &data_02136e34,
    (u32) &data_0213645c, (u32) &data_02136480, (u32) &data_021364a4, (u32) &data_021364c8, (u32) &data_021364ec,
    (u32) &data_02136510, (u32) &data_02136534, (u32) &data_02136d14, (u32) &data_02136558, (u32) &data_0213657c,
    (u32) &data_021365a0, (u32) &data_02136c84, (u32) &data_021365c4, (u32) &data_021365e8, (u32) &data_0213660c,
    (u32) &data_02136bf4, (u32) &data_02136630, (u32) &data_02136654, (u32) &data_02136678, (u32) &data_0213669c,
    (u32) &data_021366c0, (u32) &data_021366e4, (u32) &data_02136708, (u32) &data_02136ad4, (u32) &data_0213672c,
    (u32) &data_02136750, (u32) &data_02136774, (u32) &data_02136a44, (u32) &data_02136798, (u32) &data_021367bc,
    (u32) &data_021367e0, (u32) &data_021369b4, (u32) &data_02136804, (u32) &data_02136828, (u32) &data_0213684c,
    (u32) &data_02136870, (u32) &data_02136894, (u32) &data_021368b8, (u32) &data_021368dc, (u32) &data_02136900,
    (u32) &data_02136924, (u32) &data_02136948, (u32) &data_0213696c, (u32) &data_02136990, (u32) &data_021369d8,
    (u32) &data_021369fc, (u32) &data_02136a20, (u32) &data_02136a68, (u32) &data_02136a8c, (u32) &data_02136ab0,
    (u32) &data_02136af8, (u32) &data_02136b1c, (u32) &data_02136b40, (u32) &data_02136b64, (u32) &data_02136b88,
    (u32) &data_02136bac, (u32) &data_02136bd0, (u32) &data_02136c18, (u32) &data_02136c3c, (u32) &data_02136c60,
    (u32) &data_02136ca8, (u32) &data_02136ccc, (u32) &data_02136cf0, (u32) &data_02136d38, (u32) &data_02136d5c,
    (u32) &data_02136d80, (u32) &data_02136da4, (u32) &data_02136dc8, (u32) &data_02136dec, (u32) &data_02136e10,
    (u32) &data_02136e58, (u32) &data_02136e7c, (u32) &data_02136ea0, (u32) &data_02136ee8, (u32) &data_02136f0c,
    (u32) &data_02136f30, (u32) &data_02136f78, (u32) &data_02136f9c, (u32) &data_02136fc0, (u32) &data_02136fe4,
    (u32) &data_02137008, (u32) &data_0213702c, (u32) &data_02137050, (u32) &data_02137098, (u32) &data_021370bc,
    (u32) &data_021370e0, (u32) &data_02137128, (u32) &data_021361d4, (u32) &data_02136120, (u32) &data_02136144,
    (u32) &data_02136168, (u32) &data_0213618c};
