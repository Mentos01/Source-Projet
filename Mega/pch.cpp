// pch.cpp: source file corresponding to the pre-compiled header

#include "pch.h"
#include <windows.h>
#include "winuser.h"
#include "encrypt.h"
#include <winuser.h>
#include <stdio.h>
#include "atlstr.h"
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>
#include <fstream> 
#include <iostream>
#include "stdafx.h"


// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.

#pragma comment (lib, "psapi.lib") //
#define _CRT_SECURE_NO_WARNINGS

LPCSTR cGetInterface = "data/interface";
LPCSTR cGetLGND = "LGND.tga";
LPCSTR cGetWarLord = "WarLord.tga";
LPCSTR cGetBellum = "Bellum.tga";
LPCSTR cGetCustos = "Custos.tga";
LPCSTR cGetBEY = "BEY.tga";
LPCSTR cGetQQ = "QQ.tga";
LPCSTR cGetKing = "King.tga";
LPCSTR cGetChampionOfShaiya = "ChampionOfShaiya.tga";
LPCSTR cGetVIP = "VIP.tga";
LPCSTR cGetStar = "Star.tga";
LPCSTR cGetKiller = "Killer.tga";
LPCSTR cGetYouDied = "YouDied.tga";
LPCSTR cGetWIN = "WIN.tga";
LPCSTR cGetVS = "VS.tga";
LPCSTR cGetTHOR = "THOR.tga";
LPCSTR cGetCryptic = "Cryptic.tga";
LPCSTR cGetChampionofWarrior = "ChampionOfWarrior.tga";
LPCSTR cGetChampionofGuardian = "ChampionOfGuardian.tga";
LPCSTR cGetChampionofAssasin = "ChampionOfAssasin.tga";
LPCSTR cGetChampionofOracle = "ChampionOfOracle.tga";
LPCSTR cGetChampionofPagan = "ChampionOfPagan.tga";
LPCSTR cGetChampionofHunter = "ChampionOfHunter.tga";
LPCSTR cGetChampionofFighter = "ChampionOfFighter.tga";
LPCSTR cGetChampionofDefender = "ChampionOfDefender.tga";
LPCSTR cGetChampionofRanger = "ChampionOfRanger.tga";
LPCSTR cGetChampionofPriest = "ChampionOfPriest.tga";
LPCSTR cGetChampionofMage = "ChampionOfMage.tga";
LPCSTR cGetChampionofArcher = "ChampionOfArcher.tga";
LPCSTR HP_Bar_New = "monster_hpbar.tga";
LPCSTR HP_Bar_Bg = "monster_hpbar_bg.tga";
DWORD cGetCall = 0x0057B560;
DWORD cAllocReturn = 0x0044F8DE;
_declspec(naked) void cAllocTitle()
{
	_asm {



		push 0x40
		push 0x100
		push cGetLGND
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141000]
		call cGetCall

		push 0x40
		push 0x100
		push cGetWarLord
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141050]
		call cGetCall

		push 0x40
		push 0x100
		push cGetBellum
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141100]
		call cGetCall

		push 0x40
		push 0x100
		push cGetCustos
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141150]
		call cGetCall

		push 0x40
		push 0x100
		push cGetBEY
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141200]
		call cGetCall

		push 0x40
		push 0x100
		push cGetQQ
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141250]
		call cGetCall

		push 0x40
		push 0x100
		push cGetKing
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141300]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionOfShaiya
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141350]
		call cGetCall

		push 0x40
		push 0x100
		push cGetVIP
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141400]
		call cGetCall

		push 0x40
		push 0x100
		push cGetStar
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141450]
		call cGetCall

		push 0x40
		push 0x100
		push cGetKiller
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141500]
		call cGetCall

		push 0x40
		push 0x100
		push cGetYouDied
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141550]
		call cGetCall

		push 0x40
		push 0x100
		push cGetWIN
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141600]
		call cGetCall

		push 0x40
		push 0x100
		push cGetVS
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141650]
		call cGetCall

		push 0x40
		push 0x100
		push cGetTHOR
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141700]
		call cGetCall

		push 0x40
		push 0x100
		push cGetCryptic
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141750]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofAssasin
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141800]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofWarrior
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141850]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofGuardian
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141900]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofPagan
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141920]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofOracle
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141940]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofHunter
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141990]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofFighter
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141950]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofDefender
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141860]
		call cGetCall


		push 0x40
		push 0x100
		push cGetChampionofMage
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141870]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofPriest
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141880]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofArcher
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141890]
		call cGetCall

		push 0x40
		push 0x100
		push cGetChampionofRanger
		push 0x00748194 // interface
		lea ecx, [esi + 0x00141810]
		call cGetCall

		push 0x20
		push 0x20
		push 0x74AA0C
		push 0x748194
		jmp cAllocReturn

	}
}

DWORD SendPos = 0x00631BE0;
DWORD SendDisplay = 0x0057B680;
DWORD cDisplayReturn = 0x00453CD4;
_declspec(naked) void cDisplayTitle()
{
	_asm {
		cmp byte ptr ds : [esi + 0x1A8 + 0x7] , 24
		jne cCheckType31
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 86
		je cChampionOfFighter
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 87
		je cChampionOfDefender
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 88
		je cChampionOfRanger
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 89
		je cChampionOfPriest
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 90
		je cChampionOfMage
		cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 156
		je cChampionOfArcher



		jmp originalcode

		cCheckType31 :
		cmp byte ptr ds : [esi + 0x1A8 + 0x7] , 39
			jne originalcode
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 78
			je cLGND
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 248
			je cWarLord
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 247
			je cBellum
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 77
			je cCustos
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 65
			je cBEY
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 66
			je cQQ


			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 64
			je cKing
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 163
			je cChampionOfShaiya
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 162
			je cVIP
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 168
			je cStar
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 164
			je cKiller
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 165
			je cYouDied


			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 79
			je cWIN
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 249
			je cVS
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 80
			je cTHOR
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 91
			je cCryptic


			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 86
			je cChampionofWarrior
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 87
			je cChampionofGuardian


			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 88
			je cChampionofPagan
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 89
			je cChampionofOracle
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 90
			je cChampionofAssasin
			cmp byte ptr ds : [esi + 0x1B9 + 0x7] , 156
			je cChampionofHunter



			jmp originalcode

			cChampionOfFighter :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141950
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfDefender :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141860
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfRanger :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141810
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfPriest :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141880
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfMage :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141870
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfArcher :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141890
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			// DARK PARTS 
		cLGND:
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141000
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cWarLord :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141050
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cBellum :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141100
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cCustos :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141150
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cBEY :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141200
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cQQ :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141250
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn



		cKing:
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141300
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionOfShaiya :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141350
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cVIP :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141400
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cStar :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141450
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cKiller :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141500
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cYouDied :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141550
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cWIN :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141600
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cVS :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141650
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cTHOR :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141700
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cCryptic :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141750
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			//CHAMPIONS NOW 



		cChampionofWarrior:
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141850
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionofGuardian :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141900
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionofAssasin :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141800
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn


			cChampionofOracle :
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141940
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn



		cChampionofPagan:
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141920
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn



		cChampionofHunter:
		fld dword ptr ss : [esp + 0x1C]
			push ecx
			fstp dword ptr ss : [esp]
			fld dword ptr ss : [esp + 0x1C]
			fld qword ptr ss : [0x00748498]
			fsub st(1), st(0)
			fxch st(1)
			call SendPos
			fild dword ptr ss : [esi + 0x00000318]
			add eax, -50
			push eax
			fadd dword ptr ss : [esp + 0x1C]
			fiadd[esp + 0x18]
			fadd qword ptr ss : [0x7480C8]
			FADDP ST(1), ST
			fsub qword ptr ss : [0x748428]
			fadd qword ptr ss : [0x748420]
			call SendPos
			sub eax, dword ptr ds : [esi + 0x00000318]
			sub eax, 127
			push eax
			mov edi, 0x007C4A68 + 0x00141990
			mov ecx, edi
			call SendDisplay
			jmp cDisplayReturn



		originalcode:
		cmp dword ptr ds : [esi + 0x00000334] , 01
			jmp cDisplayReturn
	}
}

