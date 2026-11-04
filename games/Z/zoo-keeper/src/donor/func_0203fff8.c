/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Unk095560_Unk_095d08 from https://github.com/watamelonman/smtsj-decomp src/game/unit_02095560.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
unsigned char *func_0203f498(void);
typedef struct Unk095560Words {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} Unk095560Words;
void func_0203fff8(u32 value) {
    Unk095560Words *words = (Unk095560Words *) func_0203f498();
    words->unk_08         = value;
}
