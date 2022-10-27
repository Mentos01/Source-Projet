#include "pch.h"


const char* LoadStaff[] =
{
	"staff.tga"
};

const char* LoadGuildDisplay[] =
{
	"guild_display.tga"
};


const char* dwBandeira2[] =
{
	"mon_not.tga"
};

const char* dwInterface[] =
{
	"data/interface"
};



DWORD callInter = 0x005497A0;
DWORD dwBand = 0x00444910;

_declspec(naked) void dwLoadTitle()
{
	_asm {
		push 0x10
		push 0x10
		push dwBandeira2
		push dwInterface
		lea ecx, [esi + 0x00140234] 
		call callInter

		push 0x100
		push 0x40
		push LoadGuildDisplay
		push dwInterface
		lea ecx, [esi + 0x00140584]
		call callInter


		push 0x100
		push 0x40
		push LoadStaff
		push dwInterface
		lea ecx, [esi + 0x00140684]
		call callInter
		jmp dwBand

	}

}


DWORD dwStatic = 0x6BAFF1;
DWORD cRender = 0x5CD414;
_declspec(naked) void gRender() {
	_asm {

		mov al, [esi + 0x000002CC]
		fld dword ptr ss : [esp + 0x6C]
		fsub dword ptr ss : [0x6BCA1C]
		test al, al
		mov eax, dword ptr ds : [esi + 0x000002F8]
		lea edi, [ebx + 0x00140234]
		je dwFlag5
		test eax, eax
		je dwFlag6
		mov ecx, dword ptr ds : [esp + 0x70]
		push ecx
		call cRender
		fild dword ptr ss : [esi + 0x000002DC]
		fsubr dword ptr ss : [esp + 0x6C]
		fsub dword ptr ss : [0x6BC86C]
		fsub dword ptr ss : [0x6BC894]
		fsub dword ptr ss : [0x6BC898]
		jmp dwFlagCall

		dwFlag6 :
		mov edx, dword ptr ds : [esp + 0x70]
			push edx
			call cRender
			fild dword ptr ss : [esi + 0x000002DC]
			fsubr dword ptr ss : [esp + 0x6C]
			fsub dword ptr ss : [0x6BC9B8]
			fsub dword ptr ss : [0x6BC894]
			fsub dword ptr ss : [0x6BC898]
			jmp dwFlagCall

			dwFlag5 :
		test eax, eax
			je dwFlag4
			mov eax, dword ptr ds : [esp + 0x70]
			push eax
			call cRender
			fild dword ptr ss : [esi + 0x000002DC]
			fsubr dword ptr ss : [esp + 0x6C]
			fsub dword ptr ss : [0x6BC9B8]
			jmp dwFlag3

			dwFlag4 :
		mov ecx, dword ptr ds : [esp + 0x70]
			push ecx
			call cRender
			fild dword ptr ss : [esi + 0x000002DC]
			fsubr dword ptr ss : [esp + 0x6C]


			dwFlag3 :
			fsub dword ptr ss : [0x6BC894]
			fsub dword ptr ss : [0x6BCA1C]

			dwFlagCall :
			add eax, -0x35
			push eax
			call cRender
			mov ecx, edi
			add eax, dword ptr ds : [esi + 0x000002DC]
			add eax, -0x4D
			push eax 
			jmp dwStatic
	}
}


