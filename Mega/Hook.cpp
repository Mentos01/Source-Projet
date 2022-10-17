#include "pch.h"

bool Hook(void* addr, void* func, int len)
{
	if (len < 5)
		return false;

	unsigned long old;
	VirtualProtect(addr, len, PAGE_EXECUTE_READWRITE, &old);
	memset(addr, 0x90, len);
	int cave = ((int)func - (int)addr) - 5;
	*(unsigned char*)addr = 0xE9;
	*(int*)((int)addr + 1) = cave;
	unsigned long temp;
	VirtualProtect(addr, len, old, &temp);
	return false;
}