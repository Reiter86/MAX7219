/*
 * font8x8.h
 *
 * Created: 18.03.2019 18:05:03
 *  Author: reiter
 */ 

#ifndef __FONT8X8_H__
#define __FONT8X8_H__

uint8_t digit_5x4_0[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00001001,
	0b00001001,
	0b00001001,
	0b00001111
	
};

uint8_t digit_5x4_1[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
	0b01000000,
	0b11000000,
	0b01000000,
	0b01000000,
	0b11100000
	
};


uint8_t digit_5x4_2[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00001000,
	0b00001111,
	0b00000001,
	0b00001111
	
};

uint8_t digit_5x4_3[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00001000,
	0b00001110,
	0b00001000,
	0b00001111
	
};

uint8_t digit_5x4_4[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
	0b00000100,
	0b00000010,
	0b00000101,
	0b00001111,
	0b00000100
	
};

uint8_t digit_5x4_5[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00000001,
	0b00001111,
	0b00001000,
	0b00001111
	
};

uint8_t digit_5x4_6[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00000001,
	0b00001111,
	0b00001001,
	0b00001111
};

uint8_t digit_5x4_7[8] = { 
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00001001,
	0b00000100,
	0b00000010,
	0b00000010
};

uint8_t digit_5x4_8[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
	 0b00001111,
	 0b00001001,
	 0b00001111,
	 0b00001001,
	 0b00001111

};

uint8_t digit_5x4_9[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
	0b00001111,
	0b00001001,
	0b00001111,
	0b00001000,
	0b00001111

};

uint8_t *digit_5x4 [10] = {
	digit_5x4_0,
	digit_5x4_1,
	digit_5x4_2,
	digit_5x4_3,
	digit_5x4_4,
	digit_5x4_5,
	digit_5x4_6,
	digit_5x4_7,
	digit_5x4_8,
	digit_5x4_9};


//"""""""""""""""""""""""""""""""""

uint8_t ascii_8x5_whitespace[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000011
};

uint8_t ascii_8x5_exclamationmark[8] ={
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b00000000,
  0b10000000,
  0b10000000,
  0b00000010
};

uint8_t ascii_8x5_doublequote[8] ={
  0b10100000,
  0b10100000,
  0b10100000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000100
};

uint8_t ascii_8x5_hash [8] ={
  0b01010000,
  0b01010000,
  0b11111000,
  0b01010000,
  0b11111000,
  0b01010000,
  0b01010000,
  0b00000110
};

