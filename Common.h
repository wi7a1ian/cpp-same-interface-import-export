#pragma once

#include <memory>
#include <string>

#ifdef _WIN32
#    ifdef FILESYSTEMINTERFACES_EXPORTS
#        define FILESYSTEMINTERFACES_API __declspec(dllexport)
#    else
#        define FILESYSTEMINTERFACES_API __declspec(dllimport)
#    endif
#else
#    define FILESYSTEMINTERFACES_API
#endif

extern "C" FILESYSTEMINTERFACES_API int GetFileSystemFactoryPtr() noexcept;

