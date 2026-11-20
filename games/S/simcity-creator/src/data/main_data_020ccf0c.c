/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02062594[];
extern u8 func_020626e8[];
extern u8 func_0206276c[];
extern u8 func_020627d4[];
extern u8 func_020627dc[];
extern u8 func_020627e4[];
extern u8 func_020627ec[];
extern u8 func_02062870[];
extern u8 func_020628f4[];
extern u8 func_02062918[];
extern u8 func_0206293c[];
extern u8 func_02062960[];
extern u8 func_02062984[];
extern u8 func_02062a48[];
extern u8 func_02062a6c[];
extern u8 func_02062b00[];
extern u8 func_02062b50[];
extern u8 func_02062b74[];
extern u8 func_02062b98[];
extern u8 func_02062be8[];
extern u8 func_02062c0c[];
extern u8 func_02062c30[];
extern u8 func_02062c54[];
extern u8 func_02062c78[];
extern u8 func_02062c9c[];
extern u8 func_02062cc0[];
extern u8 func_02062ce4[];
extern u8 func_02062d08[];
extern u8 func_02062d2c[];
extern u8 func_02062d50[];
extern u8 func_02062d74[];
extern u8 func_02062d98[];
extern u8 func_02062dbc[];
extern u8 func_02062de0[];
extern u8 func_02062e04[];
extern u8 func_02062e28[];
extern u8 func_02062e4c[];
extern u8 func_02062e70[];
extern u8 func_02062e94[];
extern u8 func_02062eb8[];
extern u8 func_02062edc[];
extern u8 func_02062f00[];
extern u8 func_02062f24[];
extern u8 func_02062f48[];
extern u8 func_02062f6c[];
extern u8 func_02063004[];
extern u8 func_02063068[];
extern u8 func_020630cc[];
extern u8 func_02063154[];
extern u8 func_020631b8[];
extern u8 func_0206321c[];
extern u8 func_02063240[];
extern u8 func_02063264[];
extern u8 func_020632b0[];
extern u8 func_02063314[];
extern u8 func_02063340[];
extern u8 func_020633a4[];
extern u8 func_020633c8[];
extern u8 func_020633ec[];
extern u8 func_02063410[];
extern u8 func_02063434[];
extern u8 func_02063458[];
extern u8 func_0206347c[];
extern u8 func_020634a0[];
extern u8 func_020634c4[];
extern u8 func_020634e8[];
extern u8 func_0206351c[];
extern u8 func_02063540[];
extern u8 func_02063564[];
extern u8 func_02063588[];
extern u8 func_020635ac[];
extern u8 func_020635d0[];
extern u8 func_020635f4[];
extern u8 func_02063618[];
extern u8 func_0206363c[];
extern u8 func_020636d0[];
extern u8 func_020636f4[];
extern u8 func_02063718[];
extern u8 func_0206373c[];
extern u8 func_02063760[];
extern u8 func_02063784[];
extern u8 func_020637cc[];
extern u8 func_020637f0[];
extern u8 func_02063814[];

u32 data_020ccf0c[15] = {0x00360609, 0x00000000, 0x000186A1, 0x0037060A, 0x00000000, 0x000186A1, 0x00300402, 0x00000000,
                         0x000186A1, 0x002F0504, 0x00000032, 0x000186A1, 0x000000FF, 0x00000000, 0x00000000};
u32 data_020ccf48[86] = {
    (u32) &func_02062594, (u32) &func_020626e8, (u32) &func_0206276c, (u32) &func_020627d4, (u32) &func_020627dc,
    (u32) &func_020627e4, (u32) &func_020627ec, (u32) &func_02062870, (u32) &func_020628f4, (u32) &func_02062918,
    (u32) &func_0206293c, (u32) &func_02062960, (u32) &func_02062a48, (u32) &func_02062a6c, (u32) &func_02062984,
    (u32) &func_02062b00, (u32) &func_02062b50, (u32) &func_02062b74, (u32) &func_02062b98, (u32) &func_02062be8,
    (u32) &func_02062c0c, (u32) &func_02062c30, (u32) &func_02062c54, (u32) &func_02062c78, (u32) &func_02062c9c,
    (u32) &func_02062cc0, (u32) &func_02062ce4, (u32) &func_02062d08, (u32) &func_02062d2c, (u32) &func_02062d50,
    (u32) &func_02062d74, (u32) &func_02062d98, (u32) &func_02062dbc, (u32) &func_02062de0, (u32) &func_02062e04,
    (u32) &func_020632b0, (u32) &func_02062e28, (u32) &func_02062e4c, (u32) &func_02062e70, (u32) &func_02062e94,
    (u32) &func_02062eb8, (u32) &func_02062edc, (u32) &func_02062f00, (u32) &func_02062f24, (u32) &func_02062f48,
    (u32) &func_02062f6c, (u32) &func_02063004, (u32) &func_02063068, (u32) &func_020630cc, (u32) &func_02063154,
    (u32) &func_020631b8, (u32) &func_0206321c, (u32) &func_02063240, (u32) &func_02063264, (u32) &func_020632b0,
    (u32) &func_02063314, (u32) &func_02063340, (u32) &func_020633a4, (u32) &func_020633c8, (u32) &func_020633ec,
    (u32) &func_02063410, (u32) &func_02063434, (u32) &func_02063458, (u32) &func_0206347c, (u32) &func_020634a0,
    (u32) &func_020634c4, (u32) &func_020634e8, (u32) &func_0206351c, (u32) &func_02063540, (u32) &func_02063564,
    (u32) &func_02063588, (u32) &func_020635ac, (u32) &func_020635d0, (u32) &func_020635f4, (u32) &func_02063618,
    (u32) &func_0206363c, (u32) &func_0206363c, (u32) &func_020636d0, (u32) &func_020636f4, (u32) &func_02063718,
    (u32) &func_0206373c, (u32) &func_02063760, (u32) &func_02063784, (u32) &func_020637cc, (u32) &func_020637f0,
    (u32) &func_02063814};
