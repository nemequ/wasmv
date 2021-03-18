(module
  (type (;0;) (func (param i32) (result v128)))
  (import "env" "__linear_memory" (memory (;0;) 0))
  (func $load_extend_i16x8 (type 0) (param i32) (result v128)
    local.get 0
    v128.load8x8_s align=1)
  (func $load_extend_i32x4 (type 0) (param i32) (result v128)
    local.get 0
    v128.load16x4_s align=2)
  (func $load_extend_i64x2 (type 0) (param i32) (result v128)
    local.get 0
    v128.load32x2_s align=4)
  (func $load_extend_u16x8 (type 0) (param i32) (result v128)
    local.get 0
    v128.load8x8_s align=1)
  (func $load_extend_u32x4 (type 0) (param i32) (result v128)
    local.get 0
    v128.load16x4_s align=2)
  (func $load_extend_u64x2 (type 0) (param i32) (result v128)
    local.get 0
    v128.load32x2_s align=4)
  (func $load_extend_i16x8_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load8x8_s align=1)
  (func $load_extend_i32x4_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load16x4_s align=2)
  (func $load_extend_i64x2_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load32x2_s align=4)
  (func $load_extend_u16x8_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load8x8_s align=1)
  (func $load_extend_u32x4_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load16x4_s align=2)
  (func $load_extend_u64x2_o (type 0) (param i32) (result v128)
    local.get 0
    v128.load32x2_s align=4))
