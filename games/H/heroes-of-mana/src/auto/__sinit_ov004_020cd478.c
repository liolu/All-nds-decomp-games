void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf390[];
extern void *data_ov004_020cfa90[3];
extern void *data_ov004_020cfa9c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd478(void) {
    func_ov004_020b8df8(&data_ov004_020cfa90[3]);
    data_ov004_020cfa9c = data_ov004_020cf390;
}
