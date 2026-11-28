/* compiler: 2.0/sp1p5 -profile -flag no-opt_dead_assignments */
/* near start: 4 diffs with profile "2.0/sp1p5 -profile" */
/* near start: 16 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 lo : 2;
    u32 key : 9;
    u32 mid : 8;
    u32 hi : 13;
    u32 p0 : 5;
    u32 f5 : 1;
    u32 f67 : 2;
    u32 r4 : 24;
    u32 q0 : 13;
    u32 f13 : 1;
    u32 q14 : 9;
    u32 f23 : 1;
    u32 r8 : 8;
    u32 padc;
    u16 h10;
    u16 h12;
    u8 pad[0x18];
    u16 h2c;
    u16 pad2e;
    u8 pad30[4];
} Unit;

typedef struct {
    u32 w0;
    u32 w4;
    u32 q0 : 10;
    u32 spd : 4;
    u32 q14 : 18;
    u8 pad[0x9];
    u8 b15;
    u8 pad2[0xa];
} Row;

typedef struct {
    u32 w0;
    Row *rows;
    u8 pad[0x1c];
    Unit *units;
} G2;

typedef struct {
    u32 w0;
    u32 lo : 2;
    u32 id : 30;
    u8 pad[0x208];
    u32 f210_lo : 14;
    u32 f210 : 14;
    u32 f210_hi : 4;
    u8 pad2[0x38];
    u32 f24c_lo : 4;
    u32 f24c_m : 13;
    u32 f24c_a : 4;
    u32 f24c_hi : 11;
    u16 h250;
    u16 h252;
    u8 pad3[0x10];
    u16 ids[0x25];
} Obj;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u32 wc;
    u32 pad0 : 28;
    u32 fb : 1;
    u32 fa : 1;
    u32 fc : 2;
    u32 q0 : 8;
    u32 sub : 4;
    u32 q12 : 20;
    u8 pad2[0x1dc];
    u32 w1f4;
} G1;

void SetTrsObjCommand(s32, s32, s32, s32);
s32 GetCreateUnitSpeed(void *, s32);
void SetKUNI_paras(void *, s32);
void SetUD_ST_paras(void *, s32);
void RedrawTrentSeedKazu(s32);

extern G1 *data_ov000_02051548;
extern G2 *data_0203673c;

s32 RelifeCarisumaOne(Obj *obj, s32 key) {
    s32 i;
    s32 found;
    G2 *g;
    G1 *ga;

    if (key == 0) {
        return 0;
    }
    if (data_ov000_02051548->fa != 0 && data_ov000_02051548->fb != 0) {
        SetTrsObjCommand(4, obj->lo, key, 0);
        return 1;
    }
    found = 0xffff;
    g     = data_0203673c;
    for (i = 0; i < 0x25; i++) {
        s32 id = obj->ids[i];
        if (id != 0xffff && g->units[id].key == key) {
            found = id;
            break;
        }
    }
    if (found != 0xffff) {
        data_0203673c->units[found].f5  = 1;
        data_0203673c->units[found].f67 = 2;
        data_0203673c->units[found].h10 = data_0203673c->units[found].h12;
        data_0203673c->units[found].f23 = 0;
        data_0203673c->units[found].mid = 0;
        data_0203673c->units[found].h2c = 0;
        data_0203673c->units[found].f13 = 0;
        obj->f210 -= data_0203673c->rows[key].b15;
        obj->f24c_lo = 3;
        obj->h250    = 0;
        obj->h252    = GetCreateUnitSpeed(obj, data_0203673c->rows[key].spd);
        obj->f24c_a  = 0;
        if (data_ov000_02051548->fa != 0 && data_ov000_02051548->fb == 0) {
            SetKUNI_paras((u8 *) obj + 0x210, 0xc);
            SetKUNI_paras((u8 *) obj + 0x24c, 8);
            SetUD_ST_paras((u8 *) &data_0203673c->units[found] + 4, 8);
            SetUD_ST_paras((u8 *) &data_0203673c->units[found] + 0x10, 2);
        }
        if (data_ov000_02051548->w1f4 != 0 && obj->lo == data_ov000_02051548->sub) {
            RedrawTrentSeedKazu(obj->lo);
        }
        return 1;
    }
    return 0;
}
