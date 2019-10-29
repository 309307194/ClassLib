#pragma once
#ifdef _WIN32	//WIN32只是32位程序 _WIN64只是64位程序 _WIN32不区分
#ifdef CLASSLIB_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif // CLASSLIB_EXPORTS
#else
#define DLL_API
#endif

class DLL_API ClassLib
{
public:
	ClassLib();
	~ClassLib();
	static int count;
};

