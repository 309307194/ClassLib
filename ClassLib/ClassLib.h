#pragma once
#ifdef _WIN32	//WIN32ֻ��32λ���� _WIN64ֻ��64λ���� _WIN32������
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