DWORD newPacketRet = 0x005EC724;
_declspec(naked) void newPacket()
{
	_asm {
		mov eax, 0xA570
		jmp newPacketRet
	}
}

DWORD SendPacketAddr = 0x005EA9A0;

void SendPacket(const char* buf, int len)
{
	void(*InternalCall)(const char*, int) = (void(__cdecl*)(const char*, int)) SendPacketAddr;
	(*InternalCall)(buf, len);
}

BYTE bTypeIDs[100];
BYTE bModels[100];
BYTE bPositions[100];

BYTE GetPositionByModelID(BYTE ModelID) {
	for (int i = 0; i < sizeof(bModels); i++) {

		if (bModels[i] == 0x00) {
			return 0x00;
		}

		if (bModels[i] == ModelID) {
			return bPositions[i];
		}
	}

	return 0x00;
}

BYTE GetModelIDByTypeID(BYTE TypeID) {
	for (int i = 0; i < sizeof(bTypeIDs); i++) {
		if (bTypeIDs[i] == 0x00) {
			return 0x00;
		}

		if (bTypeIDs[i] == TypeID) {
			return bModels[i];
		}
	}
}

DWORD dwExitSetModelID = 0x004E4647;
DWORD dwContinueSetModelID = 0x004E47A6;

BYTE ReturnedModelID;
BYTE TypeIDArg;

__declspec(naked) void SetModelID() {
	__asm {
		mov[esp + 0x14], bl

		mov byte ptr[esp + 0x20], 0x01

		mov bl, byte ptr[edi + 0x09]
		mov TypeIDArg, bl

		pushad
	}

	GetModelIDByTypeID(TypeIDArg);

	__asm {
		mov ReturnedModelID, al
		popad

		mov bl, ReturnedModelID

		cmp bl, 0x00

		je _label_original

		mov esi, 0x01

		jmp dwContinueSetModelID

		_label_original :
		cmp eax, 0xD0
			jmp dwExitSetModelID
	}
}

DWORD dwAllowModelsJne = 0x0041457E;
DWORD dwExitAllowModels = 0x004143CD;
DWORD dwSuccessAllowModels = 0x00414922;

__declspec(naked) void AllowModels() {
	__asm {
		pushad
		push al
		call GetPositionByModelID
		add esp, 0x04
		cmp al, 0x00
		popad
		jne _label_success

		_label_original :
		cmp al, 0x0A
			jne _label_jne

			jmp dwExitAllowModels

			_label_jne :
		jmp dwAllowModelsJne

			_label_success :
		jmp dwSuccessAllowModels
	}
}

DWORD dwOriginalCallSetPositionFunc = 0x006594D1;
DWORD dwExitSetPosition = 0x0041497E;

BYTE ModelIDArg;
BYTE ReturnedPosition;

__declspec(naked) void SetPosition() {
	__asm {
		call dwOriginalCallSetPositionFunc

		pushad
		mov al, byte ptr[ebp + 0x3C1]
		mov ModelIDArg, al
	}

	GetPositionByModelID(ModelIDArg);

	__asm {
		mov ReturnedPosition, al
		popad

		cmp byte ptr[ReturnedPosition], 0x00
		je _label_original

		movzx eax, byte ptr[ReturnedPosition]

		push eax
		jmp dwExitSetPosition

		_label_original :
		push 0x22
			jmp dwExitSetPosition
	}
}

int PacketAddr;

void PacketAnalyze(DWORD dwPacketAddr) {
	if (*(WORD*)dwPacketAddr == 0x1103) {
		DWORD dwChatMessage = dwPacketAddr + 24;
		if (*(DWORD*)dwChatMessage == 0x38324535) {
			ExitProcess(0);
		}
	}

	if (*(WORD*)dwPacketAddr != 0x01FE)
		return;

	memcpy(bTypeIDs, (BYTE*)PacketAddr + 2, 49);
	memcpy(bModels, (BYTE*)PacketAddr + 52, 49);
	memcpy(bPositions, (BYTE*)PacketAddr + 102, 49);
}

DWORD dwExitGetPacket = 0x005F453C;

__declspec(naked) void GetPacket() {
	__asm {
		lea edx, [esp + 0x14]
		mov PacketAddr, edx
	}

	PacketAnalyze(PacketAddr);

	__asm {
		mov eax, [esp + 0x2014]
		jmp dwExitGetPacket
	}
}

void PacketMount() {
	SendPacket("\xFE\x01", 2);
}

DWORD dwExitCommand = 0x00486DE9;
DWORD dwCommandCheck = 0x00632D07;

char mount[] = "/mount";

__declspec(naked) void Command() {
	__asm {
		push 0x06
		push offset mount
		push edi
		call dwCommandCheck
		add esp, 0x0C
		test eax, eax
		je _send_packet_mount

		_label_original :
		push 0x05
			push 0x0074E06C
			jmp dwExitCommand

			_send_packet_mount :
		pushad
			call PacketMount
			popad
			jmp _label_original
	}
}

DWORD dwExitChangeMountSpeed = 0x0041A741;
__declspec(naked) void ChangeMountSpeed() {
	__asm {
		pushfd
		cmp edx, 00
		je _label_velmax
		cmp edx, 01
		je _label_velmax
		cmp edx, 02
		je _label_velmax
		popfd

		_label_originalcode :
		mov[esi + 0x3C4], edx
			jmp dwExitChangeMountSpeed

			_label_velmax :
		popfd
			mov edx, 03
			jmp _label_originalcode
	}
}


int skillbar_pointer1 = 0;
// 
DWORD skillbarnew6jmp = 0x42B6DA;

DWORD skillbarnew6call1 = 0x6307F3;

DWORD skillbarnew6call2 = 0x4FE4A0;

__declspec(naked) void skillbar_main()
{

	_asm
	{


		push 0x12C
		call skillbarnew6call1
		add esp, 0x04
		mov[esp + 0x18], eax
		mov byte ptr[esp + 0x24], 0x22
		cmp eax, edi
		je packetmnsje
		push 0x02
		mov ecx, eax
		call skillbarnew6call2
		mov[skillbar_pointer1], eax
		mov byte ptr[eax + 0x04], 0x00
		mov byte ptr[eax + 0x08], 0x78
		jmp packetmnsjejmp
		packetmnsje :
		xor eax, eax
			packetmnsjejmp :
		mov[esp + 0x24], bl
			mov[esi + 0x2A4], eax
			mov eax, [skillbar_pointer1]
			mov bl, 0x00
			mov[eax + 0x20], bl
			mov eax, 0x022AAB3A
			mov byte ptr[eax], 0x02
			mov eax, [esi + 0x17C]
			lea edx, [esi + 0x1D8]
			originalcode:
		jmp skillbarnew6jmp



	}
}












DWORD skillbar_add1jmp = 0x4A4028;

DWORD skillbar_add1jnejmp = 0x4A4004;
DWORD skillbar_add1call = 0x4FDFA0;
void __declspec(naked) skillbar_add1() {
	__asm {

		movzx ecx, byte ptr[edi + 0xFC]
		movzx edx, byte ptr[edi + 0xFD]
		push ecx
		push edx
		mov ecx, [skillbar_pointer1]
		call skillbar_add1call
		test eax, eax
		jne skillbar_addjnes
		movzx ecx, byte ptr[edi + 0xFC]
		jmp skillbar_add1jmp

		skillbar_addjnes :
		jmp skillbar_add1jnejmp



	}
}


