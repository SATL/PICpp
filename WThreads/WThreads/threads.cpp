
#include "stdafx.h"

#include <stdio.h>
#include "threads.h"

DWORD WINAPI myThread(LPVOID lpParameter)
{
	unsigned int& counter = *((unsigned int*)lpParameter);
	while (counter < 0xFFFFFFFF)
		++counter;
	return 0;
}


DWORD WINAPI showThreadID(LPVOID lpParameter) {
	printf("Thread inside the %d \n", GetCurrentThreadId);
	return 0;
}

DWORD WINAPI thPrintID(__in LPVOID lpParameter)
{
	printf("CreateThread %d \n", GetCurrentThreadId());
	return 0;
}


unsigned int __stdcall thPrintIDHex(void* data)
{
	printf("_beginthreadex %d \n", GetCurrentThreadId());
	return 0;
}

void thPrintIdBegin(void* data)
{
	printf("_beginthread %d \n", GetCurrentThreadId());
}

unsigned int __stdcall thSleep(void* data)
{
	printf("Initing sleep(3s)... \n");
	Sleep(3000);
	printf("Sleep ended\n");
	return 0;
}