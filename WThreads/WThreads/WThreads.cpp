// WThreads.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <process.h>

#include "threads.h"

void threadId();
void simpleThreadWithParams();
void otherCalls();
void thTerminating();
void thSuspend();

int main()
{
	printf("Starting threads\n");
	//simpleThreadWithParams();
	//threadId();
	//otherCalls();
	//thTerminating();
	thSuspend();

	getchar();
    return 0;
}

void simpleThreadWithParams() 
{
	using namespace std;
	unsigned int counter = 0;

	DWORD treadID;
	HANDLE handle = CreateThread(0, 0, myThread, &counter, 0, &treadID);

	threadId();

	char myChar = ' ';

	while (myChar != 'q') {
		cout << counter << endl;
		myChar = getchar();
	}

	CloseHandle(handle);
}

void threadId() 
{
	DWORD threadID2;
	HANDLE handleThreadId = CreateThread(0, 0, showThreadID, 0, 0, &threadID2);

	printf("Thread after %d \n", threadID2);
}

void otherCalls() 
{
	HANDLE handleA, handleB, handleC;

	handleA = CreateThread(0, 0, thPrintID, 0, 0, 0);

	handleB = (HANDLE)_beginthreadex(0, 0, &thPrintIDHex, 0, 0, 0);
	WaitForSingleObject(handleB, INFINITE);


	handleC = (HANDLE)_beginthread(&thPrintIdBegin, 0, 0);
}


void waitSingle(HANDLE arr[], int length)
{
	printf("Waiting for terminate (single) thread\n");
	for (int i = 0; i < length; i++)
	{
		WaitForSingleObject(arr[i], INFINITE);
	}
}

void waitMultiple(HANDLE arr[], int length)
{
	printf("Waiting for terminate (multiple) thread\n");
	WaitForMultipleObjects(length, arr, true, INFINITE);
}

void thTerminating()
{
	HANDLE handleArr[2];

	handleArr[0] = (HANDLE)_beginthreadex(0, 0, &thSleep, 0, 0, 0);
	handleArr[1] = (HANDLE)_beginthreadex(0, 0, &thPrintIDHex, 0, 0, 0);

	//waitSingle(handleArr, 2);
	waitMultiple(handleArr, 2);

	CloseHandle(handleArr[0]);
	CloseHandle(handleArr[1]);
}



void thSuspend()
{
	HANDLE handle;

	handle = (HANDLE)_beginthreadex(0, 0, &thPrintIDHex, 0, CREATE_SUSPENDED, 0);
	
	getchar();
	ResumeThread(handle);
	getchar();

	WaitForSingleObject(handle, INFINITE);
	CloseHandle(handle);
}