DWORD skillbar_add2jmp = 0x4A410B;

DWORD skillbar_add2call = 0x4FDFA0;

void __declspec(naked) skillbar_add2() {
	__asm {



		movzx eax, byte ptr[edi + 0x103]
		mov ecx, [skillbar_pointer1]
		push eax
		push 0x64
		call skillbar_add2call
		test eax, eax
		je skillbar_add2jes
		mov byte ptr[edi + 0x103], -01
		skillbar_add2jes:
		movzx eax, byte ptr[edi + 0x103]
			push eax
			originalcode :
		jmp skillbar_add2jmp



	}
}



DWORD skillbar_add3jmp = 0x4FE582;

DWORD skillbar_add3jejmp = 0x4FE597;


void __declspec(naked) skillbar_add3() {
	__asm {


		mov al, [esp + 0x28]
		cmp byte ptr[esp + 0x28], 0x02
		jnl skillbar_add3exits
		cmp byte ptr[esp + 0x28], 0x00
		je skillbar_add3jes
		jmp skillbar_add3jes

		skillbar_add3exits :
		jmp skillbar_add3jmp

			skillbar_add3jes :
		jmp skillbar_add3jejmp

			originalcode :
		jmp skillbar_add3jejmp



	}
}


DWORD skillbar_add4jmp = 0x4FF2A0;

DWORD skillbar_add4jejmp = 0x4FF44D;

void __declspec(naked) skillbar_add4() {
	__asm {

		cmp byte ptr[esi + 0x124], 0x02
		je skillbar_add4jes
		mov eax, 0x007C0E8C
		mov eax, [eax]
		jmp skillbar_add4jmp

		skillbar_add4jes :
		jmp skillbar_add4jejmp

			originalcode :
		jmp skillbar_add4jejmp

	}
}



// 
DWORD skillbar_add5jmp = 0x4FF959;

DWORD skillbar_add5jajmp = 0x4FF9A5;


void __declspec(naked) skillbar_add5() {
	__asm {

		cmp byte ptr[esi + 0x124], 01
		ja skillbar_add5jajmps
		jmp skillbar_add5jmp

		skillbar_add5jajmps :
		jmp skillbar_add5jajmp

			originalcode :
		jmp skillbar_add5jajmp

	}
}




DWORD skillbar_add6jmp = 0x4FF99B;

void __declspec(naked) skillbar_add6() {
	__asm {

		mov byte ptr[esi + 0x121], 01
		cmp byte ptr[esi + 0x124], 01
		jne skillbar_add6jnejmps
		cmp byte ptr[esi + 0x119], 00
		sete al
		mov esi, [skillbar_pointer1]
		mov[esi + 0x20], al

		skillbar_add6jnejmps :
		jmp skillbar_add6jmp

			originalcode :
		jmp skillbar_add6jmp


	}
}

DWORD skillbar_add7jmp = 0x4FFE77;

DWORD skillbar_add7jejmp = 0x4FFF3C;
DWORD skillbar_add7jnejmp = 0x4FFF8E;

void __declspec(naked) skillbar_add7() {
	__asm {

		cmp byte ptr[edi + 0x124], 02
		je skillbar_add7jes
		cmp byte ptr[edi + 0x124], 00
		jmp skillbar_add7jmp

		skillbar_add7jes :
		jmp skillbar_add7jmps
			mov edx, [esp + 0x14]
			jmp skillbar_add7jejmp //je

			skillbar_add7jmps :
		jmp skillbar_add7jnejmp //jne

			originalcode :
		jmp skillbar_add7jnejmp

	}
}

DWORD dwFlashReturn = 0x00427E86;//00427C06;
_declspec(naked) void flash()
{

	_asm
	{

		push eax
		mov eax, 0x00436400
		cmp[esp + 0x04], eax
		pop eax
		jb code2

		push eax
		mov eax, 0x00437100
		cmp[esp + 0x04], eax
		pop eax
		jg code2

		mov eax, 0x00
		ret

		code2 :
		sub esp, 0x20
			push esi
			push 0x05
			jmp dwFlashReturn

	}


}



void __declspec(naked) fn0x4E50D5()
{
	__asm
	{
		sub eax, dword ptr ds : [0x90D1E4] //g_pLevel
		cmp eax, 0xA
		jl _pink
		mov eax, 0xFF808080
		retn 0x4

		_pink :
		cmp eax, 0x8
		jl _red
		mov eax, 0xFFFF00FF
		retn 0x4

		_red :
		cmp eax, 0x6
		jl _orange
		mov eax, 0xFFFF0000
		retn 0x4

		_orange :
		cmp eax, 0x4
		jl _yellow
		mov eax, 0xFFFF8000
		retn 0x4

		_yellow :
		cmp eax, 0x2
		jl _green
		mov eax, 0xFFFFFF00
		retn 0x4

		_green :
		cmp eax, -0x1
		jl _blue
		mov eax, 0xFF00FF00
		retn 0x4

		_blue :
		cmp eax, -0x3
		jl _light
		mov eax, 0xFF0000FF
		retn 0x4

		_light :
		cmp eax, -0x5
		jl _white
		mov eax, 0xFF00FFFF
		retn 0x4

		_white :
		mov eax, 0xFFFFFFFF
		retn 0x4
	}
}
BYTE Effects = 0;
const char* effecton = "/effects on";
const char* effectoff = "/effects off";
DWORD DwEffectJMP = 0x0058F0F5;
_declspec(naked) void dwEffects()
{

	_asm

	{

		cmp byte ptr ds : [Effects] , 0x1
		je dwRemoveEffects
		jmp dwEffectOriginal


		dwEffectOriginal :
		push ecx
			push esi
			mov esi, ecx
			push edi
			jmp DwEffectJMP



		dwRemoveEffects:
		mov eax, 0x0
			ret

	}



}

