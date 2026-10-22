/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201aa18(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201eddc(s32);                         /* extern */
M2C_UNK func_0201f7e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0201fa30(void *, M2C_UNK);             /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204a560(M2C_UNK *);                   /* extern */
M2C_UNK func_0204bcc8(s32);                         /* extern */
M2C_UNK func_0204bcfc(s32);                         /* extern */
extern M2C_UNK data_02077b68;
extern M2C_UNK data_02126314;
extern s32 data_0215f078;
extern s32 data_0215f080;
extern void *data_0216064c;
extern M2C_UNK func_0204b6c0;

void *func_0204b80c(void *arg0) {
    s32 temp_r0;
    s32 var_r1;

    func_0201fa30(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02126314;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    data_0216064c                  = arg0;
    temp_r0                        = func_0203a6cc(0x54);
    var_r1                         = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_0201aa18(temp_r0, &data_02077b68, 1, 0);
    }
    func_0201f7e8(arg0, var_r1, 1);
    func_0204bcfc(data_0215f078);
    func_0204bcc8(data_0215f078);
    func_0201eddc(data_0215f080);
    func_0204a560(&func_0204b6c0);
    func_02045738(1, 1, 1);
    return arg0;
}
