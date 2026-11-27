/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02052644 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_02052644.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    char pad[0x24];
    long long field24_28;
    int field2c;
} Elem020526b8;
extern Elem020526b8 *data_0210f060;
extern long long OS_GetTick(Elem020526b8 *, int);
int func_0205992c(int idx, int arg1) {
    Elem020526b8 *base = data_0210f060;
    Elem020526b8 *elem;
    long long result;
    if (base == 0) {
        return 0;
    }
    elem             = &base[idx];
    elem->field2c    = arg1;
    result           = OS_GetTick(elem, arg1);
    elem             = &data_0210f060[idx];
    elem->field24_28 = result;
    return 1;
}
