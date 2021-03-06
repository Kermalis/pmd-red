@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_735_grp, bank_026
	.equ	seq_735_pri, 127
	.equ	seq_735_rev, 0
	.equ	seq_735_mvl, 127
	.equ	seq_735_key, 0

	.section .rodata
	.global	seq_735
	.align	2

@*********************** Track 01 ***********************@

seq_735_0:
	.byte	KEYSH , seq_735_key+0
	.byte	TEMPO , 150/2
	.byte		VOICE , 29
	.byte		VOL   , 127*seq_735_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		VOL   , 63*seq_735_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W01
	.byte		BENDR , 24
	.byte		VOL   , 64*seq_735_mvl/mxv
	.byte	W01
	.byte		        66*seq_735_mvl/mxv
	.byte	W02
	.byte		        69*seq_735_mvl/mxv
	.byte		N01   , As2 , v120
	.byte	W01
	.byte		VOL   , 71*seq_735_mvl/mxv
	.byte	W01
	.byte		N01   , Bn2 
	.byte	W01
	.byte		VOL   , 74*seq_735_mvl/mxv
	.byte		N01   , Cn3 
	.byte	W01
	.byte		VOL   , 75*seq_735_mvl/mxv
	.byte	W01
	.byte		        77*seq_735_mvl/mxv
	.byte		N01   , Cs3 
	.byte	W01
	.byte		VOL   , 78*seq_735_mvl/mxv
	.byte		N01   , Dn3 
	.byte	W01
	.byte		VOL   , 79*seq_735_mvl/mxv
	.byte	W01
	.byte		        81*seq_735_mvl/mxv
	.byte		N01   , Ds3 
	.byte	W01
	.byte		VOL   , 82*seq_735_mvl/mxv
	.byte		N01   , En3 
	.byte	W01
	.byte		VOL   , 84*seq_735_mvl/mxv
	.byte	W01
	.byte		        87*seq_735_mvl/mxv
	.byte		N01   , Fn3 
	.byte	W01
	.byte		VOL   , 89*seq_735_mvl/mxv
	.byte		N01   , Fs3 
	.byte	W01
	.byte		VOL   , 90*seq_735_mvl/mxv
	.byte		N01   , Fn3 
	.byte	W01
	.byte		VOL   , 92*seq_735_mvl/mxv
	.byte	W01
	.byte		        93*seq_735_mvl/mxv
	.byte		N01   , Fs3 
	.byte	W01
	.byte		VOL   , 94*seq_735_mvl/mxv
	.byte		N01   , Gn3 , v080
	.byte	W01
	.byte		VOL   , 95*seq_735_mvl/mxv
	.byte	W01
	.byte		        97*seq_735_mvl/mxv
	.byte		N01   , Fs3 , v120
	.byte	W01
	.byte		VOL   , 98*seq_735_mvl/mxv
	.byte		N01   , Gs3 , v080
	.byte	W01
	.byte		VOL   , 99*seq_735_mvl/mxv
	.byte	W01
	.byte		        101*seq_735_mvl/mxv
	.byte		N01   , Gn3 , v120
	.byte	W01
	.byte		        An3 , v080
	.byte	W01
	.byte		VOL   , 103*seq_735_mvl/mxv
	.byte	W01
	.byte		N01   , Gs3 , v120
	.byte	W01
	.byte		VOL   , 105*seq_735_mvl/mxv
	.byte		N01   , As3 , v080
	.byte	W01
	.byte		VOL   , 106*seq_735_mvl/mxv
	.byte	W01
	.byte		        107*seq_735_mvl/mxv
	.byte		N01   , An3 , v120
	.byte	W01
	.byte		VOL   , 108*seq_735_mvl/mxv
	.byte		N01   , Bn3 , v080
	.byte	W01
	.byte		VOL   , 107*seq_735_mvl/mxv
	.byte	W01
	.byte		        104*seq_735_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		N01   , As3 , v120
	.byte	W01
	.byte		VOL   , 100*seq_735_mvl/mxv
	.byte		BEND  , c_v+2
	.byte		N01   , Bn3 , v080
	.byte	W01
	.byte		VOL   , 96*seq_735_mvl/mxv
	.byte		BEND  , c_v+6
	.byte	W01
	.byte		VOL   , 92*seq_735_mvl/mxv
	.byte		BEND  , c_v+8
	.byte		N01   , As3 , v120
	.byte	W01
	.byte		VOL   , 85*seq_735_mvl/mxv
	.byte		BEND  , c_v+8
	.byte		N01   , Bn3 , v080
	.byte	W01
	.byte		VOL   , 79*seq_735_mvl/mxv
	.byte		BEND  , c_v+11
	.byte	W01
	.byte		VOL   , 71*seq_735_mvl/mxv
	.byte		BEND  , c_v+16
	.byte		N01   , As3 , v120
	.byte	W01
	.byte		VOL   , 63*seq_735_mvl/mxv
	.byte		BEND  , c_v+17
	.byte	FINE

@******************************************************@

	.align	2

seq_735:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_735_pri	@ Priority
	.byte	seq_735_rev	@ Reverb

	.word	seq_735_grp

	.word	seq_735_0

	.end
