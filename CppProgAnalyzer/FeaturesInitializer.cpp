#include "stdafx.h"
#include "FeaturesInitializer.h"

map<string, CppFeature> createAllCppFeatures()
{
	map<string, CppFeature> features;

	// All Headers from https://en.cppreference.com/w/cpp/11.html#Headers

	// headers of C++11
	CppFeature array;
	array.regex = R"(#[ \t]*include[ \t]*<[ \t]*array[ \t]*>)";
	array.version = Cpp11;
	array.type = Header;
	features.insert({ "array", array });

	CppFeature atomic;
	atomic.regex = R"(#[ \t]*include[ \t]*<[ \t]*atomic[ \t]*>)";
	atomic.version = Cpp11;
	atomic.type = Header;
	features.insert({ "atomic", atomic });

	CppFeature cfenv;
	cfenv.regex = R"(#[ \t]*include[ \t]*<[ \t]*cfenv[ \t]*>)";
	cfenv.version = Cpp11;
	cfenv.type = Header;
	features.insert({ "cfenv", cfenv });

	CppFeature chrono;
	chrono.regex = R"(#[ \t]*include[ \t]*<[ \t]*chrono[ \t]*>)";
	chrono.version = Cpp11;
	chrono.type = Header;
	features.insert({ "chrono", chrono });

	CppFeature cinttypes;
	cinttypes.regex = R"(#[ \t]*include[ \t]*<[ \t]*cinttypes[ \t]*>)";
	cinttypes.version = Cpp11;
	chrono.type = Header;
	features.insert({ "cinttypes", cinttypes });

	CppFeature condition_variable;
	condition_variable.regex = R"(#[ \t]*include[ \t]*<[ \t]*condition_variable[ \t]*>)";
	condition_variable.version = Cpp11;
	condition_variable.type = Header;
	features.insert({ "condition_variable", condition_variable});

	CppFeature cstdint;
	cstdint.regex = R"(#[ \t]*include[ \t]*<[ \t]*cstdint[ \t]*>)";
	cstdint.version = Cpp11;
	cstdint.type = Header;
	features.insert({ "cstdint", cstdint});

	CppFeature cuchar;
	cuchar.regex = R"(#[ \t]*include[ \t]*<[ \t]*cuchar[ \t]*>)";
	cuchar.version = Cpp11;
	cuchar.type = Header;
	features.insert({ "cuchar", cuchar });

	CppFeature forward_list;
	forward_list.regex = R"(#[ \t]*include[ \t]*<[ \t]*forward_list[ \t]*>)";
	forward_list.version = Cpp11;
	forward_list.type = Header;
	features.insert({ "forward_list", forward_list });

	CppFeature future;
	future.regex = R"(#[ \t]*include[ \t]*<[ \t]*future[ \t]*>)";
	future.version = Cpp11;
	future.type = Header;
	features.insert({ "future", future });

	CppFeature initializer_list;
	initializer_list.regex = R"(#[ \t]*include[ \t]*<[ \t]*initializer_list[ \t]*>)";
	initializer_list.version = Cpp11;
	initializer_list.type = Header;
	features.insert({ "initializer_list", initializer_list });

	CppFeature mutex;
	mutex.regex = R"(#[ \t]*include[ \t]*<[ \t]*mutex[ \t]*>)";
	mutex.version = Cpp11;
	mutex.type = Header;
	features.insert({ "mutex", mutex });

	CppFeature random;
	random.regex = R"(#[ \t]*include[ \t]*<[ \t]*random[ \t]*>)";
	random.version = Cpp11;
	random.type = Header;
	features.insert({ "random", random });

	CppFeature ratio;
	ratio.regex = R"(#[ \t]*include[ \t]*<[ \t]*ratio[ \t]*>)";
	ratio.version = Cpp11;
	ratio.type = Header;
	features.insert({ "ratio", ratio });

	CppFeature regex;
	regex.regex = R"(#[ \t]*include[ \t]*<[ \t]*regex[ \t]*>)";
	regex.version = Cpp11;
	regex.type = Header;
	features.insert({ "regex", regex });

	CppFeature scoped_allocator;
	scoped_allocator.regex = R"(#[ \t]*include[ \t]*<[ \t]*scoped_allocator[ \t]*>)";
	scoped_allocator.version = Cpp11;
	scoped_allocator.type = Header;
	features.insert({ "scoped_allocator", scoped_allocator });

	CppFeature system_error;
	system_error.regex = R"(#[ \t]*include[ \t]*<[ \t]*system_error[ \t]*>)";
	system_error.version = Cpp11;
	system_error.type = Header;
	features.insert({ "system_error", system_error });

	CppFeature thread;
	thread.regex = R"(#[ \t]*include[ \t]*<[ \t]*thread[ \t]*>)";
	thread.version = Cpp11;
	thread.type = Header;
	features.insert({ "thread", thread });

	CppFeature tuple;
	tuple.regex = R"(#[ \t]*include[ \t]*<[ \t]*tuple[ \t]*>)";
	tuple.version = Cpp11;
	tuple.type = Header;
	features.insert({ "tuple", tuple });

	CppFeature typeindex;
	typeindex.regex = R"(#[ \t]*include[ \t]*<[ \t]*typeindex[ \t]*>)";
	typeindex.version = Cpp11;
	typeindex.type = Header;
	features.insert({ "typeindex", typeindex });

	CppFeature type_traits;
	type_traits.regex = R"(#[ \t]*include[ \t]*<[ \t]*type_traits[ \t]*>)";
	type_traits.version = Cpp11;
	type_traits.type = Header;
	features.insert({ "type_traits", type_traits });

	CppFeature unordered_map;
	unordered_map.regex = R"(#[ \t]*include[ \t]*<[ \t]*unordered_map[ \t]*>)";
	unordered_map.version = Cpp11;
	unordered_map.type = Header;
	features.insert({ "unordered_map", unordered_map });

	CppFeature unordered_set;
	unordered_set.regex = R"(#[ \t]*include[ \t]*<[ \t]*unordered_set[ \t]*>)";
	unordered_set.version = Cpp11;
	unordered_set.type = Header;
	features.insert({ "unordered_set", unordered_set });





	// features of C++11
	CppFeature feature_auto;
	feature_auto.regex = R"(\bauto\b)";
	feature_auto.version = Cpp11;
	feature_auto.type = CoreLanguageFeature;
	features.insert({ "auto", feature_auto });

	CppFeature feature_decltype;
	feature_decltype.regex = R"(\bdecltype)";
	feature_decltype.version = Cpp11;
	feature_decltype.type = CoreLanguageFeature;
	features.insert({ "decltype", feature_decltype });

	CppFeature defaulted_function;
	defaulted_function.regex = R"(\s*=\s*default\s*;)";
	defaulted_function.version = Cpp11;
	defaulted_function.type = CoreLanguageFeature;
	features.insert({ "default function", defaulted_function });

	CppFeature deleted_function;
	deleted_function.regex = R"(\s*=\s*delete\s*;)";
	deleted_function.version = Cpp11;
	deleted_function.type = CoreLanguageFeature;
	features.insert({ "delete function", deleted_function });

	CppFeature final_function;
	final_function.regex = R"(\bfinal\b;)";
	final_function.version = Cpp11;
	final_function.type = CoreLanguageFeature;
	features.insert({ "final function", final_function });

	CppFeature override_function;
	override_function.regex = R"(\boverride\b)";
	override_function.version = Cpp11;
	override_function.type = CoreLanguageFeature;
	features.insert({ "override function", override_function });

	CppFeature explicit_function;
	explicit_function.regex = R"(\bexplicit\b)";
	explicit_function.version = Cpp11;
	explicit_function.type = CoreLanguageFeature;
	features.insert({ "explicit function", explicit_function });

	CppFeature trailing_return_type;
	trailing_return_type.regex = R"(auto\s+\w+\s*\([^)]*\)\s*->\s*[^;\s{]+)";
	trailing_return_type.version = Cpp11;
	trailing_return_type.type = CoreLanguageFeature;
	features.insert({ "trailing return type", trailing_return_type });

	// regex for rvalue references was generated by ChatGPT and is not reliable
	// The problem is that && in C++ also means logical AND and it is not trivial to distinguish between them
	CppFeature rvalue_references;
	rvalue_references.regex = R"((?:^|[;{}()\s])(?:const\s+)?(?:volatile\s+)?(?:typename\s+)?[A-Za-z_]\w*(?:\s*<[^>]+>)?\s*&&\s*[A-Za-z_]\w+)";
	rvalue_references.version = Cpp11;
	rvalue_references.type = CoreLanguageFeature;
	features.insert({ "rvalue references", rvalue_references });

	CppFeature move;
	move.regex = R"(std::move[ \t]*\()";
	move.version = Cpp11;
	move.type = CoreLanguageFeature;
	features.insert({ "std::move", move });

	CppFeature scoped_enums;
	scoped_enums.regex = R"(enum\s+(struct|class))";
	scoped_enums.version = Cpp11;
	scoped_enums.type = CoreLanguageFeature;
	features.insert({ "scoped enums", scoped_enums });

	CppFeature feature_constexpr;
	feature_constexpr.regex = R"(constexpr)";
	feature_constexpr.version = Cpp11;
	feature_constexpr.type = CoreLanguageFeature;
	features.insert({ "constexpr", feature_constexpr });

	CppFeature feature_initializer_list;
	feature_initializer_list.regex = R"([^<]initializer_list[<\s])";
	feature_initializer_list.version = Cpp11;
	feature_initializer_list.type = CoreLanguageFeature;
	features.insert({ "initializer_list (feature)", feature_initializer_list });

	CppFeature feature_nullptr;
	feature_nullptr.regex = R"(\bnullptr\b)";
	feature_nullptr.version = Cpp11;
	feature_nullptr.type = CoreLanguageFeature;
	features.insert({ "nullptr", feature_nullptr });

	CppFeature long_long;
	long_long.regex = R"(\blong\s+long\b)";
	long_long.version = Cpp11;
	long_long.type = CoreLanguageFeature;
	features.insert({ "long long", long_long });

	CppFeature feature_char16_t;
	feature_char16_t.regex = R"(char16_t|char32_t)";
	feature_char16_t.version = Cpp11;
	feature_char16_t.type = CoreLanguageFeature;
	features.insert({ "char16_t, char32_t", feature_char16_t });

	CppFeature alias;
	alias.regex = R"(\busing[\w\s]+=)";
	alias.version = Cpp11;
	alias.type = CoreLanguageFeature;
	features.insert({ "type alias, alias template", alias });

	// TODO Check the regular expression in cintext of type traits and fold expressions
	CppFeature variadic;
	variadic.regex = R"(template.*\.\.\.)";
	variadic.version = Cpp11;
	variadic.type = CoreLanguageFeature;
	features.insert({ "variadic templates", variadic });

	CppFeature string_literals;
	string_literals.regex = R"((R"[\w(*])|(LR"[\w(*])|(u8"[\w(*])|(u8R"[\w(*])|(u"[\w(*])|(uR"[\w(*])|(U"[\w(*])|(UR"[\w(*]))";
	string_literals.version = Cpp11;
	string_literals.type = CoreLanguageFeature;
	features.insert({ "string literals", string_literals });

	CppFeature attribute_specifier_sequence;
	attribute_specifier_sequence.regex = R"(\[\s*\[)";
	attribute_specifier_sequence.version = Cpp11;
	attribute_specifier_sequence.type = CoreLanguageFeature;
	features.insert({ "attribute specifier sequence", attribute_specifier_sequence });

	CppFeature feature_lambda;
	feature_lambda.regex = R"([=,(]\s*\[\s*[\w\s&=,]*\]\s*\([^\)]*\)\s*(mutable\s*)?(->\s*[^ \{]+)?\s*\{)";
 	feature_lambda.version = Cpp11;
	feature_lambda.type = CoreLanguageFeature;
	features.insert({ "lambda", feature_lambda });

	CppFeature feature_noexcept;
	feature_noexcept.regex = R"(noexcept)";
	feature_noexcept.version = Cpp11;
	feature_noexcept.type = CoreLanguageFeature;
	features.insert({ "noexcept", feature_noexcept });

	CppFeature feature_align;
	feature_align.regex = R"((alignas\s*\()|(alignof\s*\())";
	feature_align.version = Cpp11;
	feature_align.type = CoreLanguageFeature;
	features.insert({ "alignas, alignof", feature_align });

	CppFeature range_based_for_loop;
	range_based_for_loop.regex = R"(\bfor\s*\(\s*[\w&]+\s*[\w]+:\s*[\w{},]+\s*\))";
	range_based_for_loop.version = Cpp11;
	range_based_for_loop.type = CoreLanguageFeature;
	features.insert({ "range-based for loop", range_based_for_loop });

	CppFeature feature_static_assert;
	feature_static_assert.regex = R"(\bstatic_assert)";
	feature_static_assert.version = Cpp11;
	feature_static_assert.type = CoreLanguageFeature;
	features.insert({ "static_assert", feature_static_assert });

	CppFeature feature_shared_ptr;
	feature_shared_ptr.regex = R"([\s:]+shared_ptr)";
	feature_shared_ptr.version = Cpp11;
	feature_shared_ptr.type = CoreLanguageFeature;
	features.insert({ "shared_ptr", feature_shared_ptr });

	CppFeature feature_weak_ptr;
	feature_weak_ptr.regex = R"([\s:]weak_ptr)";
	feature_weak_ptr.version = Cpp11;
	feature_weak_ptr.type = CoreLanguageFeature;
	features.insert({ "weak_ptr", feature_weak_ptr });

	CppFeature feature_unique_ptr;
	feature_unique_ptr.regex = R"([\s:]unique_ptr)";
	feature_unique_ptr.version = Cpp11;
	feature_unique_ptr.type = CoreLanguageFeature;
	features.insert({ "unique_ptr", feature_unique_ptr });

	return features;
}