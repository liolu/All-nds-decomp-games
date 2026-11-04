#include "m2c.h"
extern u8 data_ov008_02111210[];
extern u8 data_ov009_02112bdc[];
extern u8 data_ov009_02112c4c[];
extern u8 data_ov008_02111520[];
extern u8 data_ov008_02111768[];
extern u8 data_ov009_02112f7c[];
extern u8 data_ov008_021113d0[];
extern u8 data_ov012_021120bc[];
extern u8 data_ov008_0211155c[];
extern u8 data_ov008_02111b44[];
extern u8 data_ov008_021113b0[];
extern u8 data_ov009_0211229c[];
extern u8 data_ov008_021113ac[];
extern u8 data_ov008_021111fc[];
extern u8 data_ov008_02111204[];
extern u8 data_ov009_02113434[];
extern u8 data_ov008_0211150c[];
extern u8 data_ov012_02111cc8[];
extern u8 data_ov009_02113518[];
extern u8 data_ov014_021140f8[];
extern u8 data_ov008_02111218[];
extern u8 data_ov008_02111be0[];
extern u8 data_ov008_02111438[];
extern u8 data_ov010_021124d4[];
extern u8 func_ov006_02111560[];
extern u8 data_ov008_02111a58[];
extern u8 data_ov010_021124f8[];
extern u8 data_ov008_02111624[];
extern u8 data_ov008_021112b0[];
extern u8 data_ov008_02111a78[];
extern u8 data_ov008_02111b88[];
extern u8 data_ov009_02112f2c[];
extern u8 data_ov009_02112c68[];
extern u8 data_ov009_021138fc[];
extern u8 data_ov010_021129b4[];
extern u8 data_ov009_021138c4[];
extern u8 data_ov009_02113228[];
extern u8 data_ov008_02111218[];
extern u8 data_ov008_02111994[];
extern u8 data_ov008_02111548[];
extern u8 func_020392ec[];
extern u8 func_020392f0[];
extern u8 func_02039304[];
extern u8 func_0203930c[];
extern u8 func_02039314[];
extern u8 func_02039324[];
extern u8 func_0203932c[];
extern u8 func_02039334[];
extern u8 func_02039344[];
extern u8 func_020393ac[];
extern u8 func_020393f0[];
extern u8 func_02039434[];
extern u8 func_0203bc08[];
extern u8 func_0203bc3c[];
extern u8 func_0203bc78[];
extern u8 func_0203bd74[];
extern u8 data_ov012_02111c54[];
extern u8 func_0203bd8c[];
extern u8 func_0203bd90[];
extern u8 data_ov009_02113b90[];
extern u8 func_0203be20[];
extern u8 func_0203be28[];
extern u8 func_0203be2c[];
extern u8 func_0203be30[];
extern u8 func_0203be34[];
extern u8 func_0203be38[];
extern u8 func_0203be3c[];
extern u8 func_0203be40[];
extern u8 func_0203be44[];
extern u8 func_0203c13c[];
extern u8 func_0203c188[];
extern u8 func_0203c228[];
extern u8 func_0203d7e8[];
extern u8 func_0203da90[];
extern u8 func_0203dd30[];
extern u8 data_ov008_02111228[];
extern u8 func_ov006_0211192c[];
extern u8 data_ov009_02112bec[];
extern u8 data_ov009_02112f58[];
extern u8 data_ov009_021130cc[];
extern u8 func_0203dd54[];
extern u8 data_ov009_02112fd0[];
extern u8 data_ov030_02114ea8[];
extern u8 func_0203dd60[];
extern u8 func_0203dd64[];
extern u8 func_0203dd68[];
extern u8 data_ov008_021111ec[];
extern u8 func_0203dd70[];
extern u8 func_0203dd7c[];
extern u8 func_0203dd84[];
extern u8 data_ov008_02111844[];
extern u8 data_ov010_02112a6c[];
extern u8 func_0203ddb0[];
extern u8 func_0203ddd4[];
extern u8 func_0203e100[];
extern u8 func_0203e180[];
extern u8 func_0203e4c4[];
extern u8 func_0203e6ac[];
extern u8 func_0203e750[];
extern u8 func_0203e8b4[];
extern u8 func_0203e8b8[];
extern u8 func_0203e8cc[];
extern u8 func_0203e8d4[];
extern u8 func_0203e8d8[];
extern u8 func_0203ea10[];
u32 data_02092208[52] = {
    (u32) &data_ov008_02111210, (u32) &data_ov009_02112bdc, (u32) &data_ov009_0211229c, (u32) &data_ov008_021113ac,
    (u32) &data_ov012_02111c54, (u32) &data_ov008_02111844, (u32) &data_ov009_02113434, (u32) &data_ov009_02113518,
    (u32) &data_ov009_02113b90, (u32) &data_ov008_02111a78, (u32) &data_ov009_02112f2c, (u32) &data_ov009_02112c68,
    (u32) &data_ov009_021138fc, (u32) &data_ov009_021138c4, (u32) &data_ov009_02113228, (u32) &data_ov008_02111b88,
    (u32) &data_ov010_021129b4, (u32) &data_ov009_02112bec, (u32) &data_ov009_02112f58, (u32) &data_ov009_021130cc,
    (u32) &data_ov008_021113d0, (u32) &data_ov009_02112fd0, (u32) &data_ov030_02114ea8, (u32) &data_ov008_0211155c,
    (u32) &data_ov009_02112f7c, (u32) &data_ov008_02111be0, (u32) &data_ov014_021140f8, (u32) &data_ov012_021120bc,
    (u32) &data_ov010_02112a6c, (u32) &data_ov008_021111ec, (u32) &data_ov008_02111218, (u32) &data_ov008_02111438,
    (u32) &data_ov008_02111228, (u32) &func_ov006_0211192c, (u32) &data_ov008_02111218, (u32) &data_ov008_02111b44,
    (u32) &data_ov008_021113b0, (u32) &data_ov010_021124d4, (u32) &func_ov006_02111560, (u32) &data_ov008_02111a58,
    (u32) &data_ov008_02111624, (u32) &data_ov008_021111fc, (u32) &data_ov008_02111204, (u32) &data_ov008_0211150c,
    (u32) &data_ov012_02111cc8, (u32) &data_ov010_021124f8, (u32) &data_ov008_021112b0, (u32) &data_ov008_02111994,
    (u32) &data_ov009_02112c4c, (u32) &data_ov008_02111520, (u32) &data_ov008_02111768, (u32) &data_ov008_02111548};
