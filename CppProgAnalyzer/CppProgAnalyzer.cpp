// CppProgAnalyzer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
#include <regex>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>

#include "CppFeature.h"
#include "FeaturesInitializer.h"

using namespace std;

vector<wstring> findFilesInDirectory(wstring path)
{
	vector<wstring> files;
	WIN32_FIND_DATAW ffd;
	HANDLE hFind = INVALID_HANDLE_VALUE;

	// Start iterating over the files in the path directory.
	hFind = ::FindFirstFileW(path.c_str(), &ffd);
	if (hFind != INVALID_HANDLE_VALUE) {
		do
		{
			if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				if (wcscmp(ffd.cFileName, L".") != 0 && wcscmp(ffd.cFileName, L"..") != 0) {

					wstring tempStr = path.substr(0, path.length() - 1) + ffd.cFileName + L"\\" + L"*";

					vector<wstring> tempFiles = findFilesInDirectory(tempStr);
					for (size_t j = 0; j < tempFiles.size(); j++) {
						files.push_back(tempFiles.at(j));
					}
				}
			} else {
				wstring tempStr = path.substr(0, path.length() - 1) + ffd.cFileName;
				files.push_back(tempStr);
				// wcout << L"File found: " << tempStr << endl;
			}
		} while (::FindNextFileW(hFind, &ffd) == TRUE);
		::FindClose(hFind);
	} else {
		wcerr << L"Failed to find path: " << path << endl;
		exit(3);
	}

	return files;
}


