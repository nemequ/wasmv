#include "../wav.h"

wav_f32x4_t pmin_f32x4(wav_f32x4_t a, wav_f32x4_t b) { return wav_f32x4_pmin(a, b); }
wav_f64x2_t pmin_f64x2(wav_f64x2_t a, wav_f64x2_t b) { return wav_f64x2_pmin(a, b); }

wav_f32x4_t pmin_f32x4_o(wav_f32x4_t a, wav_f32x4_t b) { return wav_pmin(a, b); }
wav_f64x2_t pmin_f64x2_o(wav_f64x2_t a, wav_f64x2_t b) { return wav_pmin(a, b); }
