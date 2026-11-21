#include "m2c.h"

typedef struct Sa {
    u8 len;
    u8 fam;
    u16 port;
    u32 addr;
} Sa;

typedef struct In {
    u8 pad[0x10];
    u32 addr;
    u32 port;
} In;

typedef struct Host {
    u8 pad[8];
    In *in;
} Host;

typedef struct Ctx {
    s32 state;
    s32 f4;
    s32 sock;
    s32 f0C;
} Ctx;

s32 func_ov000_021ffa80(s32);
s32 func_ov000_021ff8c0(s32, Sa *, s32);
s32 func_ov000_021ff824(s32, s32, s32);
s32 func_ov000_021ff46c(s32, s32);
void func_ov000_022029b0(s32, s32, s32);
void func_ov000_02207390(s32);
s32 func_ov000_02207df0(s32, s32, Host **);
void func_ov000_0220a8b0(s32, void *);
void func_ov000_0220a88c(s32, s32, void *);
extern u8 data_ov000_02219028[];
extern u8 data_ov000_0221916c[];
extern u8 data_ov000_02219194[];
extern u8 data_ov000_022191c8[];

s32 func_ov000_02207630(s32 arg0, Ctx *arg1) {
    Sa sa;
    Host *h;
    s32 r;
    s32 *p;

    if (func_ov000_02207df0(arg0, arg1->f0C, &h) == 0) {
        func_ov000_0220a8b0(arg0, data_ov000_02219028);
        return 3;
    }
    arg1->sock = func_ov000_021ff824(2, 1, 0);
    if (arg1->sock == -1) {
        func_ov000_0220a88c(arg0, 5, data_ov000_0221916c);
        func_ov000_022029b0(arg0, 3, 0);
        return 3;
    }
    if (func_ov000_021ff46c(arg1->sock, 0) == 0) {
        func_ov000_0220a88c(arg0, 5, data_ov000_02219194);
        func_ov000_022029b0(arg0, 3, 0);
        return 3;
    }
    func_ov000_02207390(arg1->sock);
    p       = (s32 *) &sa;
    p[0]    = 0;
    p[1]    = 0;
    sa.fam  = 2;
    sa.addr = h->in->addr;
    sa.port = h->in->port;
    if (func_ov000_021ff8c0(arg1->sock, &sa, 8) == -1) {
        r = func_ov000_021ffa80(arg1->sock);
        if (r != -6 && r != -0x1A && r != -0x4C) {
            func_ov000_0220a88c(arg0, 5, data_ov000_022191c8);
            func_ov000_022029b0(arg0, 3, 1);
            return 3;
        }
    }
    arg1->state = 0x67;
    return 0;
}