void analisefileContent(string fileContent, map<string, CppFeature>& features)
{
	static bool comment_opened = false;
	static string currentClassName;

	regex commentPattern(R"(\/\/.*|\/\*[\s\S]*?\*\/)");

	// remove all comments
	fileContent = regex_replace(fileContent, commentPattern, "");

	auto end = sregex_iterator();

	// headers C++11
	CppFeature* header = &features["array"];
	auto begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["atomic"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["cfenv"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["chrono"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["cinttypes"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["condition_variable"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["cstdint"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["cuchar"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["forward_list"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["future"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["initializer_list"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["mutex"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["random"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["ratio"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["regex"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["scoped_allocator"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["system_error"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["thread"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["tuple"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["typeindex"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["type_traits"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["unordered_map"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	header = &features["unordered_set"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), header->regex);
	for (sregex_iterator it = begin; it != end; ++it) header->cntr++;

	
	// features C++11
	CppFeature* feature = &features["auto"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["decltype"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["default function"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["delete function"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["final function"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["override function"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["explicit function"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["trailing return type"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	// How to distinguish between Rvalue reference and logical AND
	feature = &features["rvalue references"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["std::move"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["scoped enums"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["constexpr"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;
	
	feature = &features["initializer_list (feature)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["nullptr"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["long long"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["char16_t, char32_t"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["type alias, alias template"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["variadic templates"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["string literals"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["attribute specifier sequences (noreturn, carries_dependency)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["lambda"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["noexcept"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["alignas, alignof"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["range-based for loop"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["static_assert"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["shared_ptr"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["weak_ptr"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["unique_ptr"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;


	// C++14
	feature = &features["generic lambda"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["digit separator"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;
	
	feature = &features["binary literal"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["decltype(auto)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["attribute specifier sequence (deprecated)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["make_unique"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;
	
	feature = &features["integer_sequence"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["exchange"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["quoted"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["shared_mutex"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	// C++17
	feature = &features["any"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;
	
	feature = &features["charconv"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["execution"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["filesystem"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["memory_resource"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["optional"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["string_view"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["variant"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["structured bindings"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["if switch initializers"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["inline variable"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["constexpr lambda"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["attribute specifier sequences (fallthrough, maybe_unused, nodiscard)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["char8_t"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["variadic using"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["byte"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["for_each_n"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["reduce"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["gcd_lcm"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["*_scan (numeric)"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["scoped_lock"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

	feature = &features["std::size, std::empty, std::data"];
	begin = sregex_iterator(fileContent.begin(), fileContent.end(), feature->regex);
	for (sregex_iterator it = begin; it != end; ++it) feature->cntr++;

}

int wmain(int argc, wchar_t* argv[])
{
	int modeMemory = _setmode(_fileno(stdout), _O_U16TEXT);
	wstring pathToAnalize;

	// if there is no parameter, analyse the current directory recursively
	const DWORD BUFFER_SIZE = 256;
	WCHAR lpBuffer[BUFFER_SIZE];
	if (argc == 1) {
		DWORD rv = GetCurrentDirectoryW(BUFFER_SIZE, lpBuffer);
		if (rv == 0) {
			wcout << "Error occured. Error code: " << GetLastError() << endl;
			exit(1);
		} else if (rv > BUFFER_SIZE) {
			wcout << "Error occured. Current working directory longer than " << BUFFER_SIZE << " bytes." << endl;
			exit(2);
		} else {
			pathToAnalize = lpBuffer;
			pathToAnalize.append(L"\\*");
			wcout << "Project path to analyze: " << pathToAnalize << endl;
		}
	}
	if (argc >= 2) {
		pathToAnalize = argv[1];
		// case 1: path*
		if (pathToAnalize[pathToAnalize.size() - 1] == '*' && pathToAnalize[pathToAnalize.size() - 2] != '\\') {
			pathToAnalize.insert(pathToAnalize.size() - 1, L"\\");
		}
		// case 2: path\ 
		if (pathToAnalize[pathToAnalize.size() - 1] == '\\') {
			pathToAnalize.append(L"*");
		}
		// case 3: path
		if (pathToAnalize[pathToAnalize.size() - 1] != '*' && pathToAnalize[pathToAnalize.size() - 2] != '\\') {
			pathToAnalize.append(L"\\*");
		}
		wcout << "Project path to analyze: " << pathToAnalize << endl;
	}

	map<string, CppFeature> features = createAllCppFeatures();

	vector<wstring> filesSource;
	vector<wstring> filesAll = findFilesInDirectory(pathToAnalize);
	
	for (size_t i = 0; i < filesAll.size(); i++) {
		transform(filesAll.at(i).begin(), filesAll.at(i).end(), filesAll.at(i).begin(), ::tolower);
		wstring tempStr = filesAll.at(i);
		size_t length = tempStr.size();
		
		size_t found = tempStr.find(L".cpp");
		if (found != string::npos && found+4 == length) {
			filesSource.push_back(tempStr);
			 // wcout << filesAll.at(i) << endl;
		}

		found = tempStr.find(L".c");
		if (found != string::npos && found+2 == length) {
			filesSource.push_back(tempStr);
			// wcout << filesAll.at(i) << endl;
		}
		
		found = tempStr.find(L".h");
		if (found != string::npos && found+2 == length) {
			filesSource.push_back(tempStr);
			// wcout << filesAll.at(i) << endl;
		}
	}

	wcout << L"The folder contains " << filesAll.size() << L" files" << endl;
	wcout << L"The folder contains " << filesSource.size() << L" c/cpp/h files" << endl;

	for (size_t i = 0; i < filesSource.size(); i++) {
		string fileContent; // TODO
		ifstream myfile (filesSource.at(i));
		
		if (myfile.is_open()) {

			wcout << L"Analysing file number " << i+1 << "\r";

			ostringstream buffer;
			buffer << myfile.rdbuf();
			analisefileContent(buffer.str(), features);
			
			myfile.close();

		} else {
			wcout << L"Unable to open file" << filesSource.at(i) << endl; 
		}
	}

	(void)_setmode(_fileno(stdout), modeMemory);

	cout << endl << "C++11 headers:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp11 && pair.second.type == CppFeatureType::Header) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}
	cout << endl << "C++11 core langauge features:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp11 && pair.second.type == CppFeatureType::CoreLanguageFeature) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}

	cout << endl << "C++14 headers:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp14 && pair.second.type == CppFeatureType::Header) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}
	cout << endl << "C++14 core langauge features:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp14 && pair.second.type == CppFeatureType::CoreLanguageFeature) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}
	cout << endl << "C++14 standard library features:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp14 && pair.second.type == CppFeatureType::StandardLibrary) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}

	cout << endl << "C++17 headers:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp17 && pair.second.type == CppFeatureType::Header) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}
	cout << endl << "C++17 core langauge features:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp17 && pair.second.type == CppFeatureType::CoreLanguageFeature) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}
	cout << endl << "C++17 standard library features:" << endl;
	for (const auto& pair : features) {
		if (pair.second.version == CppVersion::Cpp17 && pair.second.type == CppFeatureType::StandardLibrary) {
			cout << pair.first << ": " << pair.second.cntr << endl;
		}
	}


	return 0;
}