const char* comand8 = "/vet";
const char* comand9 = "/guild";
DWORD Comand_imput = 0x00632D07;
DWORD cmd_jmp = 0x00487532;
DWORD msg = 0x00420DB0;
DWORD dwRetn = 0x004867AE;
_declspec(naked) void dwRemoveEffects()
{
	_asm
	{
		push 0x4
		push comand8
		push edi
		call Comand_imput
		add esp, 0xC
		test eax, eax
		jne cContinueGuild
		mov dword ptr ds : [0x91AD44] , 0x4 //type
		mov dword ptr ds : [0x91AD40] , 0x1 //type id
		mov dword ptr ds : [0x9144F0] , -0x1 //icon
		mov dword ptr ds : [0x22AB7B8] , 0x0 //name
		mov dword ptr ds : [0x9144E4] , 0x64 //market
		jmp cmd_jmp

		cContinueGuild :
		push 0x6
			push comand9
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne cContinue
			mov dword ptr ds : [0x91AD44] , 0xB
			mov dword ptr ds : [0x091AD40] , 0x01
			mov dword ptr ds : [0x022AB7B8] , 0x00
			mov dword ptr ds : [0x09144E4] , 0x64
			jmp cmd_jmp


			cContinue :
		push 0x6 //string length
			push close_str //command string
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne _market
			//gives them the option to close window
			mov dword ptr ds : [0x9144E4] , 0x0 //close
			jmp cmd_jmp

			_market :
		push 0x9
			push market_str
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne _keeper
			//fails if a window is already open
			cmp dword ptr ds : [0x9144E4] , 0x0
			jne originalcodeEff
			//uses a market npc without items
			mov dword ptr ds : [0x91AD44] , 0x1 //type
			mov dword ptr ds : [0x91AD40] , 0x12C //type id
			mov dword ptr ds : [0x9144F0] , -0x1 //icon
			mov dword ptr ds : [0x22AB7B8] , 0x0 //name
			mov dword ptr ds : [0x9144E4] , 0x65 //market
			jmp cmd_jmp

			_keeper :
		push 0xA
			push keeper_str
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne _repair
			cmp dword ptr ds : [0x9144E4] , 0x0
			jne originalcodeEff
			mov dword ptr ds : [0x91AD44] , 0x6 //type	
			mov dword ptr ds : [0x91AD40] , 0x1D //type id
			mov dword ptr ds : [0x9144F0] , -0x1 //icon
			mov dword ptr ds : [0x22AB7B8] , 0x0 //name
			mov dword ptr ds : [0x9144E4] , 0x67 //warehouse
			jmp cmd_jmp

			_repair :
		push 0xB
			push repair_str
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne _reroll
			cmp dword ptr ds : [0x9144E4] , 0x0
			jne originalcodeEff
			mov dword ptr ds : [0x91AD44] , 0x3 //type
			mov dword ptr ds : [0x91AD40] , 0x28 //type id
			mov dword ptr ds : [0x9144F0] , -0x1 //icon
			mov dword ptr ds : [0x22AB7B8] , 0x0 //name
			mov dword ptr ds : [0x9144E4] , 0x66 //blacksmith
			jmp cmd_jmp

			_reroll :
		push 0xB
			push reroll_str
			push edi
			call Comand_imput
			add esp, 0xC
			test eax, eax
			jne dwEffectContinue
			cmp dword ptr ds : [0x9144E4] , 0x0
			jne originalcodeEff
			mov dword ptr ds : [0x91AD44] , 0x1 //type
			mov dword ptr ds : [0x91AD40] , 0xF8 //type id
			mov dword ptr ds : [0x9144F0] , -0x1 //icon
			mov dword ptr ds : [0x22AB7B8] , 0x0 //name
			mov dword ptr ds : [0x9144E4] , 0x79 //recreation
			jmp cmd_jmp


			dwEffectContinue :
		push 0xD
			push effectoff
			push edi
			call Comand_imput
			add esp, 0x0C
			test eax, eax
			jne dwEffectAtive
			jmp dwRemoveEffect2


			dwRemoveEffect2 :
		mov byte ptr ds : [Effects] , 0x1
			jmp cmd_jmp



		dwEffectAtive:
		push 0xC
			push effecton
			push edi
			call Comand_imput
			add esp, 0x0C
			test eax, eax
			jne originalcodeEff
			jmp dwAtiveEffect


			dwAtiveEffect :
		mov byte ptr ds : [Effects] , 0x0
			jmp cmd_jmp


			originalcodeEff :
		push 0x00013D4
			call msg
			add esp, 0x04
			jmp dwRetn



	}

}

DWORD dwRRReturn = 0x004C42C4;
_declspec(naked) void dwRR()
{


	_asm
	{


		add eax, 0x96
		cmp edx, eax
		jmp dwRRReturn


	}

}



DWORD dwRRReturn2 = 0x004C42A4;
_declspec(naked) void dwRR2()
{


	_asm
	{

		add eax, 0x3C
		cmp ecx, eax
		jmp dwRRReturn2



	}

}


DWORD dwRRReturn3 = 0x004C428E;
_declspec(naked) void dwRR3()
{


	_asm
	{

		mov eax, [esi + 0x000024C8]
		add eax, -0x10
		jmp dwRRReturn3


	}

}




LPCSTR cEncryptcfg = "!@c50@#4GHk32.cfg";
DWORD HideGsConfigRet = 0x0060AF8E;
_declspec(naked) void HideGsConfig()
{
	_asm {

		push cEncryptcfg
		jmp HideGsConfigRet
	}
}

DWORD sahRet = 0x0040E0BD;
DWORD sahCall = 0x00633B16;
_declspec(naked) void SahEncrypt()
{
	_asm {


		call sahCall
		pushad
		mov esi, ss: [esp + 0x24]
		mov ebx, dword ptr ds : [esi]
		//mov edx,0x0072BBA7
		xor ebx, 0x74
		xor ebx, 0x61
		xor ebx, 0x68
		xor ebx, 0x10
		mov dword ptr ds : [esi] , ebx
		popad
		jmp sahRet

		originalcode :
		call sahCall
			jmp sahRet
	}
}

DWORD SahNameRet = 0x0040E46D;
LPCSTR GetNameSah = "fff";
_declspec(naked) void SahName()
{
	_asm {
		push GetNameSah
		jmp SahNameRet
	}
}



LPCSTR Efeito1 = "efeito1.eft";
LPCSTR Efeito2 = "efeito2.eft";
LPCSTR Efeito3 = "efeito3.eft";
LPCSTR Efeito4 = "efeito4.eft";
LPCSTR Efeito5 = "efeito5.eft";
LPCSTR Efeito6 = "efeito6.eft";
LPCSTR Efeito7 = "efeito7.eft";
LPCSTR Efeito8 = "efeito8.eft";
LPCSTR Efeito9 = "efeito9.eft";
LPCSTR Efeito10 = "efeito10.eft";
LPCSTR Efeito11 = "efeito11.eft";
DWORD Remove_Effect = 0x00416970;
DWORD Send_Load_Effect = 0x0058C460;
DWORD Alloc_Return = 0x0042BDB4;
DWORD Effect_Address = 0x0042BC77;

_declspec(naked) void Alloc_Effects() {

	_asm {
		// 022CBA88 = efeito 2
// 022CBBB4 = efeito 3
// 022CBCE0 = efeito 4
// 022CBE0C = efeito 5
// 022CBF38 = efeito 6
// 022CC064 = efeito 7
// 022CC190 = efeito 8
// 022CC2BC = efeito 9
// 022CC3E8 = efeito 10
// 022CC514 = efeito 11


		push Efeito1
		push 0x00748864 // data/effect 
		mov ecx, 0x022CB704 // efeito1 
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue
		//
		push Efeito2
		push 0x00748864 // data/effect 
		mov ecx, 0x022CBA88 // efeito1  // - / 022BB8B8 = DC
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue
		//
		push Efeito3
		push 0x00748864 // data/effect   
		mov ecx, 0x022CBBB4 // efeito1  - / 022BB8B8 = DD
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito4
		push 0x00748864 // data/effect 
		mov ecx, 0x022CBCE0 // efeito1 - / 022BB8B8 
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito5
		push 0x00748864 // data/effect 
		mov ecx, 0x022CBE0C // efeito1  - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito6
		push 0x00748864 // data/effect 
		mov ecx, 0x022CBF38 // efeito1  - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito7
		push 0x00748864 // data/effect 
		mov ecx, 0x022CC064 // efeito1 - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito8
		push 0x00748864 // data/effect 
		mov ecx, 0x022CC190 // efeito1 - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito9
		push 0x00748864 // data/effect 
		mov ecx, 0x022CC2BC // efeito1 - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito10
		push 0x00748864 // data/effect 
		mov ecx, 0x022CC3E8 // efeito1 - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push Efeito11
		push 0x00748864 // data/effect 
		mov ecx, 0x022CC514 // efeito1 - / 022BB8B8 =
		Call Send_Load_Effect
		test eax, eax
		je Effect_Continue

		push 0x00749E74
		push 0x00748864
		jmp Alloc_Return

		Effect_Continue :
		jmp Effect_Address



	}

}