uint8_t ascii_8x5_dollar[8] ={
  0b00100000,
  0b01111000,
  0b10100000,
  0b01110000,
  0b00101000,
  0b11110000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_percent[8] ={
  0b11000000,
  0b11001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10011000,
  0b00011000,
  0b00000110
};

uint8_t ascii_8x5_ampersand[8] ={
  0b01100000,
  0b10010000,
  0b10100000,
  0b01000000,
  0b10101000,
  0b10010000,
  0b01101000,
  0b00000110
};

uint8_t ascii_8x5_singlequote[8] ={
  0b11000000,
  0b01000000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000011
};

uint8_t ascii_8x5_openparenthesis[8] = {
  0b00100000,
  0b01000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00000100
};

uint8_t ascii_8x5_closeparenthesis[8] = {
  0b10000000,
  0b01000000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b00000100
};

uint8_t ascii_8x5_asterisk[8] = {
  0b00000000,
  0b00100000,
  0b10101000,
  0b01110000,
  0b10101000,
  0b00100000,
  0b00000000,
  0b00000110
};

uint8_t ascii_8x5_plus[8] = {
  0b00000000,
  0b00100000,
  0b00100000,
  0b11111000,
  0b00100000,
  0b00100000,
  0b00000000,
  0b00000110
};

uint8_t ascii_8x5_comma[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11000000,
  0b01000000,
  0b10000000,
  0b00000011
};

uint8_t ascii_8x5_minus[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
  0b11111000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000110
};

uint8_t ascii_8x5_dot[8] = {
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11000000,
  0b11000000,
  0b00000011
};

uint8_t ascii_8x5_slash[8] ={
  0b00000000,
  0b00000000,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_0[8] = {
  0b01110000,
  0b10001000,
  0b10011000,
  0b10101000,
  0b11001000,
  0b10001000,
  0b01110000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_1[8] = {
  0b01000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000,
  0b00000100 //4+4
};


uint8_t ascii_8x5_2[8] ={
  0b01110000,
  0b10001000,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b11111000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_3[8] = {
  0b11111000,
  0b00010000,
  0b00100000,
  0b00010000,
  0b00001000,
  0b10001000,
  0b01110000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_4[8] = {
  0b00010000,
  0b00110000,
  0b01010000,
  0b10010000,
  0b11111000,
  0b00010000,
  0b00010000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_5[8] ={
  0b11111000,
  0b10000000,
  0b11110000,
  0b00001000,
  0b00001000,
  0b10001000,
  0b01110000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_6[8] ={
  0b00110000,
  0b01000000,
  0b10000000,
  0b11110000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_7[8] ={
  0b11111000,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_8[8] ={
  0b01110000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_9[8] ={
  0b01110000,
  0b10001000,
  0b10001000,
  0b01111000,
  0b00001000,
  0b00010000,
  0b01100000,
  0b00000110 //6+2
};

uint8_t ascii_8x5_colon[8] ={
  0b00000000,
  0b00000000,
  0b11000000,
  0b11000000,
  0b00000000,
  0b11000000,
  0b11000000,
  0b00000011
};

uint8_t ascii_8x5_semicolon[8] ={
  0b00000000,
  0b11000000,
  0b11000000,
  0b00000000,
  0b11000000,
  0b01000000,
  0b10000000,
  0b00000011
};

uint8_t ascii_8x5_lessthan[8] ={
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00000110
};

uint8_t ascii_8x5_greaterthan[8] ={
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_equal[8] ={
  0b00000000,
  0b00000000,
  0b11111000,
  0b00000000,
  0b11111000,
  0b00000000,
  0b00000000,
  0b00000110
};

uint8_t ascii_8x5_questionmark[8] ={
  0b01110000,
  0b10001000,
  0b00001000,
  0b00010000,
  0b00100000,
  0b00000000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_at[8] ={
  0b01110000,
  0b10001000,
  0b00001000,
  0b01101000,
  0b10101000,
  0b10101000,
  0b01111000,
  0b00000110
};

uint8_t ascii_8x5_A[8] ={
  0b01110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b11111000,
  0b10001000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_0b[8] ={
  0b11110000,
  0b10001000,
  0b10001000,
  0b11110000,
  0b10001000,
  0b10001000,
  0b11110000,
  0b00000110
};

uint8_t ascii_8x5_C[8] ={
  0b01110000,
  0b10001000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10001000,
  0b01110000,
  0b00000110
};
uint8_t ascii_8x5_D[8] ={
  0b11100000,
  0b10010000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10010000,
  0b11100000,
  0b00000110
};

uint8_t ascii_8x5_E[8] ={
  0b11111000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b11111000,
  0b00000110
};

uint8_t ascii_8x5_F[8] ={
  0b11111000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_G[8] ={
  0b01110000,
  0b10001000,
  0b10000000,
  0b10111000,
  0b10001000,
  0b10001000,
  0b01111000,
  0b00000110
};

uint8_t ascii_8x5_H[8] ={
  0b10001000,
  0b10001000,
  0b10001000,
  0b11111000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_I[8] ={
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000,
  0b00000100
};

uint8_t ascii_8x5_J[8] ={
  0b00111000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b10010000,
  0b01100000,
  0b00000110
};

uint8_t ascii_8x5_K[8] ={
  0b10001000,
  0b10010000,
  0b10100000,
  0b11000000,
  0b10100000,
  0b10010000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_L[8] ={
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11111000,
  0b00000110
};

uint8_t ascii_8x5_M[8] ={
  0b10001000,
  0b11011000,
  0b10101000,
  0b10101000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_N[8] ={
  0b10001000,
  0b10001000,
  0b11001000,
  0b10101000,
  0b10011000,
  0b10001000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_O[8] ={
  0b01110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b00000110
};

uint8_t ascii_8x5_P[8] ={
  0b11110000,
  0b10001000,
  0b10001000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_Q[8] ={
  0b01110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10101000,
  0b10010000,
  0b01101000,
  0b00000110
};

uint8_t ascii_8x5_R[8] ={
  0b11110000,
  0b10001000,
  0b10001000,
  0b11110000,
  0b10100000,
  0b10010000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_S[8] ={
  0b01111000,
  0b10000000,
  0b10000000,
  0b01110000,
  0b00001000,
  0b00001000,
  0b11110000,
  0b00000110
};

uint8_t ascii_8x5_T[8] ={
  0b11111000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_U[8] ={
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b00000110
};

uint8_t ascii_8x5_V[8] ={
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01010000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_W[8] ={
  0b10001000,
  0b10001000,
  0b10001000,
  0b10101000,
  0b10101000,
  0b10101000,
  0b01010000,
  0b00000110
};

uint8_t ascii_8x5_X[8] ={
  0b10001000,
  0b10001000,
  0b01010000,
  0b00100000,
  0b01010000,
  0b10001000,
  0b10001000,
  0b00000110

};

uint8_t ascii_8x5_Y[8] ={
  0b10001000,
  0b10001000,
  0b10001000,
  0b01010000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_Z[8] ={
  0b11111000,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b10000000,
  0b11111000,
  0b00000110
};
uint8_t ascii_8x5_openbracket[8] ={
  0b11100000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b11100000,
  0b00000100
};

uint8_t ascii_8x5_backslash[8] ={
0b00000000,
  0b00000000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b00001000,
  0b00000110
};

uint8_t ascii_8x5_closebracket[8] ={
  0b11100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b00100000,
  0b11100000,
  0b00000100
};

uint8_t ascii_8x5_carat[8] ={
  0b00100000,
  0b01010000,
  0b10001000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000110
};

uint8_t ascii_8x5_underscore[8] ={
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11111000,
  0b00000110
};

uint8_t ascii_8x5_backquote[8] ={
  0b10000000,
  0b01000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000011
};

uint8_t ascii_8x5_a[8] ={
  0b00000000,
  0b00000000,
  0b01110000,
  0b00001000,
  0b01111000,
  0b10001000,
  0b01111000,
  0b00000110
};

uint8_t ascii_8x5_b[8] ={
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10001000,
  0b10001000,
  0b11110000,
  0b00000110
};

uint8_t ascii_8x5_c[8] ={
  0b00000000,
  0b00000000,
  0b01110000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b01110000,
  0b00000101
};

uint8_t ascii_8x5_d[8] ={
  0b00001000,
  0b00001000,
  0b00001000,
  0b01111000,
  0b10001000,
  0b10001000,
  0b01111000,
  0b00000110
};

uint8_t ascii_8x5_e[8] ={
  0b00000000,
  0b00000000,
  0b01110000,
  0b10001000,
  0b11111000,
  0b10000000,
  0b01110000,
  0b00000110
};

uint8_t ascii_8x5_f[8] ={
   0b00110000,
  0b01001000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b00000110
};

uint8_t ascii_8x5_g[8] ={
  0b00000000,
  0b01111000,
  0b10001000,
  0b10001000,
  0b01111000,
  0b00001000,
  0b01110000,
  0b00000110
};

  uint8_t ascii_8x5_h[8] ={
  0b10000000,
  0b10000000,
  0b10000000,
  0b11110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b00000110
  };

uint8_t ascii_8x5_i[8] ={
  0b01000000,
  0b00000000,
  0b11000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000,
  0b00000100
};

uint8_t ascii_8x5_j[8] ={
  0b00010000,
  0b00000000,
  0b00110000,
  0b00010000,
  0b00010000,
  0b10010000,
  0b01100000,
  0b00000101
};

uint8_t ascii_8x5_k[8] ={
  0b10000000,
  0b10000000,
  0b10010000,
  0b10100000,
  0b11000000,
  0b10100000,
  0b10010000,
  0b00000101
};

uint8_t ascii_8x5_l[8] ={
  0b11000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b01000000,
  0b11100000,
  0b00000100
};

uint8_t ascii_8x5_m[8] ={
  0b00000000,
  0b00000000,
  0b11010000,
  0b10101000,
  0b10101000,
  0b10101000,
  0b10101000,
  0b00000110
};

uint8_t ascii_8x5_n[8] ={
  0b00000000,
  0b00000000,
  0b10110000,
  0b11001000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_o[8] ={
  0b00000000,
  0b00000000,
  0b01110000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01110000,
  0b00000110
};

uint8_t ascii_8x5_p[8] ={
  0b00000000,
  0b00000000,
  0b11110000,
  0b10001000,
  0b11110000,
  0b10000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_q[8] ={
  0b00000000,
  0b00000000,
  0b01111000,
  0b10001000,
  0b01111000,
  0b00001000,
  0b00001000,
  0b00000110
};

uint8_t ascii_8x5_r[8] ={
  0b00000000,
  0b00000000,
  0b10110000,
  0b11001000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b00000110
};

uint8_t ascii_8x5_s[8] ={
  0b00000000,
  0b00000000,
  0b01110000,
  0b10000000,
  0b01110000,
  0b00001000,
  0b11110000,
  0b00000110
};

uint8_t ascii_8x5_t[8] ={
  0b01000000,
  0b01000000,
  0b11100000,
  0b01000000,
  0b01000000,
  0b01001000,
  0b00110000,
  0b00000110
};

uint8_t ascii_8x5_u[8] ={
  0b00000000,
  0b00000000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b10011000,
  0b01101000,
  0b00000110
};

uint8_t ascii_8x5_v[8] ={
  0b00000000,
  0b00000000,
  0b10001000,
  0b10001000,
  0b10001000,
  0b01010000,
  0b00100000,
  0b00000110
};

uint8_t ascii_8x5_w[8] ={
  0b00000000,
  0b00000000,
  0b10001000,
  0b10001000,
  0b10101000,
  0b10101000,
  0b01010000,
  0b00000110
};

uint8_t ascii_8x5_x[8] ={
  0b00000000,
  0b00000000,
  0b10001000,
  0b01010000,
  0b00100000,
  0b01010000,
  0b10001000,
  0b00000110
};

uint8_t ascii_8x5_y[8] ={
  0b00000000,
  0b00000000,
  0b10001000,
  0b10001000,
  0b01111000,
  0b00001000,
  0b01110000,
  0b00000110
};

uint8_t ascii_8x5_z[8] ={
  0b00000000,
  0b00000000,
  0b11111000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b11111000,
  0b00000110
};

uint8_t ascii_8x5_openbrace[8] ={
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b01000000,
  0b01000000,
  0b00100000,
  0b00000100
};

uint8_t ascii_8x5_bar[8] ={
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b10000000,
  0b00000010
};

uint8_t ascii_8x5_closebrace[8] ={
  0b10000000,
  0b01000000,
  0b01000000,
  0b00100000,
  0b01000000,
  0b01000000,
  0b10000000,
  0b00000100
};

uint8_t ascii_8x5_tilde[8] ={
  0b00000000,
  0b00000000,
  0b00001000,
  0b01110000,
  0b10000000,
  0b00000000,
  0b00000000,
  0b00000110
};

uint8_t *ascii [] = {
ascii_8x5_whitespace,  
ascii_8x5_exclamationmark,
ascii_8x5_doublequote,
ascii_8x5_hash,
ascii_8x5_dollar,
ascii_8x5_percent,
ascii_8x5_ampersand,
ascii_8x5_singlequote,
ascii_8x5_openparenthesis,
ascii_8x5_closeparenthesis,
ascii_8x5_asterisk,
ascii_8x5_plus,
ascii_8x5_comma,
ascii_8x5_minus,
ascii_8x5_dot,
ascii_8x5_slash,
ascii_8x5_0,
ascii_8x5_1,
ascii_8x5_2,
ascii_8x5_3,
ascii_8x5_4,
ascii_8x5_5,
ascii_8x5_6,
ascii_8x5_7,
ascii_8x5_8,
ascii_8x5_9,
ascii_8x5_colon,
ascii_8x5_semicolon,
ascii_8x5_lessthan,
ascii_8x5_equal,
ascii_8x5_greaterthan,
ascii_8x5_questionmark,
ascii_8x5_at,
ascii_8x5_A,  
ascii_8x5_0b,   
ascii_8x5_C,   
ascii_8x5_D,   
ascii_8x5_E,   
ascii_8x5_F,   
ascii_8x5_G,   
ascii_8x5_H,   
ascii_8x5_I,   
ascii_8x5_J,   
ascii_8x5_K,   
ascii_8x5_L,   
ascii_8x5_M,   
ascii_8x5_N,   
ascii_8x5_O,   
ascii_8x5_P,   
ascii_8x5_Q,   
ascii_8x5_R,   
ascii_8x5_S,   
ascii_8x5_T,   
ascii_8x5_U,  
ascii_8x5_V,   
ascii_8x5_W,   
ascii_8x5_X,
ascii_8x5_Y,   
ascii_8x5_Z,
ascii_8x5_openbracket,
ascii_8x5_backslash,
ascii_8x5_closebracket,
ascii_8x5_carat,
ascii_8x5_underscore,
ascii_8x5_backquote,
ascii_8x5_a,
ascii_8x5_b,
ascii_8x5_c,
ascii_8x5_d,
ascii_8x5_e,
ascii_8x5_f,
ascii_8x5_g,
ascii_8x5_h,
ascii_8x5_i,
ascii_8x5_j,
ascii_8x5_k,
ascii_8x5_l,
ascii_8x5_m,
ascii_8x5_n,
ascii_8x5_o,
ascii_8x5_p,
ascii_8x5_q,
ascii_8x5_r,
ascii_8x5_s,
ascii_8x5_t,
ascii_8x5_u,
ascii_8x5_v,
ascii_8x5_w,
ascii_8x5_x,
ascii_8x5_y,
ascii_8x5_z,
ascii_8x5_openbrace,
ascii_8x5_bar,
ascii_8x5_closebrace,
ascii_8x5_tilde
};

#endif /* __FONT8X8_H__ */