DWORD cShow = 0x5498B0;
DWORD getRender3Ret = 0x44BFBA;
_declspec(naked) void getRender3()
{
	_asm {

		push eax
		call cRender
		mov ecx, edi
		push eax
		call cShow

		fld dword ptr ss : [esp + 0x6C]
		mov eax, dword ptr ds : [esi + 0x000002F8]
		fsub dword ptr ss : [0x6BCA1C]
		test eax, eax
		je dwFlag2
		mov edx, dword ptr ds : [esp + 0x70]
		push edx
		call cRender
		fild dword ptr ss : [esp + 0x20]
		fiadd dword ptr ss : [esi + 0x000002DC]
		fadd dword ptr ss : [esp + 0x6C]
		fadd dword ptr ss : [0x6BC890]
		fsub dword ptr ss : [0x6BC9D4]
		fadd dword ptr ss : [0x6BC9D0]
		jmp dwFlagCall

		dwFlag2 :
		mov eax, dword ptr ds : [esp + 0x70]
			push eax
			call cRender
			fild dword ptr ss : [esp + 0x20]
			fiadd dword ptr ss : [esi + 0x000002DC]
			fadd dword ptr ss : [esp + 0x6C]
			fadd dword ptr ss : [0x6BCA1C]
			fsub dword ptr ss : [0x6BC9D4]

			dwFlagCall :
			push eax
			call cRender
			mov ecx, edi
			push eax 
			jmp getRender3Ret 
	}
}
DWORD dwExitBand = 0x549A67;
DWORD wrBandeiraRt = 0x549A68;
DWORD cBandeira = 0x541BB0;
DWORD dwOriginalC = 0x5498B6;
DWORD dwHideRet = 0x5499B5;
_declspec(naked) void dwHookTitle()
{
	_asm {
		push eax
		mov eax, 0x0044BF4D
		cmp[esp + 0x04], eax
		pop eax
		je dwFlagShowTarget

		push eax
		mov eax, 0x0044BFBF
		cmp[esp + 0x04], eax
		pop eax 
		je dwFlagShowTarget

		push eax
		mov eax, 0x006BAFF6
		cmp[esp + 0x04], eax
		pop eax 
		je dwStaffCall


		push eax
		mov eax, 0x00890000
		cmp[esp + 0x4], eax
		pop eax
		jg dwHideMon

		jmp originalcodeB


		dwStaffCall :
		cmp byte ptr ds : [esi + 0x18C + 0x7] , 0x18
			jne dwPlayerCheck

			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x01
			je dwStaff
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x6F
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7D
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x77
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x76
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x70
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7E
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x78
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7F
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x71
			je getGuildDisplay

			jmp dwHideMon

			dwStaff :
		sub esp, 0x74
			push esi
			mov esi, ecx
			cmp dword ptr ds : [esi] , 0x00
			je dwExitFlag

			//
			fild dword ptr ds : [esp + 0x7C]
			mov ecx, [esp + 0x00000084]
			mov eax, [esp + 0x00000084]
			mov dword ptr ds : [esp + 0x10] , eax
			fst dword ptr ds : [esp + 0x04]
			or eax, -0x01

			fsub dword ptr ds : [0x6BC860]
			mov edx, ecx
			mov dword ptr ds : [esp + 0x2C] , ecx
			mov dword ptr ds : [esp + 0x64] , ecx
			fst dword ptr ds : [esp + 0x08]
			push 0x01
			fild dword ptr ds : [esp + 0x00000084]
			mov ecx, 0x2209408
			fld dword ptr ds : [0x6BC860]

			mov dword ptr ds : [esp + 0x18] , 0x3F800000
			mov dword ptr ds : [esp + 0x1C] , eax
			fsubr st(0x0), st(0x1)
			mov dword ptr ds : [esp + 0x20] , 0x00000000
			mov dword ptr ds : [esp + 0x24] , 0x00000000
			mov dword ptr ds : [esp + 0x34] , 0x3F800000
			fst dword ptr ds : [esp + 0x10]
			mov dword ptr ds : [esp + 0x38] , eax
			fld dword ptr ds : [esp + 0x08]
			mov dword ptr ds : [esp + 0x3C] , 0x3F800000

			// SIZE Y

			push eax
			lea eax, [ebx + 0x00140684] 
			fadd dword ptr ds : [eax + 0x0C]
			pop eax

			
			mov dword ptr ds : [esp + 0x40] , 0x00000000
			mov dword ptr ds : [esp + 0x4C] , edx
			mov dword ptr ds : [esp + 0x50] , 0x3F800000
			fsub dword ptr ds : [0x6BC860]
			mov dword ptr ds : [esp + 0x54] , eax
			mov dword ptr ds : [esp + 0x58] , 0x3F800000
			mov dword ptr ds : [esp + 0x5C] , 0x3F800000
			fst dword ptr ds : [esp + 0x28]
			mov dword ptr ds : [esp + 0x6C] , 0x3F800000
			fxch st(0x1)

			mov dword ptr ds : [esp + 0x70] , eax
			fstp dword ptr ds : [esp + 0x2C]
			mov dword ptr ds : [esp + 0x74] , 0x00000000
			mov dword ptr ds : [esp + 0x78] , 0x3F800000
			fstp dword ptr ds : [esp + 0x44]

			// Size X
			push eax
			lea eax, [ebx + 0x00140684] 
			fadd dword ptr ds : [eax + 0x08]
			pop eax
			//
			fsub dword ptr ds : [0x6BC860]
			fst dword ptr ds : [esp + 0x48]
			fxch st(0x1)

			fstp dword ptr ds : [esp + 0x60]
			fstp dword ptr ds : [esp + 0x64]
			call cBandeira
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x04
			push 0x17
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x05
			push 0x13
			push eax
			call dword ptr ds : [ecx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x06
			push 0x14
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x05
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x04
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x02
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x01
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]

			push eax 
			lea eax, [ebx + 0x140684]
			mov edx, [eax]
			pop eax
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push edx
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x00000104]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x1C
			lea edx, [esp + 0x0C]
			push edx
			push 0x02
			push 0x06
			push eax
			call dword ptr ds : [ecx + 0x0000014C]
			jmp dwExitFlag




		dwPlayerCheck:
		cmp byte ptr ds : [esi + 0x18C + 0x7] , 0x27
			je dwCheckType31
			jmp dwHideMon

			dwCheckType31 :
		cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x6F
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7D
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x77
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x76
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x70
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7E
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x78
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x7F
			je getGuildDisplay
			cmp byte ptr ds : [esi + 0x199 + 0x7] , 0x71
			je getGuildDisplay
			jmp dwHideMon



		getGuildDisplay:
		sub esp, 0x74
			push esi
			mov esi, ecx
			cmp dword ptr ds : [esi] , 0x00
			je dwExitFlag

			//
			fild dword ptr ds : [esp + 0x7C]
			mov ecx, [esp + 0x00000084]
			mov eax, [esp + 0x00000084]
			mov dword ptr ds : [esp + 0x10] , eax
			fst dword ptr ds : [esp + 0x04]
			or eax, -0x01

			fsub dword ptr ds : [0x6BC860]
			mov edx, ecx
			mov dword ptr ds : [esp + 0x2C] , ecx
			mov dword ptr ds : [esp + 0x64] , ecx
			fst dword ptr ds : [esp + 0x08]
			push 0x01
			fild dword ptr ds : [esp + 0x00000084]
			mov ecx, 0x2209408
			fld dword ptr ds : [0x6BC860]

			mov dword ptr ds : [esp + 0x18] , 0x3F800000
			mov dword ptr ds : [esp + 0x1C] , eax
			fsubr st(0x0), st(0x1)
			mov dword ptr ds : [esp + 0x20] , 0x00000000
			mov dword ptr ds : [esp + 0x24] , 0x00000000
			mov dword ptr ds : [esp + 0x34] , 0x3F800000
			fst dword ptr ds : [esp + 0x10]
			mov dword ptr ds : [esp + 0x38] , eax
			fld dword ptr ds : [esp + 0x08]
			mov dword ptr ds : [esp + 0x3C] , 0x3F800000



			push eax
			lea eax, [ebx + 0x00140684] 
			fadd dword ptr ds : [eax + 0x0C]
			pop eax



			mov dword ptr ds : [esp + 0x40] , 0x00000000
			mov dword ptr ds : [esp + 0x4C] , edx
			mov dword ptr ds : [esp + 0x50] , 0x3F800000
			fsub dword ptr ds : [0x6BC860]
			mov dword ptr ds : [esp + 0x54] , eax
			mov dword ptr ds : [esp + 0x58] , 0x3F800000
			mov dword ptr ds : [esp + 0x5C] , 0x3F800000
			fst dword ptr ds : [esp + 0x28]
			mov dword ptr ds : [esp + 0x6C] , 0x3F800000
			fxch st(0x1)

			mov dword ptr ds : [esp + 0x70] , eax
			fstp dword ptr ds : [esp + 0x2C]
			mov dword ptr ds : [esp + 0x74] , 0x00000000
			mov dword ptr ds : [esp + 0x78] , 0x3F800000
			fstp dword ptr ds : [esp + 0x44]


			push eax
			lea eax, [ebx + 0x00140684] 
			fadd dword ptr ds : [eax + 0x08]
			pop eax



			fsub dword ptr ds : [0x6BC860]
			fst dword ptr ds : [esp + 0x48]
			fxch st(0x1)

			fstp dword ptr ds : [esp + 0x60]
			fstp dword ptr ds : [esp + 0x64]
			call cBandeira
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x04
			push 0x17
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x05
			push 0x13
			push eax
			call dword ptr ds : [ecx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x06
			push 0x14
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x05
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x04
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x02
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x01
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]

			push eax 
			lea eax, [ebx + 0x140584]
			mov edx, [eax]
			pop eax
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push edx
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x00000104]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x1C
			lea edx, [esp + 0x0C]
			push edx
			push 0x02
			push 0x06
			push eax
			call dword ptr ds : [ecx + 0x0000014C]
			jmp dwExitFlag



		dwHideMon:
		sub esp, 0x74
			push esi
			mov esi, ecx
			cmp dword ptr ds : [esi] , 0x00
			je dwExitFlag

			//
			fild dword ptr ds : [esp + 0x7C]
			mov ecx, [esp + 0x00000084]
			mov eax, [esp + 0x00000084]
			mov dword ptr ds : [esp + 0x10] , eax
			fst dword ptr ds : [esp + 0x04]
			or eax, -0x01

			fsub dword ptr ds : [0x6BC860]
			mov edx, ecx
			mov dword ptr ds : [esp + 0x2C] , ecx
			mov dword ptr ds : [esp + 0x64] , ecx
			fst dword ptr ds : [esp + 0x08]
			push 0x01
			fild dword ptr ds : [esp + 0x00000084]
			mov ecx, 0x2209408
			fld dword ptr ds : [0x6BC860]

			mov dword ptr ds : [esp + 0x18] , 0x3F800000
			mov dword ptr ds : [esp + 0x1C] , eax
			fsubr st(0x0), st(0x1)
			mov dword ptr ds : [esp + 0x20] , 0x00000000
			mov dword ptr ds : [esp + 0x24] , 0x00000000
			mov dword ptr ds : [esp + 0x34] , 0x3F800000
			fst dword ptr ds : [esp + 0x10]
			mov dword ptr ds : [esp + 0x38] , eax
			fld dword ptr ds : [esp + 0x08]
			mov dword ptr ds : [esp + 0x3C] , 0x3F800000

			// SIZE Y

			//push eax
			//lea eax, [ebx + 0x00140684] 
			//fadd dword ptr ds : [eax + 0x0C]
			//pop eax

			//
			mov dword ptr ds : [esp + 0x40] , 0x00000000
			mov dword ptr ds : [esp + 0x4C] , edx
			mov dword ptr ds : [esp + 0x50] , 0x3F800000
			fsub dword ptr ds : [0x6BC860]
			mov dword ptr ds : [esp + 0x54] , eax
			mov dword ptr ds : [esp + 0x58] , 0x3F800000
			mov dword ptr ds : [esp + 0x5C] , 0x3F800000
			fst dword ptr ds : [esp + 0x28]
			mov dword ptr ds : [esp + 0x6C] , 0x3F800000
			fxch st(0x1)

			mov dword ptr ds : [esp + 0x70] , eax
			fstp dword ptr ds : [esp + 0x2C]
			mov dword ptr ds : [esp + 0x74] , 0x00000000
			mov dword ptr ds : [esp + 0x78] , 0x3F800000
			fstp dword ptr ds : [esp + 0x44]

			// Size X
			//push eax
			//lea eax, [ebx + 0x00140684] 
			//fadd dword ptr ds : [eax + 0x08]
			//pop eax
			//
			fsub dword ptr ds : [0x6BC860]
			fst dword ptr ds : [esp + 0x48]
			fxch st(0x1)

			fstp dword ptr ds : [esp + 0x60]
			fstp dword ptr ds : [esp + 0x64]
			call cBandeira
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x04
			push 0x17
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x05
			push 0x13
			push eax
			call dword ptr ds : [ecx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x06
			push 0x14
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x05
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x04
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x02
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x01
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]

			push eax 
			lea eax, [ebx + 0x140684]
			mov edx, [eax]
			pop eax
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push edx
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x00000104]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x1C
			lea edx, [esp + 0x0C]
			push edx
			push 0x02
			push 0x06
			push eax
			call dword ptr ds : [ecx + 0x0000014C]
			jmp dwExitFlag


			showNon :
		sub esp, 0x74
			push esi
			mov esi, ecx
			cmp dword ptr ds : [esi] , 0x00
			je dwExitFlag

			//
			fild dword ptr ds : [esp + 0x7C]
			mov ecx, [esp + 0x00000084]
			mov eax, [esp + 0x00000084]
			mov dword ptr ds : [esp + 0x10] , eax
			fst dword ptr ds : [esp + 0x04]
			or eax, -0x01

			fsub dword ptr ds : [0x6BC860]
			mov edx, ecx
			mov dword ptr ds : [esp + 0x2C] , ecx
			mov dword ptr ds : [esp + 0x64] , ecx
			fst dword ptr ds : [esp + 0x08]
			push 0x01
			fild dword ptr ds : [esp + 0x00000084]
			mov ecx, 0x2209408
			fld dword ptr ds : [0x6BC860]

			mov dword ptr ds : [esp + 0x18] , 0x3F800000
			mov dword ptr ds : [esp + 0x1C] , eax
			fsubr st(0x0), st(0x1)
			mov dword ptr ds : [esp + 0x20] , 0x00000000
			mov dword ptr ds : [esp + 0x24] , 0x00000000
			mov dword ptr ds : [esp + 0x34] , 0x3F800000
			fst dword ptr ds : [esp + 0x10]
			mov dword ptr ds : [esp + 0x38] , eax
			fld dword ptr ds : [esp + 0x08]
			mov dword ptr ds : [esp + 0x3C] , 0x3F800000

			// SIZE Y

			push eax
			lea eax, [ebx + 0x00140234] 
			fadd dword ptr ds : [eax + 0x0C]
			pop eax

			//
			mov dword ptr ds : [esp + 0x40] , 0x00000000
			mov dword ptr ds : [esp + 0x4C] , edx
			mov dword ptr ds : [esp + 0x50] , 0x3F800000
			fsub dword ptr ds : [0x6BC860]
			mov dword ptr ds : [esp + 0x54] , eax
			mov dword ptr ds : [esp + 0x58] , 0x3F800000
			mov dword ptr ds : [esp + 0x5C] , 0x3F800000
			fst dword ptr ds : [esp + 0x28]
			mov dword ptr ds : [esp + 0x6C] , 0x3F800000
			fxch st(0x1)

			mov dword ptr ds : [esp + 0x70] , eax
			fstp dword ptr ds : [esp + 0x2C]
			mov dword ptr ds : [esp + 0x74] , 0x00000000
			mov dword ptr ds : [esp + 0x78] , 0x3F800000
			fstp dword ptr ds : [esp + 0x44]

			// Size X
			push eax
			lea eax, [ebx + 0x00140234] 
			fadd dword ptr ds : [eax + 0x08]
			pop eax
			//
			fsub dword ptr ds : [0x6BC860]
			fst dword ptr ds : [esp + 0x48]
			fxch st(0x1)

			fstp dword ptr ds : [esp + 0x60]
			fstp dword ptr ds : [esp + 0x64]
			call cBandeira
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x04
			push 0x17
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x05
			push 0x13
			push eax
			call dword ptr ds : [ecx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x06
			push 0x14
			push eax
			call dword ptr ds : [edx + 0x000000E4]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x05
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x04
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x02
			push 0x02
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x0000010C]
			mov eax, [eax + 0x2209400]
			mov edx, [eax]
			push 0x02
			push 0x01
			push 0x00
			push eax
			call dword ptr ds : [edx + 0x0000010C]

			push eax 
			lea eax, [ebx + 0x00140234]
			mov edx, [eax]
			pop eax
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push edx
			push 0x00
			push eax
			call dword ptr ds : [ecx + 0x00000104]
			mov eax, [eax + 0x2209400]
			mov ecx, [eax]
			push 0x1C
			lea edx, [esp + 0x0C]
			push edx
			push 0x02
			push 0x06
			push eax
			call dword ptr ds : [ecx + 0x0000014C]
			jmp dwExitFlag



		originalcodeB:
		//código original
		sub esp, 0x74
			push esi
			mov esi, ecx
			jmp dwOriginalC


			dwExitFlag :
		jmp dwExitBand


			remova :
		mov eax, 0x0
			ret 0x00C


			dwFlagShowTarget :
			push eax
			mov eax, dword ptr ds : [0x00708C9C] 
			cmp[esi + 0x34], eax
			pop eax
			je originalcodeB
			jmp remova 

	}
}