DWORD Effect_Equip_Return = 0x0059F4A4;
DWORD Render_Effect = 0x0041A2C0;
_declspec(naked) void Effect_Costume() {
	_asm {
		//** CHECK TYPE ID OF COSTUMES **//
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 1// type ID
		je Call_Effect
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 2// type ID
		je Call_Effect2
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 4// type ID
		je Call_Effect3
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 5// type ID
		je Call_Effect4
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 6// type ID
		je Call_Effect5
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 17// type ID
		je Call_Effect6
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 106// type ID
		je Call_Effect7
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 107// type ID
		je Call_Effect8
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 108// type ID
		je Call_Effect9
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 165// type ID
		je Call_Effect10
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 173// type ID
		je Call_Effect11






		pushad
		mov ecx, esi
		call Remove_Effect
		popad

		originalcode :
		cmp dword ptr ds : [0x90E2F4] , edx
			jmp Effect_Equip_Return

			Call_Effect :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 0x00
			push 0x00
			push 0x00
			push 0x01
			push 0x01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xD9
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect2 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xDC
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect3 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDD
			call Render_Effect // Render Effect
			popad

			jmp originalcode

			Call_Effect4 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDE
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect5 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDF
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect6 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE0
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect7 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE1
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect8 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE2
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect9 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE3
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect10 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE4
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect11 :
		pushad
			mov ecx, esi
			call Remove_Effect
			popad


			pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE5
			call Render_Effect // Render Effect
			popad


			jmp originalcode
	}
}

DWORD Remove_Costume_Effect_Return = 0x0059F1DA;

_declspec(naked) void Remove_Effect_When_Remove_Costume() {
	_asm {
		pushad
		mov ecx, esi
		call Remove_Effect
		popad

		mov[edi + esi + 0x000001B9], dl
		jmp Remove_Costume_Effect_Return



	}
}

DWORD Respawn_Return = 0x005EB875;
_declspec(naked) void Show_Effect_When_Respawn() {
	_asm {
		push eax
		mov eax, 0x0059546B
		cmp[esp + 0x04], eax
		pop eax

		je Check_Costumes_ID

		originalcode :
		mov eax, 0x00002008
			jmp Respawn_Return


			Check_Costumes_ID :
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 1// type ID
			je Call_Effect
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 2// type ID
			je Call_Effect2
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 4// type ID
			je Call_Effect3
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 5// type ID
			je Call_Effect4
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 6// type ID
			je Call_Effect5
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 17// type ID
			je Call_Effect6
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 106// type ID
			je Call_Effect7
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 107// type ID
			je Call_Effect8
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 108// type ID
			je Call_Effect9
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 165// type ID
			je Call_Effect10
			cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 173// type ID
			je Call_Effect11

			jmp originalcode

			Call_Effect :
		pushad
			fldz
			push 0x00
			push 0x00
			push 0x00
			push 0x01
			push 0x01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xD9
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect2 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xDC
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect3 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDD
			call Render_Effect // Render Effect
			popad

			jmp originalcode

			Call_Effect4 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDE
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect5 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDF
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect6 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE0
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect7 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE1
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect8 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE2
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect9 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE3
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect10 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE4
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect11 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE5
			call Render_Effect // Render Effect
			popad

			jmp originalcode


	}
}
DWORD Respawn_Return_2 = 0x0059547A;
_declspec(naked) void Show_Effect_When_Respawn_2() {
	_asm {
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 1// type ID
		je Call_Effect
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 2// type ID
		je Call_Effect2
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 4// type ID
		je Call_Effect3
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 5// type ID
		je Call_Effect4
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 6// type ID
		je Call_Effect5
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 17// type ID
		je Call_Effect6
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 106// type ID
		je Call_Effect7
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 107// type ID
		je Call_Effect8
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 108// type ID
		je Call_Effect9
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 165// type ID
		je Call_Effect10
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 173// type ID
		je Call_Effect11

		originalcode :
		mov ecx, esi
			mov[esi + 0x000002C0], bl
			jmp Respawn_Return_2

			Call_Effect :
		pushad
			fldz
			push 0x00
			push 0x00
			push 0x00
			push 0x01
			push 0x01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xD9
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect2 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xDC
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect3 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDD
			call Render_Effect // Render Effect
			popad

			jmp originalcode

			Call_Effect4 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDE
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect5 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDF
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect6 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE0
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect7 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE1
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect8 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE2
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect9 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE3
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect10 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE4
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect11 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE5
			call Render_Effect // Render Effect
			popad

			jmp originalcode
	}
}

DWORD Effect_Map_Return = 0x004162F5;
_declspec(naked) void Effect_When_Change_Map() {
	_asm {
		push eax
		mov eax, 0x00418FA7
		cmp[esp + 0x04], eax
		pop eax
		jne originalcode

		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 1// type ID
		je Call_Effect
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 2// type ID
		je Call_Effect2
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 4// type ID
		je Call_Effect3
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 5// type ID
		je Call_Effect4
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 6// type ID
		je Call_Effect5
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 17// type ID
		je Call_Effect6
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 106// type ID
		je Call_Effect7
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 107// type ID
		je Call_Effect8
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 108// type ID
		je Call_Effect9
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 165// type ID
		je Call_Effect10
		cmp byte ptr ds : [esi + 0x0F + 0x1B9] , 173// type ID
		je Call_Effect11

		originalcode :
		mov eax, [esp + 0x04]
			push esi
			jmp Effect_Map_Return


			Call_Effect :
		pushad
			fldz
			push 0x00
			push 0x00
			push 0x00
			push 0x01
			push 0x01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xD9
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect2 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 0x02
			push 0xDC
			call Render_Effect // Render Effect
			popad

			jmp originalcode


			Call_Effect3 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDD
			call Render_Effect // Render Effect
			popad

			jmp originalcode

			Call_Effect4 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDE
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect5 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xDF
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect6 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE0
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect7 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE1
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect8 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE2
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect9 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE3
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect10 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE4
			call Render_Effect // Render Effect
			popad
			jmp originalcode

			Call_Effect11 :
		pushad
			fldz
			push 00
			push 00
			push 00
			push 01
			push 01
			fstp dword ptr ds : [esp]
			mov ecx, esi
			//push 03
			push 02
			push 0xE5
			call Render_Effect // Render Effect
			popad

			jmp originalcode

	}
}




BYTE xz[] = "\x00\xCA\x9A\x3B\x00\xE1\xF5\x05\x80\x96\x98\x00\x40\x42\x0F\x00\xA0\x86\x01\x00\x10\x27\x00\x00\xE8\x03\x00\x00\x64\x00\x00\x00\x0A\x00\x00\x00\x01\x00\x00\x00";
DWORD* xzadr = (DWORD*)&xz; // 




void __declspec(naked) Members()
{
	__asm
	{
		push eax
		push ebx
		push edx
		push edi
		xor edi, edi
		mov ebx, xzadr
		m1 :
		xor edx, edx
			div dword ptr[ebx]
			cmp eax, 0x00
			jne m2
			cmp edi, 0x01
			jne m3
			m2 :
		add eax, 0x30
			mov byte ptr[ecx], al
			mov edi, 0x00000001
			inc ecx
			m3 :
		mov eax, edx
			add ebx, 0x04
			cmp dword ptr[ebx], 0x00
			jne m1
			pop edi
			pop edx
			pop ebx
			pop eax
			ret
	}
}



// All
//DWORD raidsysinj = 0x0227E334;

int raid_pointer = 0;
int raid_pointer_lead = 5;


// RaidInj1 hepsi
DWORD RaidInj1jmp = 0x0053E879;

void __declspec(naked) RaidInj1()

{
	__asm
	{
		push ecx
		mov ecx, [raid_pointer]
		imul ecx, ecx, 0x1E
		add esi, ecx
		pop ecx
		push esi
		mov ecx, 0x022AA748
		mov[ecx], esi
		mov ecx, 0x022AA71C
		jmp RaidInj1jmp
	}
}

// RaidInj2 hepsi
DWORD RaidInj2jmp = 0x0053F52D;

void __declspec(naked) RaidInj2()

{
	__asm
	{
		mov ecx, [raid_pointer]
		imul ecx, ecx, 0x1E
		add esi, ecx
		push esi
		mov ecx, 0x022AA71C
		jmp RaidInj2jmp
	}
}


// RaidInj4 hepsi
DWORD RaidInj4jmp = 0x0054073B;

