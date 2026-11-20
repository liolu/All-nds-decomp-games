/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02146018[];
extern u8 data_02146030[];
extern u8 data_02146048[];
extern u8 data_02146060[];
extern u8 data_02146078[];
extern u8 data_02146090[];
extern u8 data_021460a8[];
extern u8 data_021460c0[];
extern u8 data_021460d8[];
extern u8 data_021460f0[];
extern u8 data_02146108[];
extern u8 data_02146120[];
extern u8 data_02146138[];
extern u8 data_02146150[];
extern u8 data_02146168[];
extern u8 data_02146180[];
extern u8 data_02146198[];
extern u8 data_021461b0[];
extern u8 data_021461c8[];
extern u8 data_021461e0[];
extern u8 data_021461f8[];
extern u8 data_02146210[];
extern u8 data_02146228[];
extern u8 data_02146240[];
extern u8 data_02146258[];
extern u8 data_02146270[];
extern u8 data_02146288[];
extern u8 data_021462a0[];
extern u8 data_021462b8[];
extern u8 data_021462d0[];
extern u8 data_021462e8[];
extern u8 data_02146300[];
extern u8 data_02146318[];
extern u8 data_02146330[];
extern u8 data_02146348[];
extern u8 data_02146360[];
extern u8 data_02146378[];
extern u8 data_02146390[];
extern u8 data_021463a8[];
extern u8 data_021463c0[];
extern u8 data_021463d8[];
extern u8 data_021463f0[];
extern u8 data_02146408[];
extern u8 data_02146420[];
extern u8 data_02146438[];
extern u8 data_02146450[];
extern u8 data_02146468[];
extern u8 data_02146480[];
extern u8 data_02146498[];
extern u8 data_021464b0[];
extern u8 data_021464c8[];
extern u8 data_021464e0[];
extern u8 data_021464f8[];
extern u8 data_02146510[];
extern u8 data_02146528[];
extern u8 data_02146540[];
extern u8 data_02146558[];
extern u8 data_02146570[];
extern u8 data_02146588[];
extern u8 data_021465a0[];
extern u8 data_021465b8[];
extern u8 data_021465d0[];
extern u8 data_021465e8[];
extern u8 data_02146600[];
extern u8 data_02146618[];
extern u8 data_02146630[];
extern u8 data_02146648[];
extern u8 data_02146660[];
extern u8 data_02146678[];
extern u8 data_02146690[];
extern u8 data_021466a8[];
extern u8 data_021466c0[];
extern u8 data_021466d8[];
extern u8 data_021466f0[];
extern u8 data_02146708[];
extern u8 data_02146720[];
extern u8 data_02146738[];
extern u8 data_02146750[];
extern u8 data_02146768[];
extern u8 data_02146780[];
extern u8 data_02146798[];
extern u8 data_021467b0[];
extern u8 data_021467c8[];
extern u8 data_021467e0[];
extern u8 data_021467f8[];
extern u8 data_02146810[];
extern u8 data_02146828[];
extern u8 data_02146840[];
extern u8 data_02146858[];
extern u8 data_02146870[];
extern u8 data_02146888[];
extern u8 data_021468a0[];
extern u8 data_021468b8[];
extern u8 data_021468d0[];
extern u8 data_021468e8[];
extern u8 data_02146900[];
extern u8 data_02146918[];
extern u8 data_02146930[];
extern u8 data_02146948[];
extern u8 data_02146960[];
extern u8 data_02146978[];
extern u8 data_02146990[];
extern u8 data_021469a8[];
extern u8 data_021469c0[];
extern u8 data_021469d8[];
extern u8 data_021469f0[];
extern u8 data_02146a08[];
extern u8 data_02146a20[];
extern u8 data_02146a38[];
extern u8 data_02146a50[];
extern u8 data_02146a68[];
extern u8 data_02146a80[];
extern u8 data_02146a98[];
extern u8 data_02146ab0[];
extern u8 data_02146ac8[];
extern u8 data_02146ae0[];
extern u8 data_02146af8[];
extern u8 data_02146b10[];
extern u8 data_02146b28[];
extern u8 data_02146b40[];
extern u8 data_02146b58[];
extern u8 data_02146b70[];
extern u8 data_02146b88[];
extern u8 data_02146ba0[];
extern u8 data_02146bb8[];
extern u8 data_02146bd0[];
extern u8 data_02146be8[];
extern u8 data_02146c00[];

