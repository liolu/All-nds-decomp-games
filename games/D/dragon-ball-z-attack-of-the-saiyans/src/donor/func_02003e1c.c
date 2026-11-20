/* compiler: 2.0/sp1p5  */
/* func_02036450 from projets/battle-of-giants-dinosaurs/src/auto/func_02036450.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u16 a[19];
} Buf;
extern u8 data_0209af40;
extern u8 data_0209af70;
extern u8 data_0209af98;
extern u8 data_0209afb0;
extern u8 data_0209afc0;
extern u8 data_0209afc8;
extern u8 data_0209afd0;
extern u8 data_0209afd8;
extern u8 data_0209afe0;
extern u8 data_0209afe4;
extern u8 data_0209afe8;
extern u8 data_0209afec;
extern u8 data_0209aff0;
extern u8 data_0209aff4;
extern u8 data_0209aff8;
extern u8 data_0209affc;
extern u8 data_0209b000;
extern u8 data_0209b004;
extern u8 data_0209b008;
extern u8 data_0209b00c;
extern u8 data_0209b010;
extern void func_02003d80(Buf *, void *, s32);
extern void func_02003bfc(Buf *, Buf *, Buf *);
void func_02003e1c(Buf *dst, s32 n) {
    Buf tmp2;
    Buf tmp;

    switch (n) {
        case -64:
            func_02003d80(dst, &data_0209af40, -20);
            return;
        case -53:
            func_02003d80(dst, &data_0209af70, -16);
            return;
        case -32:
            func_02003d80(dst, &data_0209af98, -10);
            return;
        case -16:
            func_02003d80(dst, &data_0209afb0, -5);
            return;
        case -8:
            func_02003d80(dst, &data_0209afc0, -3);
            return;
        case -7:
            func_02003d80(dst, &data_0209afc8, -3);
            return;
        case -6:
            func_02003d80(dst, &data_0209afd0, -2);
            return;
        case -5:
            func_02003d80(dst, &data_0209afd8, -2);
            return;
        case -4:
            func_02003d80(dst, &data_0209afe0, -2);
            return;
        case -3:
            func_02003d80(dst, &data_0209afe4, -1);
            return;
        case -2:
            func_02003d80(dst, &data_0209afe8, -1);
            return;
        case -1:
            func_02003d80(dst, &data_0209afec, -1);
            return;
        case 0:
            func_02003d80(dst, &data_0209aff0, 0);
            return;
        case 1:
            func_02003d80(dst, &data_0209aff4, 0);
            return;
        case 2:
            func_02003d80(dst, &data_0209aff8, 0);
            return;
        case 3:
            func_02003d80(dst, &data_0209affc, 0);
            return;
        case 4:
            func_02003d80(dst, &data_0209b000, 1);
            return;
        case 5:
            func_02003d80(dst, &data_0209b004, 1);
            return;
        case 6:
            func_02003d80(dst, &data_0209b008, 1);
            return;
        case 7:
            func_02003d80(dst, &data_0209b00c, 2);
            return;
        case 8:
            func_02003d80(dst, &data_0209b010, 2);
            return;
        default:
            func_02003e1c(&tmp2, ((s32) (n + ((u32) (n & 0x80000000) >> 31)) >> 1));
            func_02003bfc(dst, &tmp2, &tmp2);
            if (n & 1) {
                tmp = *dst;
                if (n > 0) {
                    func_02003d80(&tmp2, &data_0209aff4, 0);
                } else {
                    func_02003d80(&tmp2, &data_0209afec, -1);
                }
                func_02003bfc(dst, &tmp, &tmp2);
            }
            return;
    }
}
