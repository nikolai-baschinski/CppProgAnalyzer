#pragma once

#include <regex>

using namespace std;

enum CppFeatureType {
	Header,
	CoreLanguageFeature
};

enum CppVersion {
	Cpp98,
	Cpp11,
	Cpp14,
	Cpp17,
	Cpp20,
	Cpp23,
	Cpp26,
	Init
};

struct CppFeature
{
	regex regex; // the regular expression to find this C++ feature
	unsigned int cntr = 0; // counter of all occurences of this feature over all files
	CppFeatureType type; // header, core language feature
	CppVersion version;  // version of the C++ standard
};

