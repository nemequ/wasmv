#include "../wav.h"

wav_i8x16_t or_i8x16(wav_i8x16_t a, wav_i8x16_t b) { return wav_i8x16_or(a, b); }
wav_i16x8_t or_i16x8(wav_i16x8_t a, wav_i16x8_t b) { return wav_i16x8_or(a, b); }
wav_i32x4_t or_i32x4(wav_i32x4_t a, wav_i32x4_t b) { return wav_i32x4_or(a, b); }
wav_i64x2_t or_i64x2(wav_i64x2_t a, wav_i64x2_t b) { return wav_i64x2_or(a, b); }
wav_u8x16_t or_u8x16(wav_u8x16_t a, wav_u8x16_t b) { return wav_u8x16_or(a, b); }
wav_u16x8_t or_u16x8(wav_u16x8_t a, wav_u16x8_t b) { return wav_u16x8_or(a, b); }
wav_u32x4_t or_u32x4(wav_u32x4_t a, wav_u32x4_t b) { return wav_u32x4_or(a, b); }
wav_u64x2_t or_u64x2(wav_u64x2_t a, wav_u64x2_t b) { return wav_u64x2_or(a, b); }
wav_b8x16_t or_b8x16(wav_b8x16_t a, wav_b8x16_t b) { return wav_b8x16_or(a, b); }
wav_b16x8_t or_b16x8(wav_b16x8_t a, wav_b16x8_t b) { return wav_b16x8_or(a, b); }
wav_b32x4_t or_b32x4(wav_b32x4_t a, wav_b32x4_t b) { return wav_b32x4_or(a, b); }
wav_b64x2_t or_b64x2(wav_b64x2_t a, wav_b64x2_t b) { return wav_b64x2_or(a, b); }

wav_i8x16_t or_i8x16_b(wav_i8x16_t a, wav_b8x16_t b) { return wav_i8x16_or_b8x16(a, b); }
wav_i16x8_t or_i16x8_b(wav_i16x8_t a, wav_b16x8_t b) { return wav_i16x8_or_b16x8(a, b); }
wav_i32x4_t or_i32x4_b(wav_i32x4_t a, wav_b32x4_t b) { return wav_i32x4_or_b32x4(a, b); }
wav_i64x2_t or_i64x2_b(wav_i64x2_t a, wav_b64x2_t b) { return wav_i64x2_or_b64x2(a, b); }
wav_u8x16_t or_u8x16_b(wav_u8x16_t a, wav_b8x16_t b) { return wav_u8x16_or_b8x16(a, b); }
wav_u16x8_t or_u16x8_b(wav_u16x8_t a, wav_b16x8_t b) { return wav_u16x8_or_b16x8(a, b); }
wav_u32x4_t or_u32x4_b(wav_u32x4_t a, wav_b32x4_t b) { return wav_u32x4_or_b32x4(a, b); }
wav_u64x2_t or_u64x2_b(wav_u64x2_t a, wav_b64x2_t b) { return wav_u64x2_or_b64x2(a, b); }
wav_f32x4_t or_f32x4_b(wav_f32x4_t a, wav_b32x4_t b) { return wav_f32x4_or_b32x4(a, b); }
wav_f64x2_t or_f64x2_b(wav_f64x2_t a, wav_b64x2_t b) { return wav_f64x2_or_b64x2(a, b); }

wav_i8x16_t or_b8x16_i(wav_b8x16_t a, wav_i8x16_t b) { return wav_b8x16_or_i8x16(a, b); }
wav_i16x8_t or_b16x8_i(wav_b16x8_t a, wav_i16x8_t b) { return wav_b16x8_or_i16x8(a, b); }
wav_i32x4_t or_b32x4_i(wav_b32x4_t a, wav_i32x4_t b) { return wav_b32x4_or_i32x4(a, b); }
wav_i64x2_t or_b64x2_i(wav_b64x2_t a, wav_i64x2_t b) { return wav_b64x2_or_i64x2(a, b); }
wav_u8x16_t or_b8x16_u(wav_b8x16_t a, wav_u8x16_t b) { return wav_b8x16_or_u8x16(a, b); }
wav_u16x8_t or_b16x8_u(wav_b16x8_t a, wav_u16x8_t b) { return wav_b16x8_or_u16x8(a, b); }
wav_u32x4_t or_b32x4_u(wav_b32x4_t a, wav_u32x4_t b) { return wav_b32x4_or_u32x4(a, b); }
wav_u64x2_t or_b64x2_u(wav_b64x2_t a, wav_u64x2_t b) { return wav_b64x2_or_u64x2(a, b); }
wav_f32x4_t or_b32x4_f(wav_b32x4_t a, wav_f32x4_t b) { return wav_b32x4_or_f32x4(a, b); }
wav_f64x2_t or_b64x2_f(wav_b64x2_t a, wav_f64x2_t b) { return wav_b64x2_or_f64x2(a, b); }

