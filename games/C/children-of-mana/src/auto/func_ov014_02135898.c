/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ADXCRS_Finish from https://github.com/Yotona/twewy libs/cri/src/adx_crs.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern volatile int data_ov014_02149704;
extern volatile int data_ov014_02149708;
void func_ov014_02135898(void) {
    data_ov014_02149708--;
    if (data_ov014_02149708 == 0) {
        data_ov014_02149704 = 0;
    }
}
