#include "m2c.h"

M2C_UNK func_0206f408(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0206f7c4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02086fbc(void *);                      /* extern */
M2C_UNK func_0208e54c(void *);                      /* extern */
extern M2C_UNK data_020cdb80;
extern M2C_UNK data_020cdcf0;
extern M2C_UNK data_020ceb98;
extern M2C_UNK data_020ceb99;

void *func_02086eb8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0208e54c(arg0 + 0xC);
    func_0208e54c(arg0 + 0x20);
    func_02086fbc(arg0 + 0x34);
    M2C_FIELD(arg0, M2C_UNK **, 0xA8) = &data_020cdcf0;
    func_0206f7c4(arg0 + 0xA8, &data_020ceb98);
    M2C_FIELD(arg0, M2C_UNK **, 0x8AC) = &data_020cdcf0;
    func_0206f7c4(arg0 + 0x8AC, &data_020ceb98);
    M2C_FIELD(arg0, M2C_UNK **, 0x10B0) = &data_020cdb80;
    func_0206f408(arg0 + 0x10B0, &data_020ceb99);
    M2C_FIELD(arg0, M2C_UNK **, 0x50BC) = &data_020cdcf0;
    func_0206f7c4(arg0 + 0x50BC, &data_020ceb98);
    M2C_FIELD(arg0, M2C_UNK **, 0x58C0) = &data_020cdcf0;
    func_0206f7c4(arg0 + 0x58C0, &data_020ceb98);
    M2C_FIELD(arg0, M2C_UNK **, 0x60C4) = &data_020cdcf0;
    func_0206f7c4(arg0 + 0x60C4, &data_020ceb98);
    return arg0;
}
