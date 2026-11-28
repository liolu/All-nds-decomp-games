/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ADXERR_ItoA from https://github.com/Yotona/twewy libs/cri/src/adx_errs.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern char data_ov014_02149718[32];
void func_ov014_02136e70(int value, char *str, int base) {
    int i;
    int len;

    for (i = 0; i < 32; i++) {
        str[i] = value % 10;
        value /= 10;

        if (value == 0) {
            str[i] = '\0';
            break;
        }
    }

    len = func_02004508(data_ov014_02149718);
    len = (len < base - 1) ? len : base - 1;

    for (i = 0; i < len; i++) {
        str[i] = data_ov014_02149718[len - 1 - i];
    }

    str[i] = '\0';
}
