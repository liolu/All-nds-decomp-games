#include "m2c.h"

void **func_0202aa40(void *);                       /* extern */
void **func_0202aa58(void *);                       /* extern */
void **func_0202aa78(void *);                       /* extern */
void **func_0202aa98();                             /* extern */

void func_0202a938(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x44) = (void *) M2C_FIELD(arg0, void **, 0x44);
    } else {
        temp_r0 = func_0202aa98();
        if (*temp_r0 == arg0) {
            *temp_r0 = M2C_FIELD(arg0, void **, 0x44);
        } else {
            temp_r0_2 = func_0202aa78(arg0);
            if (*temp_r0_2 == arg0) {
                *temp_r0_2 = M2C_FIELD(arg0, void **, 0x44);
            }
        }
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 0x48) = (void *) M2C_FIELD(arg0, void **, 0x48);
        return;
    }
    temp_r0_3 = func_0202aa58(arg0);
    if (*temp_r0_3 == arg0) {
        *temp_r0_3 = M2C_FIELD(arg0, void **, 0x48);
        return;
    }
    temp_r0_4 = func_0202aa40(arg0);
    if (*temp_r0_4 == arg0) {
        *temp_r0_4 = M2C_FIELD(arg0, void **, 0x48);
    }
}
