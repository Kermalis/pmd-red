@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_303_grp, bank_027
	.equ	seq_303_pri, 127
	.equ	seq_303_rev, 0
	.equ	seq_303_mvl, 127
	.equ	seq_303_key, 0

	.section .rodata
	.global	seq_303
	.align	2

@*********************** Track 01 ***********************@

seq_303_0:
	.byte	KEYSH , seq_303_key+0
	.byte	TEMPO , 150/2
	.byte		VOICE , 64
	.byte		VOL   , 70*seq_303_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		N02   , As2 , v100
	.byte	W03
	.byte		        Gn2 , v092
	.byte	W02
	.byte		N01   , Gn3 , v080
	.byte	W01
	.byte		        Gn3 , v020
	.byte	W01
	.byte	FINE

@******************************************************@

	.align	2

seq_303:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_303_pri	@ Priority
	.byte	seq_303_rev	@ Reverb

	.word	seq_303_grp

	.word	seq_303_0

	.end