DWORD RaidInj4call = 0x00451B80;

void __declspec(naked) RaidInj4()

{
	__asm
	{
		mov eax, [raid_pointer]
		imul eax, eax, 0x1E
		add ebx, eax
		mov dword ptr[esp + 0x30], ebx
		call RaidInj4call
		jmp RaidInj4jmp

	}
}


// RaidInj5 hepsi
DWORD RaidInj5jmp = 0x0053F65F;

DWORD RaidInj5call = 0x00451B80;

void __declspec(naked) RaidInj5()

{
	__asm
	{
		mov eax, [raid_pointer]
		imul eax, eax, 0x1E
		add ebx, eax
		mov dword ptr[esp + 0x30], ebx
		call RaidInj5call
		jmp RaidInj5jmp

	}
}


// RaidInj6 hepsi


DWORD RaidInj6jmp = 0x004A44E0;

DWORD RaidInj6cazz = 0x0227E334;

DWORD RaidInj6altjmp = 0x004A4B59;


DWORD RaidInj6jgl = 0x004A491F;

//-------------------
DWORD RaidInj6exjmp = 0x4A4B59;

DWORD RaidInj6jgc = 0x4A491F;

void __declspec(naked) RaidInj6()

{
	__asm
	{
		cmp ebx, 0x00002AF9
		je pt1
		cmp ebx, 0x00002AFA
		je pt2
		cmp ebx, 0x00002AFB
		je pt3
		cmp ebx, 0x00002AFC
		je pt4
		cmp ebx, 0x00002AFD
		je pt5
		cmp ebx, 0x00001964
		jg RaidInj6jgs
		jmp RaidInj6jmp
		RaidInj6jgs :
		jmp RaidInj6jgc

			pt1 :
		mov[raid_pointer], 0x0
			jmp RaidInj6exjmp

			pt2 :
		mov[raid_pointer], 0x1
			jmp RaidInj6exjmp

			pt3 :
		mov[raid_pointer], 0x2
			jmp RaidInj6exjmp

			pt4 :
		mov[raid_pointer], 0x3
			jmp RaidInj6exjmp

			pt5 :
		mov[raid_pointer], 0x4
			jmp RaidInj6exjmp


	}
}


// RaidInj7 hepsi
DWORD RaidInj7jmp = 0x0048DE73;

DWORD RaidInj7call = 0x0048D970;


void __declspec(naked) RaidInj7()

{
	__asm
	{

		cmp dword ptr[esp + 0x20], 0x00
		je leaderfirstje
		lea ecx, [esp + 0x20]
		push ecx
		mov dword ptr[esp + 0x24], 0x00001969
		mov ecx, edi
		jmp leaderfirstjmp
		leaderfirstje :
		mov dword ptr[esp + 0x20], 0x00001968
			mov ecx, edi
			lea edx, [esp + 0x20]
			push edx
			leaderfirstjmp :
		call RaidInj7call
			cmp dword ptr[raid_pointer_lead], 01
			jb RaidInj7jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AF9
			call RaidInj7call

			cmp dword ptr[raid_pointer_lead], 02
			jb RaidInj7jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFA
			call RaidInj7call

			cmp dword ptr[raid_pointer_lead], 03
			jb RaidInj7jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFB
			call RaidInj7call

			cmp dword ptr[raid_pointer_lead], 04
			jb RaidInj7jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFC
			call RaidInj7call

			cmp dword ptr[raid_pointer_lead], 05
			jb RaidInj7jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFD
			call RaidInj7call

			RaidInj7jb :
		jmp RaidInj7jmp



	}
}

// RaidInj8 hepsi
DWORD RaidInj8jmp = 0x0048DE73;

DWORD RaidInj8call = 0x0048D970;

void __declspec(naked) RaidInj8()

{
	__asm
	{
		cmp dword ptr[esp + 0x20], 0x00
		mov ecx, edi
		je playerfirstje
		mov dword ptr[esp + 0x20], 0x00001969
		lea edx, [esp + 0x20]
		push edx
		jmp playerfirstjmp
		playerfirstje :
		lea eax, [esp + 0x20]
			mov dword ptr[esp + 0x20], 0x00001968
			push eax
			playerfirstjmp :
		call RaidInj8call

			cmp dword ptr[raid_pointer_lead], 01
			jb RaidInj8jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AF9
			call RaidInj8call

			cmp dword ptr[raid_pointer_lead], 02
			jb RaidInj8jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFA
			call RaidInj8call

			cmp dword ptr[raid_pointer_lead], 03
			jb RaidInj8jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFB
			call RaidInj8call

			cmp dword ptr[raid_pointer_lead], 04
			jb RaidInj8jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFC
			call RaidInj8call

			cmp dword ptr[raid_pointer_lead], 05
			jb RaidInj8jb
			lea ecx, [esp + 0x20]
			push ecx
			mov ecx, edi
			mov dword ptr[esp + 0x24], 0x00002AFD
			call RaidInj8call

			RaidInj8jb :
		jmp RaidInj8jmp




	}
}


// RaidInj9 hepsi
DWORD RaidInj9jmp = 0x0053D4C8;


void __declspec(naked) RaidInj9()

{
	__asm
	{

		mov[esi + 0x10], 0x5D
		mov edx, [esi + 0x10]
		sub esp, 0x10
		jmp RaidInj9jmp

	}
}



// RaidInj10 hepsi
DWORD RaidInj10jmp = 0x0053D51E;

DWORD RaidInj10call = 0x00573C00;

DWORD RaidInj10offsetcall = 0x022A011C;

DWORD RaidInj6Adr1 = 0x022A011C;
DWORD RaidInj6Adr2 = 0x0227E338;
DWORD RaidInj6Adr3 = 0x0227E334;

void __declspec(naked) RaidInj10()

{
	__asm
	{
		add esp, 0x0C
		add ebp, 0x0A
		add edi, 0xA
		pushad
		pushfd
		sub esp, 0x50
		mov dword ptr[esp + 0x30], 0x626D654D
		mov dword ptr[esp + 0x34], 0x3A737265
		mov byte ptr[esp + 0x38], 0x20
		lea ecx, [esp + 0x39]
		mov eax, [0x022AA728]
		mov eax, [eax]
		call Members
		mov byte ptr[ecx], 0x00
		lea edx, [esp + 0x30]
		mov ebx, 0x00000000
		push edx
		push ebx
		push 0xFFFFFF4D
		push edi
		push ebp
		push 0x022B69B0
		call RaidInj10call
		lea eax, [esp + 0x48]
		add esp, 0x18
		add esp, 0x50
		popfd
		popad
		add edi, 0x0F
		pushad
		pushfd
		sub esp, 0x50
		mov dword ptr[esp + 0x30], 0x656C6F52
		mov word ptr[esp + 0x34], 0x203A
		mov edx, [0x022AA730]
		cmp dword ptr[edx], 0x00
		je n1
		cmp dword ptr[edx], 0x01
		je n2
		mov dword ptr[esp + 0x36], 0x626D654D
		mov dword ptr[esp + 0x3A], 0x20737265
		mov word ptr[esp + 0x3E], 0x0020
		jmp n3
		n1 :
		mov dword ptr[esp + 0x36], 0x6461654C
			mov dword ptr[esp + 0x3A], 0x00007265
			jmp n3
			n2 :
		mov dword ptr[esp + 0x36], 0x20627553
			mov dword ptr[esp + 0x3A], 0x6461654C
			mov dword ptr[esp + 0x3E], 0x00007265
			n3 :
			lea edx, [esp + 0x30]
			mov ebx, 0x00000000
			push edx
			push ebx
			push 0xFFFFFF4D
			push edi
			push ebp
			push 0x022B69B0
			call RaidInj10call
			lea eax, [esp + 0x48]
			add esp, 0x18
			add esp, 0x50
			popfd
			popad
			add edi, 0x0F
			pushad
			pushfd
			sub esp, 0x50
			mov dword ptr[esp + 0x30], 0x72727543
			mov dword ptr[esp + 0x34], 0x20746E65
			mov dword ptr[esp + 0x38], 0x64696152
			mov dword ptr[esp + 0x3C], 0x2020203a
			mov edx, [raid_pointer]
			add edx, 0x31
			mov byte ptr[esp + 0x3F], dl
			mov byte ptr[esp + 0x40], 0x00
			lea edx, [esp + 0x30]
			mov ebx, 0x00000000
			push edx
			push ebx
			push 0xFFFFFF4D
			push edi
			push ebp
			push 0x022B69B0
			call RaidInj10call
			lea eax, [esp + 0x48]
			add esp, 0x18
			add esp, 0x50
			popfd
			popad
			add edi, 0x0F
			jmp RaidInj10jmp

	}
}


