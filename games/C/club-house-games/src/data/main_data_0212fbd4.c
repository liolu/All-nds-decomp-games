/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020bad28[];
extern u8 data_020baef8[];
extern u8 data_020bb008[];
extern u8 data_020bb300[];
extern u8 data_020bb308[];
extern u8 data_020bb570[];
extern u8 data_020bbaf0[];
extern u8 data_020bbb08[];
extern u8 data_020bbb48[];
extern u8 data_020bbb50[];
extern u8 data_020bbd28[];
extern u8 data_020bbe58[];
extern u8 data_020bbe78[];
extern u8 data_020bbf30[];
extern u8 data_020bbf90[];
extern u8 data_020bbf98[];
extern u8 data_020bc038[];
extern u8 data_020bcaa8[];
extern u8 data_020bcab8[];
extern u8 data_020bcac0[];
extern u8 data_020bcac8[];
extern u8 data_020bcae0[];
extern u8 data_020bcae8[];
extern u8 data_020bcb80[];
extern u8 data_020bcbb8[];
extern u8 data_020bce80[];
extern u8 data_020bcf70[];
extern u8 data_020bd028[];
extern u8 data_020bd120[];
extern u8 data_020bd130[];
extern u8 data_020bd138[];
extern u8 data_020bd150[];
extern u8 data_020bd160[];
extern u8 data_020bd190[];
extern u8 data_020bd1e0[];
extern u8 data_020bd278[];
extern u8 data_020bd298[];
extern u8 data_020bd350[];
extern u8 data_020bd360[];
extern u8 data_020bd378[];
extern u8 data_020bd380[];
extern u8 data_020bd398[];
extern u8 data_020bd3a0[];
extern u8 data_020bd3b0[];
extern u8 data_020c8d30[];
extern u8 data_020d42a4[];
extern u8 data_020d4368[];
extern u8 data_020d449c[];
extern u8 data_020d4608[];
extern u8 data_020d46cc[];
extern u8 data_020d4790[];
extern u8 data_020d48c4[];
extern u8 data_020d4950[];
extern u8 data_020d4a4c[];
extern u8 data_020d4a84[];
extern u8 data_020d4b48[];
extern u8 data_020d4d94[];
extern u8 data_020d4fe0[];
extern u8 data_020d5114[];
extern u8 data_020d51bc[];
extern u8 data_020d52b8[];
extern u8 data_020d5398[];
extern u8 data_020d5440[];
extern u8 data_020d55e4[];
extern u8 data_020d56e0[];
extern u8 data_020d576c[];
extern u8 data_020d5830[];
extern u8 data_020d5910[];
extern u8 data_020d5964[];
extern u8 data_020d5a28[];
extern u8 data_020d5a98[];
extern u8 data_020d5ad0[];
extern u8 data_020d5b94[];
extern u8 data_020d5c74[];
extern u8 data_020d5d00[];
extern u8 data_020d5d54[];
extern u8 data_020d5d8c[];
extern u8 data_020d5de0[];
extern u8 data_020d5f4c[];
extern u8 data_020d5fbc[];
extern u8 data_020d5ff4[];
extern u8 data_020d60d4[];
extern u8 data_020d6198[];
extern u8 data_020d625c[];
extern u8 data_020d6320[];
extern u8 data_020d6438[];
extern u8 data_020d64e0[];