DWORD dwIgnorejmp = 0x00541BB8;
DWORD dwIgnoreOriginal = 0x00541BB6;
_declspec(naked) void dwIgnoreOver()
{
	_asm {
		push eax
		mov eax, 0x00890000
		cmp[esp + 0x04], eax
		pop eax

		jg dwIgnoreLabel

		mov eax, [esp + 0x04]
		test eax, eax
		jmp dwIgnoreOriginal

		dwIgnoreLabel :
		jmp dwIgnorejmp

	}
}

DWORD dwAjust1Exit = 0x004AD674;
_declspec(naked) void dwAjustRR()
{
	_asm {
		add eax, 0x45
		cmp ecx, eax
		jmp dwAjust1Exit

	}
}
DWORD dwAjust2Exit = 0x004AD694;
_declspec(naked) void dwAjustRR2()
{
	_asm {
		add eax, 0x92
		cmp edx, eax
		jmp dwAjust2Exit

	}
}

DWORD dwAjust3Exit = 0x004AD65E;
_declspec(naked) void dwAjustRR3()
{
	_asm {

		mov eax, [esi + 0x000024C0]
		add eax, -0x10
		jmp dwAjust3Exit

	}
}




void TitleInit()
{
	Hook((void*)0x44BFC6, gRender, 7);
	Hook((void*)0x4448F7, dwLoadTitle, 9);
	Hook((void*)0x44BFB1, getRender3, 6);
	Hook((void*)0x5498B0, dwHookTitle, 6);
	Hook((void*)0x541BB0, dwIgnoreOver, 6);
	Hook((void*)0x4AD66F, dwAjustRR, 5);
	Hook((void*)0x4AD68F, dwAjustRR2, 5);
	Hook((void*)0x4AD658, dwAjustRR3, 6);
}
