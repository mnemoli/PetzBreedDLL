// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Utils.h"
#include "XDownload.h"
#include "SighthoundSprite.h"

void* operator new (size_t size) { return PetzNew(size); };
void* operator new[](size_t size) { return PetzNew(size); };
void operator delete(void* ptr) { PetzDelete(ptr); };
void operator delete[](void* ptr) { PetzDelete(ptr); };

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{

    DisableThreadLibraryCalls(hModule);
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

long GetDLLVersion() {
    return 0x44000007;
}

bool GetLoadInfo(pfvector<LoadInfo, const char*>& loadInfoVector, ELoadType loadType, char const* someString, XLibraryList* xLibraryList) {
    return XDownload::GetDefaultLoadInfoFromDLL(loadInfoVector, loadType, someString, xLibraryList);
}

void GetFilmstrip(void* param1, XLibraryList* xLibraryList) {
    XDownload::GetFilmstripFromDLL("SighthoundSprite", xLibraryList);
}

SighthoundSprite* GetSprite(const LoadInfo& loadInfo, XLibraryList* xLibraryList) {
    int something = loadInfo.vars[194];
    SighthoundSprite* the_result = 0x0;
    switch (something) {
    case 0: {
        the_result = new SighthoundSprite();
        break;
    }
    default: {
        return 0x0;
        break;
    }
    }
    if (the_result != 0x0) {
        the_result->InitDownload(loadInfo, xLibraryList);
    }
    return the_result;
}