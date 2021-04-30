(module
 (type $v128_v128_=>_v128 (func (param v128 v128) (result v128)))
 (import "env" "__linear_memory" (memory $mimport$0 0))
 (func $0 (param $0 v128) (param $1 v128) (result v128)
  (i16x8.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $1 (param $0 v128) (param $1 v128) (result v128)
  (i32x4.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $2 (param $0 v128) (param $1 v128) (result v128)
  (i64x2.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $3 (param $0 v128) (param $1 v128) (result v128)
  (i16x8.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $4 (param $0 v128) (param $1 v128) (result v128)
  (i32x4.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $5 (param $0 v128) (param $1 v128) (result v128)
  (i64x2.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $6 (param $0 v128) (param $1 v128) (result v128)
  (f32x4.mul
   (local.get $0)
   (local.get $1)
  )
 )
 (func $7 (param $0 v128) (param $1 v128) (result v128)
  (f64x2.mul
   (local.get $0)
   (local.get $1)
  )
 )
 (func $8 (param $0 v128) (param $1 v128) (result v128)
  (i16x8.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $9 (param $0 v128) (param $1 v128) (result v128)
  (i32x4.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $10 (param $0 v128) (param $1 v128) (result v128)
  (i64x2.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $11 (param $0 v128) (param $1 v128) (result v128)
  (i16x8.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $12 (param $0 v128) (param $1 v128) (result v128)
  (i32x4.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $13 (param $0 v128) (param $1 v128) (result v128)
  (i64x2.mul
   (local.get $1)
   (local.get $0)
  )
 )
 (func $14 (param $0 v128) (param $1 v128) (result v128)
  (f32x4.mul
   (local.get $0)
   (local.get $1)
  )
 )
 (func $15 (param $0 v128) (param $1 v128) (result v128)
  (f64x2.mul
   (local.get $0)
   (local.get $1)
  )
 )
 ;; custom section "linking", size 232
 ;; custom section "producers", size 157
 ;; features section: simd
)

