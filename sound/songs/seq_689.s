@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_689_grp, bank_026
	.equ	seq_689_pri, 127
	.equ	seq_689_rev, 0
	.equ	seq_689_mvl, 127
	.equ	seq_689_key, 0

	.section .rodata
	.global	seq_689
	.align	2

@*********************** Track 01 ***********************@

seq_689_0:
	.byte	KEYSH , seq_689_key+0
	.byte	TEMPO , 180/2
	.byte		VOICE , 15
	.byte		VOL   , 125*seq_689_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte	W01
	.byte		BEND  , c_v-15
	.byte	W01
	.byte		N03   , An2 , v127
	.byte	W01
	.byte		BEND  , c_v-19
	.byte	W01
	.byte		        c_v-22
	.byte	W01
	.byte		        c_v-25
	.byte		N03   , An3 , v060
	.byte	W01
	.byte		BEND  , c_v-28
	.byte	W02
	.byte		        c_v-64
	.byte		N03   , An4 , v127
	.byte	W01
	.byte		BEND  , c_v-55
	.byte	W01
	.byte		        c_v-37
	.byte	W01
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v+17
	.byte		N03   , An2 
	.byte	W01
	.byte		BEND  , c_v+20
	.byte	W01
	.byte		        c_v+24
	.byte	W01
	.byte		        c_v+28
	.byte		N03   , An3 , v060
	.byte	W01
	.byte		BEND  , c_v+32
	.byte	W01
	.byte		        c_v+37
	.byte	W01
	.byte		        c_v+44
	.byte		N03   , An4 , v127
	.byte	W03
	.byte		N09   , An5 , v060
	.byte	W01
	.byte		VOL   , 122*seq_689_mvl/mxv
	.byte	W01
	.byte		        112*seq_689_mvl/mxv
	.byte	W01
	.byte		        101*seq_689_mvl/mxv
	.byte	W01
	.byte		        89*seq_689_mvl/mxv
	.byte	W01
	.byte		        77*seq_689_mvl/mxv
	.byte	W01
	.byte		        65*seq_689_mvl/mxv
	.byte	W01
	.byte		        54*seq_689_mvl/mxv
	.byte	W01
	.byte		        42*seq_689_mvl/mxv
	.byte	W01
	.byte		        30*seq_689_mvl/mxv
	.byte	FINE

@******************************************************@

	.align	2

seq_689:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_689_pri	@ Priority
	.byte	seq_689_rev	@ Reverb

	.word	seq_689_grp

	.word	seq_689_0

	.end
