#pragma once

#include <string>

using namespace System;

ref class StringHelper
{
public:
	static const char *ToNative(System::String ^string)
	{

		//String ^myString = "Hello";
		array<Byte> ^chars = System::Text::Encoding::ASCII->GetBytes(string);
		pin_ptr<Byte> charsPointer = &(chars[0]);
		char *nativeCharsPointer = reinterpret_cast<char *>(static_cast<unsigned char *>(charsPointer));
		std::string native(nativeCharsPointer, chars->Length);

		

		return nativeCharsPointer;
	}


};