#include "pch.h"

int Speed = 1000;

DWORD nameReturn1 = 0x44BA8D;
DWORD nameReturn2 = 0x50C669;
DWORD skillcolorReturn = 0x4A2850;
DWORD Color = 0xFF29ffa6;

void RGBColorLoop() {

	while (true) {
		Color = 0xFFff2929;
		Sleep(Speed);
		Color = 0xFFff294c;
		Sleep(Speed);
		Color = 0xFFff2970;
		Sleep(Speed);
		Color = 0xFFff2994;
		Sleep(Speed);
		Color = 0xFFff29b8;
		Sleep(Speed);
		Color = 0xFFff29db;
		Sleep(Speed);
		Color = 0xFFff29ff;
		Sleep(Speed);
		Color = 0xFFdb29ff;
		Sleep(Speed);
		Color = 0xFFb829ff;
		Sleep(Speed);
		Color = 0xFF9429ff;
		Sleep(Speed);
		Color = 0xFF7029ff;
		Sleep(Speed);
		Color = 0xFF4d29ff;
		Sleep(Speed);
		Color = 0xFF2929ff;
		Sleep(Speed);
		Color = 0xFF294dff;
		Sleep(Speed);
		Color = 0xFF2970ff;
		Sleep(Speed);
		Color = 0xFF2994ff;
		Sleep(Speed);
		Color = 0xFF29b8ff;
		Sleep(Speed);
		Color = 0xFF29dbff;
		Sleep(Speed);
		Color = 0xFF29ffff;
		Sleep(Speed);
		Color = 0xFF29ffdb;
		Sleep(Speed);
		Color = 0xFF29ffb8;
		Sleep(Speed);
		Color = 0xFF29ff94;
		Sleep(Speed);
		Color = 0xFF29ff70;
		Sleep(Speed);
		Color = 0xFF29ff4d;
		Sleep(Speed);
		Color = 0xFF29ff29;
		Sleep(Speed);
		Color = 0xFF4dff29;
		Sleep(Speed);
		Color = 0xFF70ff29;
		Sleep(Speed);
		Color = 0xFF94ff29;
		Sleep(Speed);
		Color = 0xFFb8ff29;
		Sleep(Speed);
		Color = 0xFFdbff29;
		Sleep(Speed);
		Color = 0xFFffff29;
		Sleep(Speed);
		Color = 0xFFffdb29;
		Sleep(Speed);
		Color = 0xFFffb829;
		Sleep(Speed);
		Color = 0xFFff9429;
		Sleep(Speed);
		Color = 0xFFff7029;
		Sleep(Speed);
		Color = 0xFFff4c29;
		Sleep(Speed);
	}
}

__declspec(naked) void SkillColor()
{
	__asm {

		mov eax, 0xF0424242
		jmp skillcolorReturn

	}
}

__declspec(naked) void nameHook1()
{
	_asm
	{
		mov eax, Color
		mov dword ptr ds : [esp + 0x18] , eax
		jmp nameReturn1
	}
}

__declspec(naked) void nameHook2()
{
	_asm
	{
		mov ebx, Color
		jmp nameReturn2
	}
}




void NameColor()
{
	Hook((void*)0x44BA85, nameHook1, 8);
	Hook((void*)0x50C664, nameHook2, 5);
	Hook((void*)0x4A284B, SkillColor, 5);
	CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(RGBColorLoop), NULL, 0, 0);
}