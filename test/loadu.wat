(module
  (type (;0;) (func (param i32) (result v128)))
  (import "env" "__linear_memory" (memory (;0;) 0))
  (func $loadu_i8x16 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_i16x8 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_i32x4 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_i64x2 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_u8x16 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_u16x8 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_u32x4 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_u64x2 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_f32x4 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1)
  (func $loadu_f64x2 (type 0) (param i32) (result v128)
    local.get 0
    v128.load align=1))