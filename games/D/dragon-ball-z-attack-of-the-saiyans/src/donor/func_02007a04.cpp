/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _Z17__TransferControlP12ThrowContextP13ExceptionInfoPc from projets/battle-of-giants-dinosaurs/src/donor/func_0203bd74.cpp
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef struct ExceptionTableIndex {
    char *function_address;
    unsigned long function_size;
    char *exception_table;
} ExceptionTableIndex;
extern "C" {
typedef struct CatchInfo {
    void *location;
    void *typeinfo;
    void *dtor;
    void *sublocation;
    long pointercopy;
    void *stacktop;
} CatchInfo;
}
typedef struct TargetContext {
    unsigned long GPR[16];
    char *throwSP;
    unsigned long frame_size;
    unsigned long argument_size;
    unsigned short saved_GPRs;
    bool has_flushback;
    bool has_frame_ptr;
    bool is_Thumb;
} TargetContext;
typedef struct ThrowContext {
    unsigned char *throwtype;
    void *location;
    void *dtor;
    CatchInfo *catchinfo;
    char *returnaddr;
    char *SP;
    char *FP;
    TargetContext target;
} ThrowContext;
typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;
typedef struct ExceptionInfo {
    char *current_function;
    char *exception_record;
    char *action_pointer;
    ExceptionTableIndex *exception_table_start;
    ExceptionTableIndex *exception_table_end;
    TargetExceptionInfo target;
} ExceptionInfo;
extern void __TransferControl(ThrowContext *context, ExceptionInfo *info, char *address);
// clang-format off
asm void __TransferControl(register ThrowContext *context, register ExceptionInfo *info, register char *address) {
    ldr		v1,[context,#ThrowContext.target.GPR+16]
    ldr		v2,[context,#ThrowContext.target.GPR+20]
    ldr		v3,[context,#ThrowContext.target.GPR+24]
    ldr		v4,[context,#ThrowContext.target.GPR+28]
    ldr		v5,[context,#ThrowContext.target.GPR+32]
    ldr		v6,[context,#ThrowContext.target.GPR+36]
    ldr		v7,[context,#ThrowContext.target.GPR+40]
    ldr		v8,[context,#ThrowContext.target.GPR+44]
    ldr		sp,[context,#ThrowContext.target.throwSP]
    ldr		ip,[context,#ThrowContext.target.argument_size]
    sub		sp,sp,ip
    bx		address
}
// clang-format on
