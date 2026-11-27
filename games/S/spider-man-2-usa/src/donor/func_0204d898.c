/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GameModelAnimation_Finalize from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/game/model_animation_pool.c
 * (license: none), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef s32 fx32;
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;
typedef int (*GameAnimationEvaluator)(const s16 *command, int time);
typedef struct GameMatrixAnimationTrack {
    struct GameMatrixAnimationTrack *next;
    const s16 *commands;
    s32 current_time;
    s32 previous_time;
    s16 duration;
    s16 speed;
    u8 reserved14[6];
    union {
        u16 raw;
        struct {
            u16 loop : 1, paused : 1, separate_sequences : 1, retain : 1, finished : 1, reserved : 11;
        } bits;
    } flags;
    s32 parameters[3];
    void (*draw)(int object, MtxFx44 *matrix, struct GameMatrixAnimationTrack *track);
    void *context;
    void (*finish)(struct GameMatrixAnimationTrack *track);
    struct GameMatrixAnimationTrack **owner;
} GameMatrixAnimationTrack;
typedef struct GameMatrixAnimation {
    GameMatrixAnimationTrack *storage;
    GameMatrixAnimationTrack *free_head;
    GameMatrixAnimationTrack *free_tail;
    GameMatrixAnimationTrack *active;
    MtxFx44 *matrices;
    MtxFx44 *matrix;
    GameMatrixAnimationTrack *resource;
    GameAnimationEvaluator evaluate;
    s32 parameters[16];
    s32 time;
} GameMatrixAnimation;
typedef union GameSpriteFlags {
    u8 raw;
    struct {
        u8 screen : 2;
        u8 shared : 1;
        u8 dirty : 1;
        u8 buffered : 1;
        u8 linked : 1;
        u8 reserved : 2;
    } bits;
} GameSpriteFlags;
typedef struct GameSpritePalette GameSpritePalette;
struct GameSpritePalette {
    GameSpritePalette *previous, *next;
    const void *data;
    u32 resource;
    u8 first, bank, count;
    GameSpriteFlags flags;
};
typedef struct GameSpriteAllocation GameSpriteAllocation;
struct GameSpriteAllocation {
    u32 offset, size;
    GameSpriteAllocation *previous, *next;
    u32 resource;
    union {
        u32 state;
        struct {
            GameSpriteFlags flags;
            u8 end, reserved[2];
        };
    };
};
typedef struct FieldRenderObject FieldRenderObject;
typedef struct FieldRenderObjectVTable FieldRenderObjectVTable;
typedef struct FieldRenderSortKey {
    u32 order : 28;
    u32 layer : 4;
} FieldRenderSortKey;
typedef struct FieldRenderStateFlags {
    u32 unknown_00 : 1, unknown_01 : 1, unknown_02 : 1;
    u32 semitransparent : 1;
    u32 render_linked : 1;
    u32 unknown_05_07 : 3;
    u32 animation_active : 1;
    u32 animation_suppressed : 1;
    u32 unknown_10 : 1, unknown_11 : 1;
    u32 behavior_state : 4;
    u32 unknown_16_31 : 16;
} FieldRenderStateFlags;
struct FieldRenderObjectVTable {
    u8 unknown_00[0x48];
    void (*unknown_48)(FieldRenderObject *, int);
    u8 unknown_4c[0x14];
    void (*reset_controller_work)(FieldRenderObject *render_object);
    u8 unknown_64[4];
    void (*set_animation)(FieldRenderObject *render_object, u8 resource_animation, s16 animation_id, int restart);
    u8 unknown_6c[0xC];
    void (*set_controller_animation)(FieldRenderObject *render_object, int animation, int reset);
    void (*set_palette_animation_paused)(FieldRenderObject *render_object, s8 slot, int paused);
    void (*set_palette_animation_mode)(FieldRenderObject *render_object, s8 slot, u8 mode);
    u8 unknown_84[4];
    void (*bind_palette_animation)(FieldRenderObject *render_object, s8 slot, s16 animation_id, int restart);
    void (*request_base_palette_reload)(FieldRenderObject *render_object);
};
typedef struct FieldRenderAnimationRange {
    u16 first, end;
    u8 unknown_04[4];
} FieldRenderAnimationRange;
struct FieldRenderObject {
#line 520
    FieldRenderObjectVTable *vtable;

    FieldRenderObject *render_previous, *render_next;
    void *owner;
    u8 screen, unknown_011[3];
    GameSpriteAllocation texture;
    union {
        u8 unknown_02c[0x1C];
        struct {
            GameSpritePalette *palette;
            u8 unknown_030[0x18];
        };
    };
    const FieldRenderAnimationRange *animation_ranges;
    const void *extra_resource_data;
    const u16 *texture_offsets;
    s16 resource_animation;
    s16 animation_id;
    u8 unknown_058[2];
    s16 animation_speed;
    s16 animation_offset_x, animation_offset_y;
    u16 unknown_060;
    u16 unknown_062;
    u32 unknown_064;
    s32 render_anchor_z;
    u8 unknown_06c[8];
    s16 scale_x, scale_y;
    u16 rotation, unknown_07a;
    union {
        u32 state_flags;
        FieldRenderStateFlags state_flag_bits;
    };
    union {
        u8 unknown_080[0x38];
        struct {
            u32 unknown_080_word;
            void *animation_controller;
            u8 unknown_088[0x30];
        };
    };
    u8 transition_active;
    u8 unknown_0b9[3];
    void *transition;
    u8 unknown_0c0[0x40];
    void *components[8];
    u8 unknown_120[0x10];
    union {
        u32 sort_key;
        FieldRenderSortKey sort_key_bits;
        struct {
            u32 entity_index : 6, vertical_order : 22, layer : 4;
        } field_sort_key;
    };
    union {
        s8 overlap_priorities[4];
        u8 overlap_priority_bytes[4];
    };
};
typedef struct GameModelAnimationContext {
    struct GameModelAnimationContext *next;
    union {
        u32 unknown_04[5];
        struct {
            s32 offset_x, offset_y, offset_z;

            s32 overlap_priority;
            struct {
                u32 overlap_priority : 2, unknown_02_31 : 30;
            } flags;
        };
    };
    FieldRenderObject *models[4];
} GameModelAnimationContext;
typedef struct GameModelAnimation {
    GameMatrixAnimation *animation;
    GameModelAnimationContext *storage;
    GameModelAnimationContext *free_head;
    GameModelAnimationContext *free_tail;
    GameModelAnimationContext *active;
    void (*prepare)(FieldRenderObject *, FieldRenderObject *, GameModelAnimationContext *, MtxFx44 *);
} GameModelAnimation;
extern GameModelAnimation *func_0204d898(GameModelAnimation *pool);
extern GameModelAnimation *data_02160670;
GameModelAnimation *func_0204d898(GameModelAnimation *pool) {
    data_02160670 = 0;
    return pool;
}
