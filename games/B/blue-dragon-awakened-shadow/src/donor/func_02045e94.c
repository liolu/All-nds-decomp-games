/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203deac from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203deac.c (license: MIT), reused by
 * tools/donor_match.py */
typedef struct {
    unsigned char lo7 : 7;
    unsigned char bit7 : 1;
} Byte0203deac;
unsigned char func_02045e94(void *a) {
    unsigned char count  = *((unsigned char *) a + 0xd12);
    unsigned char result = 0;
    unsigned char i      = result;
    if (i < count) {
        do {
            Byte0203deac *v = (Byte0203deac *) ((unsigned char *) a + i * 4 + 0x447);
            if (v->bit7 == 0) {
                result = i;
                break;
            }
            i = i + 1;
        } while (i < count);
    }
    return result;
}
