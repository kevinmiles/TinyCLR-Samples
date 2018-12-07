#pragma once

#include <TinyCLR.h>

struct Interop_InterTest_InterTest_Resource {
	static const size_t FIELD_STATIC___manager___mscorlibSystemResourcesResourceManager = 0;
};

struct Interop_InterTest_Cipher_Xtea {
	static TinyCLR_Result EncipherFast___STATIC___VOID__U4__SZARRAY_U4__SZARRAY_U4(const TinyCLR_Interop_MethodData md);
	static TinyCLR_Result DecipherFast___STATIC___VOID__U4__SZARRAY_U4__SZARRAY_U4(const TinyCLR_Interop_MethodData md);
};

extern const TinyCLR_Interop_Assembly Interop_InterTest __attribute__((section("interop_table")));
