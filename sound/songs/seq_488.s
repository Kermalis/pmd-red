@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_488_grp, bank_026
	.equ	seq_488_pri, 127
	.equ	seq_488_rev, 0
	.equ	seq_488_mvl, 127
	.equ	seq_488_key, 0

	.section .rodata
	.global	seq_488
	.align	2

@*********************** Track 01 ***********************@

seq_488_0:
	.byte	KEYSH , seq_488_key+0
	.byte	TEMPO , 130/2
	.byte		VOICE , 8
	.byte		VOL   , 90*seq_488_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		BENDR , 41
	.byte		BEND  , c_v-15
	.byte	W01
	.byte		N06   , En3 , v120
	.byte	W01
	.byte	W04
	.byte		BEND  , c_v+2
	.byte	W01
	.byte		N30   , Dn2 
	.byte	W02
	.byte		VOL   , 79*seq_488_mvl/mxv
	.byte	W01
	.byte		        70*seq_488_mvl/mxv
	.byte	W01
	.byte		        67*seq_488_mvl/mxv
	.byte	W01
	.byte		VOICE , 16
	.byte		VOL   , 63*seq_488_mvl/mxv
	.byte	W01
	.byte		        59*seq_488_mvl/mxv
	.byte	W01
	.byte		        55*seq_488_mvl/mxv
	.byte	W01
	.byte		        52*seq_488_mvl/mxv
	.byte	W01
	.byte		        48*seq_488_mvl/mxv
	.byte		BEND  , c_v-4
	.byte	W01
	.byte		VOL   , 44*seq_488_mvl/mxv
	.byte		BEND  , c_v-6
	.byte	W01
	.byte		VOL   , 41*seq_488_mvl/mxv
	.byte		BEND  , c_v-7
	.byte	W01
	.byte		VOL   , 36*seq_488_mvl/mxv
	.byte		BEND  , c_v-9
	.byte	W01
	.byte		VOL   , 33*seq_488_mvl/mxv
	.byte		BEND  , c_v-11
	.byte	W01
	.byte		VOL   , 28*seq_488_mvl/mxv
	.byte		BEND  , c_v-13
	.byte	W01
	.byte		VOL   , 26*seq_488_mvl/mxv
	.byte		BEND  , c_v-15
	.byte	W01
	.byte		VOL   , 24*seq_488_mvl/mxv
	.byte		BEND  , c_v-16
	.byte	W01
	.byte		VOL   , 21*seq_488_mvl/mxv
	.byte		BEND  , c_v-18
	.byte	W01
	.byte		        c_v-20
	.byte	W01
	.byte		VOL   , 17*seq_488_mvl/mxv
	.byte		BEND  , c_v-22
	.byte	W01
	.byte		VOL   , 15*seq_488_mvl/mxv
	.byte		BEND  , c_v-26
	.byte	W01
	.byte		VOL   , 13*seq_488_mvl/mxv
	.byte		BEND  , c_v-28
	.byte	W01
	.byte		VOL   , 12*seq_488_mvl/mxv
	.byte		BEND  , c_v-32
	.byte	W01
	.byte		VOL   , 11*seq_488_mvl/mxv
	.byte		BEND  , c_v-34
	.byte	W01
	.byte		VOL   , 9*seq_488_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W01
	.byte		VOL   , 8*seq_488_mvl/mxv
	.byte		BEND  , c_v-40
	.byte	W01
	.byte		VOL   , 7*seq_488_mvl/mxv
	.byte	W01
	.byte		        5*seq_488_mvl/mxv
	.byte	W01
	.byte		        4*seq_488_mvl/mxv
	.byte	W01
	.byte		        2*seq_488_mvl/mxv
	.byte	W02
	.byte	FINE

@******************************************************@

	.align	2

seq_488:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_488_pri	@ Priority
	.byte	seq_488_rev	@ Reverb

	.word	seq_488_grp

	.word	seq_488_0

	.end
