#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void func_02009238(void *arg0, void *arg1) {
    *(M2C_S8 *) ((s8 *) arg0 + 0) = *(M2C_S8 *) ((s8 *) arg1 + 8);
}