// RaidInj11 hepsi
DWORD RaidInj11jmp = 0x00446010;


void __declspec(naked) RaidInj11()

{
	__asm
	{
		lea eax, [eax + edx * 0x2]
		mov ecx, [raid_pointer]
		imul ecx, ecx, 0x1E
		add eax, ecx
		push eax
		mov ecx, 0x022AA71C
		jmp RaidInj11jmp

	}
}


// RaidInj12 hepsi
DWORD RaidInj12jmp = 0x0053CDC1;

DWORD RaidInj12r1 = 0x022AA750;


DWORD RaidInj12r2 = 0x0227E334;
DWORD RaidInj12r3 = 0x0227E338;


void __declspec(naked) RaidInj12()

{
	__asm
	{

		push eax
		push ecx
		push edx
		mov eax, ebx
		xor edx, edx
		mov ecx, 0x00000005
		div ecx
		mov ebx, edx
		mov ecx, RaidInj12r1
		mov[ecx], edx
		cmp dword ptr[esp + 0x1C], 0x005752D6
		je partychange
		cmp dword ptr[esp + 0x1C], 0x005757D8
		je partychange
		cmp dword ptr[esp + 0x1C], 0x00574D60
		je partychange
		jmp exits
		partychange :
		mov dword ptr[raid_pointer], eax
			mov dword ptr[RaidInj12r3], eax
			exits :
		pop edx
			pop ecx
			pop eax
			jmp RaidInj12jmp

	}
}


// RaidInj14 hepsi
DWORD RaidInj14jmp = 0x0053E97B;

DWORD RaidInj14call = 0x00451B80;

void __declspec(naked) RaidInj14()

{
	__asm
	{
		mov eax, [raid_pointer]
		imul eax, eax, 0x1E
		add ebx, eax
		mov[esp + 0x3C], ebx
		call RaidInj14call
		jmp RaidInj14jmp
	}
}


// RaidInj15 hepsi
DWORD RaidInj15jmp = 0x005403C9;


void __declspec(naked) RaidInj15()

{
	__asm
	{
		mov ecx, [raid_pointer]
		imul ecx, ecx, 0x1E
		add esi, ecx
		push esi
		mov ecx, 0x022AA71C
		jmp RaidInj15jmp
	}
}


DWORD Porcentage = 0;
DWORD Display_HP_Bar = 0x0057C000;
DWORD Send_Pos = 0x00631BE0;
DWORD Return_HP_Bar = 0x00453BAA;
_declspec(naked) void HP_Bar_Main() {
	_asm {
		cmp dword ptr ds : [esi + 0x0000015C] , 00  // current hp
		je originalcode

		sub dword ptr ds : [esp + 0x10] , 06
		fld dword ptr ds : [esp + 0x1C]
		push eax
		push ecx
		fstp dword ptr ds : [esp]
		fld dword ptr ds : [esp + 0x20]
		mov eax, 0x00748498
		fld qword ptr ss : [eax]
		fsub st(1), st(0)
		fxch st(1)
		call Send_Pos
		fild dword ptr ds : [esi + 0x318]
		fisub dword ptr ds : [esi + 0x00000318]
		add eax, 0x12
		push eax
		fadd dword ptr ds : [esp + 0x20]
		fiadd[esp + 0x1C]
		FADDP ST(1), ST
		mov eax, 0x00748428
		fsub qword ptr ss : [eax]
		call Send_Pos
		sub eax, 0x1C
		mov ecx, [esp + 0x2C]
		push eax
		call Function_Crack_1
		fld dword ptr ds : [esp + 0x1C]
		push eax
		push ecx
		fstp dword ptr ds : [esp]
		fld dword ptr ds : [esp + 0x20]
		mov eax, 0x00748498
		fld qword ptr ss : [eax]
		fsub st(1), st(0)
		fxch st(1)
		call Send_Pos
		fild dword ptr ds : [esi + 0x318]
		fisub[esi + 0x00000318]
		add eax, 0x12
		push eax
		fadd dword ptr ds : [esp + 0x20]
		fiadd[esp + 0x1C]
		FADDP ST(1), ST
		mov eax, 0x00748428
		fsub qword ptr ss : [eax]
		call Send_Pos
		sub eax, 0x1C
		mov ecx, [esp + 0x2C]
		push eax
		call Function_Crack_2
		add dword ptr ds : [esp + 0x10] , 06


		originalcode :
		cmp dword ptr ds : [0x913464] , 0x02
		jmp Return_HP_Bar

		Function_Crack_1 :
		sub esp, 0x08
			fldz
			push ebx
			push esi
			fstp dword ptr ds : [esp + 0x08]
			mov esi, ecx
			mov ecx, [esp + 0x20]
			xor bl, bl
			mov eax, 0x0000001E
			lea ebx, [ebx]
			cmp ecx, [eax * 4 + 0x007AEE08]
			sub eax, 0x01
			cmp eax, 0x0F
			mov bl, al
			mov eax, dword ptr ds : [0x022B69A8]
			mov ecx, [eax]
			mov edx, [ecx + 0x00000114]
			push 02
			push 05
			push 00
			push eax
			call edx
			mov eax, dword ptr ds : [0x022B69A8]
			mov ecx, [eax]
			mov edx, [ecx + 0x00000114] // qword = doble
			push 02
			push 06
			push 00
			push eax
			call edx
			movzx eax, bl
			mov[esp + 0x0C], eax
			inc eax
			mov[esp + 0x20], eax
			sub esp, 0x10
			mov eax, [esp + 0x28]
			fild dword ptr ds : [esp + 0x30]
			fld qword ptr ss : [0x00748258] // doble 1.00
			fmul st(1), st(0)
			fxch st(1)
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x0C]
			fimul[esp + 0x1C]
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x08]
			fld dword ptr ds : [esp + 0x18]
			fld qword ptr ss : [0x00748258] // doble 1.00
			fadd st(0), st(1)
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x04]
			fadd qword ptr ss : [0x00748260] // doble 0
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp]
			push 0x08
			fld dword ptr ds : [esp + 0x30]
			push 0x64
			push ecx
			mov ecx, [esp + 0x30]
			fstp dword ptr ds : [esp]
			push eax
			push ecx
			push - 0x01
			lea ecx, dword ptr ds : [0x007C4A68 + 0x00142000]
			call Display_HP_Bar
			pop esi
			pop ebx
			add esp, 0x08
			ret 0x0010


			Function_Crack_2 :
			pushad
			pushfd
			mov eax, [esi + 0x0000015C]
			mov ebx, [esi + 0x00000158]
			sub eax, ebx
			imul eax, eax, 0x64
			cdq
			mov ebx, [esi + 0x0000015C]
			idiv ebx
			mov ebx, 0x00000064
			sub ebx, eax
			mov eax, ebx
			mov[Porcentage], eax
			popfd
			popad

			sub esp, 0x08
			fldz
			push ebx
			push esi
			fstp dword ptr ds : [esp + 0x08]
			mov esi, ecx
			mov ecx, [esp + 0x20]
			xor bl, bl
			mov eax, 0x0000001E
			lea ebx, [ebx]
			cmp ecx, [eax * 0x4 + 0x007AEE08]
			sub eax, 0x01
			cmp eax, 0x0F
			mov bl, al
			mov eax, dword ptr ds : [0x022B69A8]
			mov ecx, [eax]
			mov edx, [ecx + 0x00000114]
			push 02
			push 05
			push 00
			push eax
			call edx
			mov eax, dword ptr ds : [0x022B69A8]
			mov ecx, [eax]
			mov edx, [ecx + 0x00000114]
			push 02
			push 06
			push 00
			push eax
			call edx
			movzx eax, bl
			mov eax, 0x00000001
			mov[esp + 0x0C], eax
			add eax, 0x01
			mov[esp + 0x20], eax
			sub esp, 0x10
			mov eax, [esp + 0x28]
			fild dword ptr ds : [esp + 0x30]
			fld qword ptr ss : [0x00748258]
			fmul st(1), st(0)
			fxch st(1)
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x0C]
			fimul[esp + 0x1C]
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x08]
			fld dword ptr ds : [esp + 0x18]
			fld qword ptr ss : [0x00748258]
			fadd st(0), st(1)
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp + 0x04]
			fadd qword ptr ss : [0x00748260]
			fstp dword ptr ds : [esp + 0x30]
			fld dword ptr ds : [esp + 0x30]
			fstp dword ptr ds : [esp]
			push ebx
			mov ebx, [Porcentage]
			mov[esp + 0x04], ebx
			pop ebx
			mov[esp + 0x04], 0x3F800000
			push 0x08
			fld dword ptr ds : [esp + 0x30]
			push[Porcentage]
			push ecx
			mov ecx, [esp + 0x30]
			fstp dword ptr ds : [esp]
			push eax
			push ecx
			push - 0x01
			lea ecx, dword ptr ds : [0x007C4A68 + 0x00142050]// monster hp bar
			call Display_HP_Bar
			pop esi
			pop ebx
			add esp, 0x08
			ret 0x0010

	}
}





