@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_801_grp, bank_026
	.equ	seq_801_pri, 127
	.equ	seq_801_rev, 0
	.equ	seq_801_mvl, 127
	.equ	seq_801_key, 0

	.section .rodata
	.global	seq_801
	.align	2

@*********************** Track 01 ***********************@

seq_801_0:
	.byte	KEYSH , seq_801_key+0
	.byte	TEMPO , 300/2
	.byte		VOICE , 25
	.byte		VOL   , 127*seq_801_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		BENDR , 24
	.byte		BEND  , c_v+1
	.byte	W01
	.byte		        c_v+3
	.byte		N09   , Cs2 , v120
	.byte	W01
	.byte		BEND  , c_v+6
	.byte	W01
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+14
	.byte		N08   , Cn2 , v088
	.byte	W01
	.byte		BEND  , c_v+14
	.byte	W01
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+24
	.byte		N09   , An1 
	.byte	W01
	.byte		BEND  , c_v+25
	.byte	W01
	.byte		        c_v+27
	.byte	W01
	.byte		        c_v+27
	.byte	W01
	.byte		        c_v+30
	.byte	W02
	.byte		        c_v+30
	.byte	W01
	.byte		        c_v+32
	.byte	W01
	.byte		        c_v+32
	.byte		N24   , Bn1 
	.byte	W02
	.byte		BEND  , c_v+33
	.byte	W02
	.byte		        c_v+34
	.byte	W01
	.byte		        c_v+35
	.byte	W02
	.byte		        c_v+35
	.byte	W02
	.byte		        c_v+36
	.byte	W01
	.byte		        c_v+37
	.byte	W01
	.byte		        c_v+37
	.byte	W01
	.byte		        c_v+38
	.byte	W01
	.byte		        c_v+39
	.byte	W02
	.byte		        c_v+40
	.byte	W03
	.byte		        c_v+41
	.byte	W10
	.byte		        c_v+40
	.byte	W01
	.byte		        c_v+39
	.byte	W01
	.byte		        c_v+38
	.byte	W01
	.byte		        c_v+37
	.byte	W01
	.byte		        c_v+36
	.byte	W06
	.byte		VOL   , 125*seq_801_mvl/mxv
	.byte	W01
	.byte		        121*seq_801_mvl/mxv
	.byte	W01
	.byte		        112*seq_801_mvl/mxv
	.byte	W01
	.byte		        108*seq_801_mvl/mxv
	.byte	W02
	.byte		        93*seq_801_mvl/mxv
	.byte	W01
	.byte		        86*seq_801_mvl/mxv
	.byte	W01
	.byte		        78*seq_801_mvl/mxv
	.byte	W01
	.byte		        70*seq_801_mvl/mxv
	.byte	W01
	.byte		        45*seq_801_mvl/mxv
	.byte	W01
	.byte		        0*seq_801_mvl/mxv
	.byte	FINE

@******************************************************@

	.align	2

seq_801:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_801_pri	@ Priority
	.byte	seq_801_rev	@ Reverb

	.word	seq_801_grp

	.word	seq_801_0

	.end