u32 data_02147f30[128] = {
    (u32) &data_02146720, (u32) &data_02146b70, (u32) &data_02146be8, (u32) &data_02146b58, (u32) &data_02146a80,
    (u32) &data_02146480, (u32) &data_021469c0, (u32) &data_021469d8, (u32) &data_02146ac8, (u32) &data_021468b8,
    (u32) &data_021464f8, (u32) &data_02146858, (u32) &data_021467e0, (u32) &data_021465a0, (u32) &data_021467c8,
    (u32) &data_02146c00, (u32) &data_021466a8, (u32) &data_02146660, (u32) &data_02146678, (u32) &data_021466c0,
    (u32) &data_02146648, (u32) &data_02146738, (u32) &data_02146750, (u32) &data_02146540, (u32) &data_02146468,
    (u32) &data_021467f8, (u32) &data_02146810, (u32) &data_02146558, (u32) &data_02146888, (u32) &data_021468d0,
    (u32) &data_02146288, (u32) &data_02146930, (u32) &data_02146978, (u32) &data_021461b0, (u32) &data_021469f0,
    (u32) &data_02146120, (u32) &data_02146a38, (u32) &data_02146a98, (u32) &data_02146ae0, (u32) &data_021461e0,
    (u32) &data_021462e8, (u32) &data_02146ba0, (u32) &data_02146bb8, (u32) &data_02146b88, (u32) &data_02146030,
    (u32) &data_02146060, (u32) &data_02146ab0, (u32) &data_02146a68, (u32) &data_021460c0, (u32) &data_02146108,
    (u32) &data_02146138, (u32) &data_02146948, (u32) &data_02146180, (u32) &data_021461c8, (u32) &data_021461f8,
    (u32) &data_02146828, (u32) &data_02146240, (u32) &data_021462a0, (u32) &data_021462b8, (u32) &data_02146708,
    (u32) &data_02146318, (u32) &data_02146360, (u32) &data_02146630, (u32) &data_021463a8, (u32) &data_021463f0,
    (u32) &data_02146438, (u32) &data_02146450, (u32) &data_02146498, (u32) &data_021464c8, (u32) &data_02146510,
    (u32) &data_02146588, (u32) &data_021465b8, (u32) &data_02146600, (u32) &data_02146690, (u32) &data_021466d8,
    (u32) &data_02146768, (u32) &data_02146798, (u32) &data_02146840, (u32) &data_021468a0, (u32) &data_021468e8,
    (u32) &data_02146990, (u32) &data_02146a08, (u32) &data_02146a50, (u32) &data_02146af8, (u32) &data_02146b28,
    (u32) &data_02146bd0, (u32) &data_02146048, (u32) &data_02146078, (u32) &data_021460d8, (u32) &data_02146150,
    (u32) &data_02146198, (u32) &data_02146210, (u32) &data_02146258, (u32) &data_021462d0, (u32) &data_02146330,
    (u32) &data_02146378, (u32) &data_021463d8, (u32) &data_02146528, (u32) &data_021464b0, (u32) &data_02146570,
    (u32) &data_021465e8, (u32) &data_021466f0, (u32) &data_02146780, (u32) &data_02146870, (u32) &data_02146960,
    (u32) &data_02146a20, (u32) &data_02146b10, (u32) &data_02146018, (u32) &data_021460a8, (u32) &data_02146168,
    (u32) &data_02146228, (u32) &data_02146300, (u32) &data_02146408, (u32) &data_021464e0, (u32) &data_02146618,
    (u32) &data_021467b0, (u32) &data_021469a8, (u32) &data_02146b40, (u32) &data_021460f0, (u32) &data_02146270,
    (u32) &data_021463c0, (u32) &data_021465d0, (u32) &data_02146900, (u32) &data_02146090, (u32) &data_02146348,
    (u32) &data_02146918, (u32) &data_02146420, (u32) &data_02146390};