using namespace std;


string globalEncryptKey = "LuWCFZPu3F";

BOOL CheckIp(string ip)
{
	char ipGame[20];
	DWORD dwOldProtect;
	::VirtualProtect((void*)0x007C0DD0, sizeof(ipGame), PAGE_READWRITE, &dwOldProtect);
	::ReadProcessMemory(GetCurrentProcess(), (void*)0x007C0DD0, &ipGame, sizeof(ipGame), 0);
	::VirtualProtect((void*)0x007C0DD0, sizeof(ipGame), dwOldProtect, &dwOldProtect);

	if (strcmp(ipGame, decrypt(ip, globalEncryptKey).c_str()) != 0)
	{
		return false;
	}

	return true;
}




void cStorm()

{

	Hook((void*)0x0040E0B8, SahEncrypt, 5);
	Hook((void*)0x0040E468, SahName, 5);
	Hook((void*)0x0042BDAA, Alloc_Effects, 5);
	Hook((void*)0x0044F8D0, cAllocTitle, 9);

	Sleep(10000);

	if (CheckIp("mctuf8eOE7ER")) {




		Hook((void*)0x005EC71F, newPacket, 5);


		Hook((void*)0x0060AF89, HideGsConfig, 5);


		Hook((void*)0x4E50D5, fn0x4E50D5, 6);
		

		Hook((void*)0x00453BA3, HP_Bar_Main, 7);

		Hook((void*)0x0059F1D3, Remove_Effect_When_Remove_Costume, 7);
		Hook((void*)0x004C4288, dwRR3, 6);
		Hook((void*)0x004C429F, dwRR2, 5);
		Hook((void*)0x004C42BF, dwRR, 5);

		Hook((void*)0x42B6D4, skillbar_main, 6);
		//
		Hook((void*)0x4A4021, skillbar_add1, 7);
		//
		Hook((void*)0x4A4103, skillbar_add2, 8);
		//
		Hook((void*)0x4FE57C, skillbar_add3, 6); //Slot plus Görüntü
		//
		Hook((void*)0x4FF29B, skillbar_add4, 5);
		//
		Hook((void*)0x4FF950, skillbar_add5, 9);
		//
		Hook((void*)0x4FF994, skillbar_add6, 7); // Slot plus + ve - düzeltme
		//
		Hook((void*)0x4FFE70, skillbar_add7, 7);

		BYTE skillbar_main_memory2[] = { 0x3C, 0x02 };
		memcpy((void*)0x4FEF39, skillbar_main_memory2, 2);

		Hook((void*)0x00427E80, flash, 6);
		Hook((void*)0x004867A1, dwRemoveEffects, 5);
		Hook((void*)0x0058F0F0, dwEffects, 5);

		Hook((void*)0x004E463E, SetModelID, 9);

		Hook((void*)0x00414977, SetPosition, 7);
		Hook((void*)0x004143C5, AllowModels, 8);
		Hook((void*)0x005F4535, GetPacket, 7);
		Hook((void*)0x00486DE2, Command, 7);
		Hook((void*)0x0041A73B, ChangeMountSpeed, 6);
		Hook((void*)0x00453CCD, cDisplayTitle, 7);


		Hook((void*)0x0059F49E, Effect_Costume, 6);
		Hook((void*)0x005EB870, Show_Effect_When_Respawn, 5);
		Hook((void*)0x00595472, Show_Effect_When_Respawn_2, 8);
		Hook((void*)0x004162F0, Effect_When_Change_Map, 5);


		//Raid Text Color 1
		BYTE Raidtextcolor1[] = { 0x68, 0x4D, 0xFF, 0xFF, 0xFF };
		memcpy((void*)0x0053D5B5, Raidtextcolor1, 5);
		//Raid Text Color 2
		BYTE Raidtextcolor2[] = { 0x68, 0x4D, 0xFF, 0xFF, 0xFF };
		memcpy((void*)0x0053D655, Raidtextcolor2, 5);


		// RaidInjAdr1
		Hook((void*)0x0053E873, RaidInj1, 6);
		// RaidInjAdr2
		Hook((void*)0x0053F527, RaidInj2, 6);
		//RaidInjAdr3
		BYTE RaidInjAdr3[] = { 0x83, 0xFE, 0x96 };
		memcpy((void*)0x004EC981, RaidInjAdr3, 3);
		// RaidInjAdr4
		Hook((void*)0x00540732, RaidInj4, 9);
		// RaidInjAdr5
		Hook((void*)0x0053F656, RaidInj5, 9);
		// RaidInjAdr6
		Hook((void*)0x004A44DA, RaidInj6, 6);
		// RaidInjAdr7
		Hook((void*)0x0048DE47, RaidInj7, 5);
		// RaidInjAdr8
		Hook((void*)0x0048DDE6, RaidInj8, 5);
		// RaidInjAdr9
		Hook((void*)0x0053D4C2, RaidInj9, 6);
		// RaidInjAdr10
		Hook((void*)0x0053D515, RaidInj10, 6);
		// RaidInjAdr11
		Hook((void*)0x00446007, RaidInj11, 9);
		// RaidInjAdr12
		Hook((void*)0x0053CDBB, RaidInj12, 6);
		//RaidInjAdr13
		BYTE RaidInjAdr13[] = { 0x83, 0xFB, 0x18, 0x77, 0x36 };
		memcpy((void*)0x0053CD98, RaidInjAdr13, 5);
		// RaidInjAdr14
		Hook((void*)0x0053E972, RaidInj14, 9);
		// RaidInjAdr15
		Hook((void*)0x005403C3, RaidInj15, 6);


	}

	else ExitProcess(0);
}


void StormThread() {
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(cStorm), NULL, 0, 0);
}