#if WAV_OPERATOR_OVERLOADING
wav_i8x16_t or_i8x16_op(wav_i8x16_t a, wav_i8x16_t b) { return a | b; }
wav_i16x8_t or_i16x8_op(wav_i16x8_t a, wav_i16x8_t b) { return a | b; }
wav_i32x4_t or_i32x4_op(wav_i32x4_t a, wav_i32x4_t b) { return a | b; }
wav_i64x2_t or_i64x2_op(wav_i64x2_t a, wav_i64x2_t b) { return a | b; }
wav_u8x16_t or_u8x16_op(wav_u8x16_t a, wav_u8x16_t b) { return a | b; }
wav_u16x8_t or_u16x8_op(wav_u16x8_t a, wav_u16x8_t b) { return a | b; }
wav_u32x4_t or_u32x4_op(wav_u32x4_t a, wav_u32x4_t b) { return a | b; }
wav_u64x2_t or_u64x2_op(wav_u64x2_t a, wav_u64x2_t b) { return a | b; }
wav_b8x16_t or_b8x16_op(wav_b8x16_t a, wav_b8x16_t b) { return a | b; }
wav_b16x8_t or_b16x8_op(wav_b16x8_t a, wav_b16x8_t b) { return a | b; }
wav_b32x4_t or_b32x4_op(wav_b32x4_t a, wav_b32x4_t b) { return a | b; }
wav_b64x2_t or_b64x2_op(wav_b64x2_t a, wav_b64x2_t b) { return a | b; }

wav_i8x16_t or_i8x16_b_op(wav_i8x16_t a, wav_b8x16_t b) { return a | b; }
wav_i16x8_t or_i16x8_b_op(wav_i16x8_t a, wav_b16x8_t b) { return a | b; }
wav_i32x4_t or_i32x4_b_op(wav_i32x4_t a, wav_b32x4_t b) { return a | b; }
wav_i64x2_t or_i64x2_b_op(wav_i64x2_t a, wav_b64x2_t b) { return a | b; }
wav_u8x16_t or_u8x16_b_op(wav_u8x16_t a, wav_b8x16_t b) { return a | b; }
wav_u16x8_t or_u16x8_b_op(wav_u16x8_t a, wav_b16x8_t b) { return a | b; }
wav_u32x4_t or_u32x4_b_op(wav_u32x4_t a, wav_b32x4_t b) { return a | b; }
wav_u64x2_t or_u64x2_b_op(wav_u64x2_t a, wav_b64x2_t b) { return a | b; }
wav_f32x4_t or_f32x4_b_op(wav_f32x4_t a, wav_b32x4_t b) { return a | b; }
wav_f64x2_t or_f64x2_b_op(wav_f64x2_t a, wav_b64x2_t b) { return a | b; }

wav_i8x16_t or_b8x16_i_op(wav_b8x16_t a, wav_i8x16_t b) { return a | b; }
wav_i16x8_t or_b16x8_i_op(wav_b16x8_t a, wav_i16x8_t b) { return a | b; }
wav_i32x4_t or_b32x4_i_op(wav_b32x4_t a, wav_i32x4_t b) { return a | b; }
wav_i64x2_t or_b64x2_i_op(wav_b64x2_t a, wav_i64x2_t b) { return a | b; }
wav_u8x16_t or_b8x16_u_op(wav_b8x16_t a, wav_u8x16_t b) { return a | b; }
wav_u16x8_t or_b16x8_u_op(wav_b16x8_t a, wav_u16x8_t b) { return a | b; }
wav_u32x4_t or_b32x4_u_op(wav_b32x4_t a, wav_u32x4_t b) { return a | b; }
wav_u64x2_t or_b64x2_u_op(wav_b64x2_t a, wav_u64x2_t b) { return a | b; }
wav_f32x4_t or_b32x4_f_op(wav_b32x4_t a, wav_f32x4_t b) { return a | b; }
wav_f64x2_t or_b64x2_f_op(wav_b64x2_t a, wav_f64x2_t b) { return a | b; }
#endif