@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_706_grp, bank_026
	.equ	seq_706_pri, 127
	.equ	seq_706_rev, 0
	.equ	seq_706_mvl, 127
	.equ	seq_706_key, 0

	.section .rodata
	.global	seq_706
	.align	2

@*********************** Track 01 ***********************@

seq_706_0:
	.byte	KEYSH , seq_706_key+0
	.byte	TEMPO , 200/2
	.byte		VOICE , 12
	.byte		VOL   , 113*seq_706_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte	W02
	.byte		BEND  , c_v+0
	.byte		N19   , Gn4 , v127
	.byte	W02
	.byte		BEND  , c_v-1
	.byte		N18   , En3 , v088
	.byte	W01
	.byte		BEND  , c_v-5
	.byte	W01
	.byte		        c_v-18
	.byte	W01
	.byte		        c_v-39
	.byte	W01
	.byte		        c_v-58
	.byte	W03
	.byte		        c_v-60
	.byte	W01
	.byte		        c_v-60
	.byte	W01
	.byte		VOL   , 110*seq_706_mvl/mxv
	.byte		BEND  , c_v-57
	.byte	W01
	.byte		VOL   , 101*seq_706_mvl/mxv
	.byte		BEND  , c_v-52
	.byte	W01
	.byte		VOL   , 91*seq_706_mvl/mxv
	.byte		BEND  , c_v-46
	.byte	W01
	.byte		VOL   , 80*seq_706_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W01
	.byte		VOL   , 69*seq_706_mvl/mxv
	.byte		BEND  , c_v-28
	.byte	W01
	.byte		VOL   , 58*seq_706_mvl/mxv
	.byte		BEND  , c_v-17
	.byte	W01
	.byte		VOL   , 48*seq_706_mvl/mxv
	.byte		BEND  , c_v-4
	.byte	W01
	.byte		VOL   , 38*seq_706_mvl/mxv
	.byte		BEND  , c_v+12
	.byte	W01
	.byte		VOL   , 27*seq_706_mvl/mxv
	.byte		BEND  , c_v+29
	.byte	W01
	.byte		        c_v+48
	.byte	FINE

@******************************************************@

	.align	2

seq_706:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_706_pri	@ Priority
	.byte	seq_706_rev	@ Reverb

	.word	seq_706_grp

	.word	seq_706_0

	.end