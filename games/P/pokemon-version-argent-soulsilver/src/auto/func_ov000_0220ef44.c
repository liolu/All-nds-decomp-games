#include "m2c.h"
void func_ov000_021ff3ec(void);
s32 func_ov000_0220f7f4(s32, u32 *, u16 *);
void *func_ov000_021ec3c8(s32);
void func_ov000_021ec3f8(void *);
void *func_020e5b44(void *, s32, u32);
s32 func_ov000_021fed6c(s32, s32, s32, void *, void *, s32);
s32 func_ov000_021fe5d4(s32, s32, void *);
void func_ov000_021feeac(s32);
void func_ov000_021fe698(s32);
s32 func_ov000_021ff824(s32, s32, s32);
s32 func_ov000_021ff860(s32, void *, s32);
void func_ov000_021ff838(s32);
void func_ov000_021ffa38(s32, void *, s32 *);
typedef struct Sock {
    s32 fd;
    u32 addr;
    u16 port;
    u16 pad;
    s32 f0c;
    s32 f10;
    u8 pad2[0x10];
    s32 f24;
    u8 pad3[0x10];
    s32 f38;
    s32 f3c;
    s32 f40;
} Sock;
typedef struct SockAddr {
    u8 len;
    u8 family;
    u16 port;
    u32 addr;
} SockAddr;
extern u8 func_ov000_0220eefc;
extern u8 func_ov000_0220eec8;
extern u8 func_ov000_0220eea8;
s32 func_ov000_0220ef44(Sock **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    SockAddr sa;
    u32 ip;
    s32 len;
    u16 port;
    Sock *s;
    func_ov000_021ff3ec();
    if (arg3 == 0) {
        arg3 = 0x10000;
    }
    if (arg2 == 0) {
        arg2 = 0x10000;
    }
    if (func_ov000_0220f7f4(arg1, &ip, &port) == 0) {
        return 4;
    }
    s = func_ov000_021ec3c8(0x44);
    if (s == NULL) {
        return 1;
    }
    func_020e5b44(s, 0, 0x44);
    s->fd  = -1;
    s->f3c = arg3;
    s->f38 = arg2;
    s->f24 = arg4;
    s->f0c = func_ov000_021fed6c(4, 0x20, 2, &func_ov000_0220eea8, &func_ov000_0220eec8, 0);
    if (s->f0c == 0) {
        func_ov000_021ec3f8(s);
        return 1;
    }
    s->f10 = func_ov000_021fe5d4(4, 4, &func_ov000_0220eefc);
    if (s->f10 == 0) {
        func_ov000_021feeac(s->f0c);
        func_ov000_021ec3f8(s);
        return 1;
    }
    s->fd = func_ov000_021ff824(2, 2, 0);
    if (s->fd == -1) {
        func_ov000_021feeac(s->f0c);
        func_ov000_021fe698(s->f10);
        func_ov000_021ec3f8(s);
        return 3;
    }
    {
        s32 *z = (s32 *) &sa;
        z[0]   = 0;
        z[1]   = 0;
    }
    sa.family = 2;
    sa.addr   = ip;
    sa.port   = (u16) (((port >> 8) & 0xFF) | ((port << 8) & 0xFF00));
    if (func_ov000_021ff860(s->fd, &sa, 8) == -1) {
        func_ov000_021ff838(s->fd);
        func_ov000_021feeac(s->f0c);
        func_ov000_021fe698(s->f10);
        func_ov000_021ec3f8(s);
        return 3;
    }
    len = 8;
    func_ov000_021ffa38(s->fd, &sa, &len);
    s->addr = sa.addr;
    s->port = (u16) (((sa.port >> 8) & 0xFF) | ((sa.port << 8) & 0xFF00));
    *arg0   = s;
    return 0;
}