u32 data_0212fbd4[175] = {
    0x0006FFFC,           0x00100010,           (u32) &data_020bbaf0, (u32) &data_020d42a4, 0x0D05FFFC,
    0x00040004,           (u32) &data_020bb308, (u32) &data_020d4368, 0x0D05FFFC,           0x000C0010,
    (u32) &data_020bcbb8, (u32) &data_020d449c, 0x0D05FFFC,           0x000C0008,           (u32) &data_020bc038,
    (u32) &data_020d4608, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bbf98, (u32) &data_020d46cc,
    0x0D05FFFC,           0x00080010,           (u32) &data_020bb570, (u32) &data_020d4790, 0x0D05FFFC,
    0x00080008,           (u32) &data_020bd278, (u32) &data_020d48c4, 0x0D05FFFC,           0x00080010,
    (u32) &data_020bd1e0, (u32) &data_020d4950, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bd190,
    (u32) &data_020d4a4c, 0x0D05FFFC,           0x000C0008,           (u32) &data_020bbe78, (u32) &data_020d4a84,
    0x0D05FFFC,           0x000C0010,           (u32) &data_020bbd28, (u32) &data_020d4b48, 0x0D05FFFC,
    0x000C0010,           (u32) &data_020bbf90, (u32) &data_020d4d94, 0x0D05FFFC,           0x000C0008,
    (u32) &data_020bd3b0, (u32) &data_020d4fe0, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bbb50,
    (u32) &data_020d5114, 0x0D05FFFC,           0x00080010,           (u32) &data_020bbb48, (u32) &data_020d51bc,
    0x0D05FFFC,           0x00080008,           (u32) &data_020bd398, (u32) &data_020d52b8, 0x0D05FFFC,
    0x00080010,           (u32) &data_020bd3a0, (u32) &data_020d5398, 0x0D05FFFC,           0x000C0010,
    (u32) &data_020bcb80, (u32) &data_020d5440, 0x0D05FFFC,           0x000C0008,           (u32) &data_020bd380,
    (u32) &data_020d55e4, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bd298, (u32) &data_020d56e0,
    0x0D05FFFC,           0x000C0010,           (u32) &data_020bbb08, (u32) &data_020d576c, 0x0D05FFFC,
    0x000C0008,           (u32) &data_020bd160, (u32) &data_020d5830, 0x0D05FFFC,           0x000C0010,
    (u32) &data_020bd378, (u32) &data_020d5910, 0x0D05FFFC,           0x00080010,           (u32) &data_020bcaa8,
    (u32) &data_020d5964, 0x0D05FFFC,           0x00080008,           (u32) &data_020bcab8, (u32) &data_020d5a28,
    0x0D05FFFC,           0x00080010,           (u32) &data_020bce80, (u32) &data_020d5a98, 0x0D05FFFC,
    0x000C0010,           (u32) &data_020bbf30, (u32) &data_020d5ad0, 0x0D05FFFC,           0x000C0008,
    (u32) &data_020bb300, (u32) &data_020d5b94, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bcf70,
    (u32) &data_020d5c74, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bd028, (u32) &data_020d5d00,
    0x0D05FFFC,           0x000C0008,           (u32) &data_020bd150, (u32) &data_020d5d54, 0x0D05FFFC,
    0x000C0010,           (u32) &data_020bcac0, (u32) &data_020d5d8c, 0x0D05FFFC,           0x00080010,
    (u32) &data_020baef8, (u32) &data_020d5de0, 0x0D05FFFC,           0x00080008,           (u32) &data_020bcac8,
    (u32) &data_020d5f4c, 0x0D05FFFC,           0x00080010,           (u32) &data_020bd350, (u32) &data_020d5fbc,
    0x0D05FFFC,           0x000C0010,           (u32) &data_020bad28, (u32) &data_020d5ff4, 0x0D05FFFC,
    0x000C0008,           (u32) &data_020bd360, (u32) &data_020d60d4, 0x0D05FFFC,           0x000C0010,
    (u32) &data_020bb008, (u32) &data_020d6198, 0x0D05FFFC,           0x000C0010,           (u32) &data_020bbe58,
    (u32) &data_020d625c, 0x0D05FFFC,           0x000C0008,           (u32) &data_020bcae0, (u32) &data_020d6320,
    0x0D05FFFC,           0x000C0010,           (u32) &data_020bd120, (u32) &data_020d6438, 0x0D05FFFC,
    0x00080010,           (u32) &data_020bd138, (u32) &data_020c8d30, 0x0D05FFFC,           0x00080008,
    (u32) &data_020bcae8, (u32) &data_020d64e0, 0x0D05FFFC,           0x00080010,           (u32) &data_020bd130};
