#include "m2c.h"

M2C_UNK func_0203330c(s16);                         /* extern */
M2C_UNK func_0203648c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0203665c(M2C_UNK);                     /* extern */
extern M2C_UNK func_02038bf8;

void func_02038b18(void *arg0) {
    func_0203648c(4, &func_02038bf8);
    func_0203330c(M2C_FIELD(arg0, s16 *, 0x10));
    *(u16 *) 0x04000004 |= 0x20;
    func_0203665c(4);
}
