#pragma once


#include <windows.h>
#include <process.h>

DWORD WINAPI myThread(LPVOID lpParameter);
DWORD WINAPI showThreadID(LPVOID lpParameter);

DWORD WINAPI thPrintID(__in LPVOID lpParameter);
unsigned int __stdcall thPrintIDHex(void* data);
unsigned int __stdcall thSleep(void* data);
void thPrintIdBegin(void* data);
