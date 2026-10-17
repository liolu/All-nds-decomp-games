/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028308();                            /* extern */
M2C_UNK func_0202c278(M2C_UNK *);                   /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bfc28;
extern M2C_UNK data_020bfc40;
extern M2C_UNK data_020bfc5c;
extern M2C_UNK data_020bfc78;
extern M2C_UNK data_020bfc94;

M2C_UNK **func_02028970(M2C_UNK **arg0) {
    *arg0 = &data_020bfc28;
    func_02028308();
    func_0202c278(&data_020bfc40);
    func_0202c278(&data_020bfc5c);
    func_0202c278(&data_020bfc78);
    func_0202c278(&data_020bfc94);
    *arg0 = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
