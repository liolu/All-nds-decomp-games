/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eabc8 from https://github.com/banatic/acww-decomp src/autoload_2/func_020eabc8.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
void func_02010a58(int *v, int scale) {
    v[0] = (int) (((long long) v[0] * scale + 0x800) >> 12);
    v[1] = (int) (((long long) v[1] * scale + 0x800) >> 12);
    v[2] = (int) (((long long) v[2] * scale + 0x800) >> 12);
}
