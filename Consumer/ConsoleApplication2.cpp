// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using FileSystemFactoryFunc = decltype(GetFileSystemFactoryPtr)*;

int main()
{
	if (auto libHandle = LoadLibrary(L"InBetweenLib.dll"))
	{
		if (auto entryPoint = reinterpret_cast<FileSystemFactoryFunc>(GetProcAddress(libHandle, "GetFileSystemFactoryPtr")))
		{
			auto tmpFactory = entryPoint();

			assert(tmpFactory == 666);
		}
	}
    return 0;
}

