/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriObjSetInput from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_player.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriObj {
    short used;
    short s2;
    int state;
    int h;
    signed char c;
    signed char d, e, f;
    int i10, i14, i18;
    short s1c;
    short pad1e;
    int i20;
    short s24, s26;
    int i28, i2c, i30, i34;
    int i38, i3c, i40, i44, i48, i4c;
    int i50, i54, i58, i5c, i60, i64;
    int pad68[3];
    int i74;
    int i78, i7c, i80, i84, i88, i8c, i90, i94;
    short s98, s9a;
    short pad9c[2];
    short sa0, sa2, sa4, sa6, sa8, saa;
    int iac;
    int ib0;
    int ib4;
    int pad_b8[2];
    int ic0;
    signed char bc4[16];
    short sd4, sd6, sd8;
    short padda;
    int idc, ie0, ie4;
    int pade8;
} CriObj;
void func_020dbd68(CriObj *o, int a, int b) {
    if (o->s98 == 0) {
        o->i48 = a;
        o->i4c = b / o->f;
        o->i74 = 0;
    } else {
        o->i48 = a;
        o->i4c = b / ((o->d / 8) * o->e);
        o->i74 = 0;
    }
    o->i90 = 0;
    o->i94 = 0;
    o->ie0 = 0;
    o->idc = 0;
}
