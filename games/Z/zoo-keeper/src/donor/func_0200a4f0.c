/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* TouchRegionManager_DestroyAndFree from https://github.com/SHOEGAZEssb/Rosy-Rupeeland-Decomp src/system/touch_region.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct RectS16 {
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
} RectS16;
typedef struct TouchRegion TouchRegion;
typedef struct TouchRegionVTable {
    TouchRegion *(*destroy)(TouchRegion *region);
    TouchRegion *(*destroyAndFree)(TouchRegion *region);
    void (*tick)(TouchRegion *region);
    void (*beginPress)(TouchRegion *region);
    void (*endPress)(TouchRegion *region);
    void (*notify)(TouchRegion *region, s32 value);
} TouchRegionVTable;
struct TouchRegion {
    const TouchRegionVTable *vtable;
    s32 value;
    s32 pressState;
    u32 flags;
    s32 countdown;
    RectS16 bounds;
};
typedef struct TouchRegionArray {
    TouchRegion **items;
    s32 capacity;
} TouchRegionArray;
typedef struct TouchRegionManager {
    const void *vtable;
    TouchRegionArray regions;
    s32 count;
    u32 flags;
} TouchRegionManager;
extern TouchRegionArray *func_0200905c(TouchRegionArray *array);
extern TouchRegionManager *func_0200a4f0(TouchRegionManager *manager);
extern void func_0200a374(TouchRegionManager *manager);
extern void func_02003734(void *allocation);
extern const void *data_020619b8[];
TouchRegionArray *func_0200905c(TouchRegionArray *array);
TouchRegionManager *func_0200a4f0(TouchRegionManager *manager) {
    manager->vtable = data_020619b8;
    func_0200a374(manager);
    func_0200905c(&manager->regions);
    func_02003734(manager);
    return manager;
}
void func_0200a374(TouchRegionManager *manager);