u32 data_02148130[129] = {
    0x00000100, 0xB18CA9AD, 0xA96BA54A, 0x9CE7A129, 0x98E6A108, 0x908490A5, 0x84218842, 0x88638421, 0x90A48C63, 0x98C694A5,
    0x94C6A549, 0x8C848C63, 0x844194A5, 0x80008421, 0x88428842, 0x8C638021, 0x84218000, 0x88628421, 0x8C63A507, 0xDEF78842,
    0xB9CEC652, 0xD318D2D7, 0xCEB5CED6, 0xD2D68421, 0xDB18CED5, 0x8000CED6, 0xB9EFD2F7, 0xD293DAF6, 0xDF39D2D6, 0xCA74DB39,
    0xD2B4B5AE, 0xD292D6B4, 0x8000D272, 0xC210A94A, 0xCEB4BE30, 0xCE52CE92, 0xC630C64F, 0xC670C231, 0xDEF7DAD6, 0xCA11CA73,
    0xCE51C5D0, 0xCA52C20E, 0xB1ADCE73, 0xC631C20F, 0x94A5B5EF, 0xFB97CE73, 0xEF37FBB9, 0xE75AE718, 0xEB7BF778, 0xE318EF5A,
    0xF3B9EB5A, 0x8000FBD9, 0xBE13C273, 0xBDCCBA2D, 0xB94DC1EE, 0xCA51C58F, 0xFBDBCA50, 0xE739EB38, 0xBE11B5AC, 0xC5EFB1AB,
    0xF7DEEF9C, 0xB9F1F7DE, 0xCE50A94E, 0xC1EDF7BD, 0xB1909DB7, 0xDAD5BE73, 0xAD4998C5, 0x8842A5B7, 0xCE70D294, 0x8842D6B2,
    0xD22DC60C, 0xD2D1A9AA, 0xA5D8A5D8, 0xA5D8A5D8, 0xA1B7A9F8, 0x9DB7A1B7, 0xB16AA1D7, 0xB68BB9CA, 0xA1D7D66F, 0xA5F8A1D8,
    0x9DB7A1D8, 0xD64DA5F8, 0xCAB2DEB0, 0xC8EFA928, 0xAA2BBDAC, 0xA1B7ADEF, 0xA1D7A5F7, 0xA1B7A1B7, 0xCA2FDA6F, 0xC12EDD94,
    0xB230CD50, 0xA1B78442, 0xCE0A9DD7, 0xB68EC5A8, 0xA5D7AA6D, 0xE2D1D64B, 0xC613A5D8, 0x9DB7A5F8, 0xA1D89DB8, 0xCE4FA5D8,
    0xA1D8A1B8, 0xA1D8E2F4, 0xE536DD54, 0xEF59D5D1, 0xFBDEA9F9, 0xD4D2FBDD, 0xA9F9D531, 0xA5F8A5D8, 0xFBDEFBDD, 0xCA2DEF7B,
    0xFBDDA9F8, 0xCDAEF39C, 0xFBDEA9D8, 0xA5F7A617, 0xA5F8A5D8, 0xE716A5D8, 0xA1D7A5F8, 0xAB11F7BA, 0xA1D7A6CF, 0xA5B7AA18,
    0xA5F8C294, 0x9F0FA5F8, 0xFBDBA5D8, 0xA1D8FBDE, 0xFBBBD6B5, 0xDAD68000, 0xC694F7BB, 0xDAB5E739, 0xEF5AC693};
