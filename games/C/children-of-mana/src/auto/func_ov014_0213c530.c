/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ADXCRS_Init from https://github.com/Yotona/twewy libs/cri/src/adx_crs.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern volatile int data_ov014_0214c3f8;
extern volatile int data_ov014_0214c3fc;
void func_ov014_0213c530(void) {
    data_ov014_0214c3fc++;
    if (data_ov014_0214c3fc == 1) {
        data_ov014_0214c3f8 = 0;
    }
}
