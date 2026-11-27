#include "m2c.h"

s32 gpiProfilesTableHash(s32 *arg0, s32 arg1) {
    return (s32) *arg0 % arg1;
}
