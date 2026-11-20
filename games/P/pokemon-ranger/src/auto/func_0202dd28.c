/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f3990;
extern void *data_020f3994;
extern void *data_020f3998;

void func_0202dd28(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 == NULL) {
        temp_r2_2     = M2C_FIELD(arg0, void **, 8);
        data_020f3994 = temp_r2_2;
        if (temp_r2_2 != NULL) {
            M2C_FIELD(temp_r2_2, void **, 4) = NULL;
        }
    } else {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_3 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_3 == NULL) {
        temp_r2_4     = M2C_FIELD(arg0, void **, 4);
        data_020f3998 = temp_r2_4;
        if (temp_r2_4 != NULL) {
            M2C_FIELD(temp_r2_4, void **, 8) = NULL;
        }
    } else {
        M2C_FIELD(temp_r2_3, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
    data_020f3990 -= 1;
}
