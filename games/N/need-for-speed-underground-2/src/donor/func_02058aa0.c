/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ea74 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0208ea74.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
struct M {
    int v[16];
};
void func_02058aa0(struct M *m) {
    *(u32 *) 0x04000440 = 3;
    *(u32 *) 0x04000458 = m->v[0] << 4;
    *(u32 *) 0x04000458 = m->v[1] << 4;
    *(u32 *) 0x04000458 = m->v[2] << 4;
    *(u32 *) 0x04000458 = m->v[3] << 4;
    *(u32 *) 0x04000458 = m->v[4] << 4;
    *(u32 *) 0x04000458 = m->v[5] << 4;
    *(u32 *) 0x04000458 = m->v[6] << 4;
    *(u32 *) 0x04000458 = m->v[7] << 4;
    *(u32 *) 0x04000458 = m->v[8] << 4;
    *(u32 *) 0x04000458 = m->v[9] << 4;
    *(u32 *) 0x04000458 = m->v[10] << 4;
    *(u32 *) 0x04000458 = m->v[11] << 4;
    *(u32 *) 0x04000458 = m->v[12];
    *(u32 *) 0x04000458 = m->v[13];
    *(u32 *) 0x04000458 = m->v[14];
    *(u32 *) 0x04000458 = m->v[15];
}
