// Lib1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

using FileSystemFactoryFunc = decltype(GetFileSystemFactoryPtr)*;

extern "C" FILESYSTEMINTERFACES_API int GetFileSystemFactoryPtr() noexcept
{
	return 666;
}
