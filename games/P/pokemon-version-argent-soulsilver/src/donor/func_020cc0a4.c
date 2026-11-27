/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_TransApply44 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/math/fx_mtx44.c (license: none),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;
extern void func_020cc0a4(const MtxFx44 *source, MtxFx44 *result, fx32 x, fx32 y, fx32 z);
extern void func_020d4944(const void *source, void *destination);
void func_020cc0a4(const MtxFx44 *source, MtxFx44 *result, fx32 x, fx32 y, fx32 z) {
    if (source != result) {
        func_020d4944(source, result);
    }
    result->_30 = source->_30 + (fx32) (((fx64) x * source->_00 + (fx64) y * source->_10 + (fx64) z * source->_20) >> 12);
    result->_31 = source->_31 + (fx32) (((fx64) x * source->_01 + (fx64) y * source->_11 + (fx64) z * source->_21) >> 12);
    result->_32 = source->_32 + (fx32) (((fx64) x * source->_02 + (fx64) y * source->_12 + (fx64) z * source->_22) >> 12);
    result->_33 = source->_33 + (fx32) (((fx64) x * source->_03 + (fx64) y * source->_13 + (fx64) z * source->_23) >> 12);
}
