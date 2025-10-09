#include "stdafx.h"
#include "FeaturesInitializer.h"

map<string, CppFeature> createAllCppFeatures()
{
	map<string, CppFeature> features;

	// All Headers from https://en.cppreference.com/w/cpp/11.html#Headers

	// headers of C++11
	CppFeature array;
	array.regex = R"(#[ \t]*include[ \t]*<[ \t]*array[ \t]*>)";
	array.version = CppVersion::Cpp11;
	array.type = CppFeatureType::Header;
	features.insert({ "array", array });

	CppFeature atomic;
	atomic.regex = R"(#[ \t]*include[ \t]*<[ \t]*atomic[ \t]*>)";
	atomic.version = CppVersion::Cpp11;
	atomic.type = CppFeatureType::Header;
	features.insert({ "atomic", atomic });

	CppFeature cfenv;
	cfenv.regex = R"(#[ \t]*include[ \t]*<[ \t]*cfenv[ \t]*>)";
	cfenv.version = CppVersion::Cpp11;
	cfenv.type = CppFeatureType::Header;
	features.insert({ "cfenv", cfenv });

	CppFeature chrono;
	chrono.regex = R"(#[ \t]*include[ \t]*<[ \t]*chrono[ \t]*>)";
	chrono.version = CppVersion::Cpp11;
	chrono.type = CppFeatureType::Header;
	features.insert({ "chrono", chrono });

	CppFeature cinttypes;
	cinttypes.regex = R"(#[ \t]*include[ \t]*<[ \t]*cinttypes[ \t]*>)";
	cinttypes.version = CppVersion::Cpp11;
	chrono.type = CppFeatureType::Header;
	features.insert({ "cinttypes", cinttypes });

	CppFeature condition_variable;
	condition_variable.regex = R"(#[ \t]*include[ \t]*<[ \t]*condition_variable[ \t]*>)";
	condition_variable.version = CppVersion::Cpp11;
	condition_variable.type = CppFeatureType::Header;
	features.insert({ "condition_variable", condition_variable});

	CppFeature cstdint;
	cstdint.regex = R"(#[ \t]*include[ \t]*<[ \t]*cstdint[ \t]*>)";
	cstdint.version = CppVersion::Cpp11;
	cstdint.type = CppFeatureType::Header;
	features.insert({ "cstdint", cstdint});

	CppFeature cuchar;
	cuchar.regex = R"(#[ \t]*include[ \t]*<[ \t]*cuchar[ \t]*>)";
	cuchar.version = CppVersion::Cpp11;
	cuchar.type = CppFeatureType::Header;
	features.insert({ "cuchar", cuchar });

	CppFeature forward_list;
	forward_list.regex = R"(#[ \t]*include[ \t]*<[ \t]*forward_list[ \t]*>)";
	forward_list.version = CppVersion::Cpp11;
	forward_list.type = CppFeatureType::Header;
	features.insert({ "forward_list", forward_list });

	CppFeature future;
	future.regex = R"(#[ \t]*include[ \t]*<[ \t]*future[ \t]*>)";
	future.version = CppVersion::Cpp11;
	future.type = CppFeatureType::Header;
	features.insert({ "future", future });

	CppFeature initializer_list;
	initializer_list.regex = R"(#[ \t]*include[ \t]*<[ \t]*initializer_list[ \t]*>)";
	initializer_list.version = CppVersion::Cpp11;
	initializer_list.type = CppFeatureType::Header;
	features.insert({ "initializer_list", initializer_list });

	CppFeature mutex;
	mutex.regex = R"(#[ \t]*include[ \t]*<[ \t]*mutex[ \t]*>)";
	mutex.version = CppVersion::Cpp11;
	mutex.type = CppFeatureType::Header;
	features.insert({ "mutex", mutex });

	CppFeature random;
	random.regex = R"(#[ \t]*include[ \t]*<[ \t]*random[ \t]*>)";
	random.version = CppVersion::Cpp11;
	random.type = CppFeatureType::Header;
	features.insert({ "random", random });

	CppFeature ratio;
	ratio.regex = R"(#[ \t]*include[ \t]*<[ \t]*ratio[ \t]*>)";
	ratio.version = CppVersion::Cpp11;
	ratio.type = CppFeatureType::Header;
	features.insert({ "ratio", ratio });

	CppFeature regex;
	regex.regex = R"(#[ \t]*include[ \t]*<[ \t]*regex[ \t]*>)";
	regex.version = CppVersion::Cpp11;
	regex.type = CppFeatureType::Header;
	features.insert({ "regex", regex });

	CppFeature scoped_allocator;
	scoped_allocator.regex = R"(#[ \t]*include[ \t]*<[ \t]*scoped_allocator[ \t]*>)";
	scoped_allocator.version = CppVersion::Cpp11;
	scoped_allocator.type = CppFeatureType::Header;
	features.insert({ "scoped_allocator", scoped_allocator });

	CppFeature system_error;
	system_error.regex = R"(#[ \t]*include[ \t]*<[ \t]*system_error[ \t]*>)";
	system_error.version = CppVersion::Cpp11;
	system_error.type = CppFeatureType::Header;
	features.insert({ "system_error", system_error });

	CppFeature thread;
	thread.regex = R"(#[ \t]*include[ \t]*<[ \t]*thread[ \t]*>)";
	thread.version = CppVersion::Cpp11;
	thread.type = CppFeatureType::Header;
	features.insert({ "thread", thread });

	CppFeature tuple;
	tuple.regex = R"(#[ \t]*include[ \t]*<[ \t]*tuple[ \t]*>)";
	tuple.version = CppVersion::Cpp11;
	tuple.type = CppFeatureType::Header;
	features.insert({ "tuple", tuple });

	CppFeature typeindex;
	typeindex.regex = R"(#[ \t]*include[ \t]*<[ \t]*typeindex[ \t]*>)";
	typeindex.version = CppVersion::Cpp11;
	typeindex.type = CppFeatureType::Header;
	features.insert({ "typeindex", typeindex });

	CppFeature type_traits;
	type_traits.regex = R"(#[ \t]*include[ \t]*<[ \t]*type_traits[ \t]*>)";
	type_traits.version = CppVersion::Cpp11;
	type_traits.type = CppFeatureType::Header;
	features.insert({ "type_traits", type_traits });

	CppFeature unordered_map;
	unordered_map.regex = R"(#[ \t]*include[ \t]*<[ \t]*unordered_map[ \t]*>)";
	unordered_map.version = CppVersion::Cpp11;
	unordered_map.type = CppFeatureType::Header;
	features.insert({ "unordered_map", unordered_map });

	CppFeature unordered_set;
	unordered_set.regex = R"(#[ \t]*include[ \t]*<[ \t]*unordered_set[ \t]*>)";
	unordered_set.version = CppVersion::Cpp11;
	unordered_set.type = CppFeatureType::Header;
	features.insert({ "unordered_set", unordered_set });





	// features of C++11
	CppFeature feature_auto;
	feature_auto.regex = R"(\bauto\b)";
	feature_auto.version = CppVersion::Cpp11;
	feature_auto.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "auto", feature_auto });

	CppFeature feature_decltype;
	feature_decltype.regex = R"(\bdecltype)";
	feature_decltype.version = CppVersion::Cpp11;
	feature_decltype.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "decltype", feature_decltype });

	CppFeature defaulted_function;
	defaulted_function.regex = R"(\s*=\s*default\s*;)";
	defaulted_function.version = CppVersion::Cpp11;
	defaulted_function.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "default function", defaulted_function });

	CppFeature deleted_function;
	deleted_function.regex = R"(\s*=\s*delete\s*;)";
	deleted_function.version = CppVersion::Cpp11;
	deleted_function.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "delete function", deleted_function });

	CppFeature final_function;
	final_function.regex = R"(\bfinal\b;)";
	final_function.version = CppVersion::Cpp11;
	final_function.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "final function", final_function });

	CppFeature override_function;
	override_function.regex = R"(\boverride\b)";
	override_function.version = CppVersion::Cpp11;
	override_function.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "override function", override_function });

	CppFeature explicit_function;
	explicit_function.regex = R"(\bexplicit\b)";
	explicit_function.version = CppVersion::Cpp11;
	explicit_function.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "explicit function", explicit_function });

	CppFeature trailing_return_type;
	trailing_return_type.regex = R"(auto\s+\w+\s*\([^)]*\)\s*->\s*[^;\s{]+)";
	trailing_return_type.version = CppVersion::Cpp11;
	trailing_return_type.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "trailing return type", trailing_return_type });

	// regex for rvalue references was generated by ChatGPT and is not reliable
	// The problem is that && in C++ also means logical AND and it is not trivial to distinguish between them
	CppFeature rvalue_references;
	rvalue_references.regex = R"((?:^|[;{}()\s])(?:const\s+)?(?:volatile\s+)?(?:typename\s+)?[A-Za-z_]\w*(?:\s*<[^>]+>)?\s*&&\s*[A-Za-z_]\w+)";
	rvalue_references.version = CppVersion::Cpp11;
	rvalue_references.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "rvalue references", rvalue_references });

	CppFeature move;
	move.regex = R"(std::move[ \t]*\()";
	move.version = CppVersion::Cpp11;
	move.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "std::move", move });

	CppFeature scoped_enums;
	scoped_enums.regex = R"(enum\s+(struct|class))";
	scoped_enums.version = CppVersion::Cpp11;
	scoped_enums.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "scoped enums", scoped_enums });

	CppFeature feature_constexpr;
	feature_constexpr.regex = R"(constexpr)";
	feature_constexpr.version = CppVersion::Cpp11;
	feature_constexpr.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "constexpr", feature_constexpr });

	CppFeature feature_initializer_list;
	feature_initializer_list.regex = R"([^<]initializer_list[<\s])";
	feature_initializer_list.version = CppVersion::Cpp11;
	feature_initializer_list.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "initializer_list (feature)", feature_initializer_list });

	CppFeature feature_nullptr;
	feature_nullptr.regex = R"(\bnullptr\b)";
	feature_nullptr.version = CppVersion::Cpp11;
	feature_nullptr.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "nullptr", feature_nullptr });

	CppFeature long_long;
	long_long.regex = R"(\blong\s+long\b)";
	long_long.version = CppVersion::Cpp11;
	long_long.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "long long", long_long });

	CppFeature feature_char16_t;
	feature_char16_t.regex = R"(char16_t|char32_t)";
	feature_char16_t.version = CppVersion::Cpp11;
	feature_char16_t.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "char16_t, char32_t", feature_char16_t });

	CppFeature alias;
	alias.regex = R"(\busing[\w\s]+=)";
	alias.version = CppVersion::Cpp11;
	alias.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "type alias, alias template", alias });

	// TODO Check the regular expression in cintext of type traits and fold expressions
	CppFeature variadic;
	variadic.regex = R"(template.*\.\.\.)";
	variadic.version = CppVersion::Cpp11;
	variadic.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "variadic templates", variadic });

	CppFeature string_literals;
	string_literals.regex = R"((R"[\w(*])|(LR"[\w(*])|(u8"[\w(*])|(u8R"[\w(*])|(u"[\w(*])|(uR"[\w(*])|(U"[\w(*])|(UR"[\w(*]))";
	string_literals.version = CppVersion::Cpp11;
	string_literals.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "string literals", string_literals });

	CppFeature attribute_specifier_sequence;
	attribute_specifier_sequence.regex = R"(\[\s*\[)";
	attribute_specifier_sequence.version = CppVersion::Cpp11;
	attribute_specifier_sequence.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "attribute specifier sequence", attribute_specifier_sequence });

	CppFeature feature_lambda;
	feature_lambda.regex = R"([=,(]\s*\[\s*[\w\s&=,]*\]\s*\([^\)]*\)\s*(mutable\s*)?(->\s*[^ \{]+)?\s*\{)";
 	feature_lambda.version = CppVersion::Cpp11;
	feature_lambda.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "lambda", feature_lambda });

	CppFeature feature_noexcept;
	feature_noexcept.regex = R"(noexcept)";
	feature_noexcept.version = CppVersion::Cpp11;
	feature_noexcept.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "noexcept", feature_noexcept });

	CppFeature feature_align;
	feature_align.regex = R"((alignas\s*\()|(alignof\s*\())";
	feature_align.version = CppVersion::Cpp11;
	feature_align.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "alignas, alignof", feature_align });

	CppFeature range_based_for_loop;
	range_based_for_loop.regex = R"(\bfor\s*\(\s*[\w&]+\s*[\w]+:\s*[\w{},]+\s*\))";
	range_based_for_loop.version = CppVersion::Cpp11;
	range_based_for_loop.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "range-based for loop", range_based_for_loop });

	CppFeature feature_static_assert;
	feature_static_assert.regex = R"(\bstatic_assert)";
	feature_static_assert.version = CppVersion::Cpp11;
	feature_static_assert.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "static_assert", feature_static_assert });

	CppFeature feature_shared_ptr;
	feature_shared_ptr.regex = R"([\s:]+shared_ptr)";
	feature_shared_ptr.version = CppVersion::Cpp11;
	feature_shared_ptr.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "shared_ptr", feature_shared_ptr });

	CppFeature feature_weak_ptr;
	feature_weak_ptr.regex = R"([\s:]weak_ptr)";
	feature_weak_ptr.version = CppVersion::Cpp11;
	feature_weak_ptr.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "weak_ptr", feature_weak_ptr });

	CppFeature feature_unique_ptr;
	feature_unique_ptr.regex = R"([\s:]unique_ptr)";
	feature_unique_ptr.version = CppVersion::Cpp11;
	feature_unique_ptr.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "unique_ptr", feature_unique_ptr });


	// https://www.en.cppreference.com/w/cpp/14.html
	// core language features of C++14
	CppFeature feature_generic_lambda;
	feature_generic_lambda.regex = R"([=,(]\s*\[\s*[\w\s&=,]*\]\s*\(.*auto.*\)\s*(mutable\s*)?(->\s*[^ \{]+)?\s*\{)";
	feature_generic_lambda.version = CppVersion::Cpp14;
	feature_generic_lambda.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "generic lambda", feature_generic_lambda });

	CppFeature feature_digit_separator;
	feature_digit_separator.regex = R"(\d{1}'\d{1})";
	feature_digit_separator.version = CppVersion::Cpp14;
	feature_digit_separator.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "digit separator", feature_digit_separator });

	CppFeature feature_binary_literal;
	feature_binary_literal.regex = R"(0[bB][01]{2})";
	feature_binary_literal.version = CppVersion::Cpp14;
	feature_binary_literal.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "binary literal", feature_binary_literal });

	CppFeature feature_decltype_auto;
	feature_decltype_auto.regex = R"(\bdecltype\s*\(\s*auto\s*\))";
	feature_decltype_auto.version = CppVersion::Cpp14;
	feature_decltype_auto.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "decltype(auto)", feature_decltype_auto });

	CppFeature feature_deprecated_attribite;
	feature_deprecated_attribite.regex = R"(\[\s*\[\s*deprecated.*\]\s*\])";
	feature_deprecated_attribite.version = CppVersion::Cpp14;
	feature_deprecated_attribite.type = CppFeatureType::CoreLanguageFeature;
	features.insert({ "deprecated attribute", feature_deprecated_attribite });	


	// standard library features of C++14
	CppFeature feature_make_unique;
	feature_make_unique.regex = R"(make_unique)";
	feature_make_unique.version = CppVersion::Cpp14;
	feature_make_unique.type = CppFeatureType::StandardLibrary;
	features.insert({ "make_unique", feature_make_unique });

	CppFeature feature_integer_sequence;
	feature_integer_sequence.regex = R"(integer_sequence)";
	feature_integer_sequence.version = CppVersion::Cpp14;
	feature_integer_sequence.type = CppFeatureType::StandardLibrary;
	features.insert({ "integer_sequence", feature_integer_sequence });

	CppFeature feature_exchange;
	feature_exchange.regex = R"(std::exchange)";
	feature_exchange.version = CppVersion::Cpp14;
	feature_exchange.type = CppFeatureType::StandardLibrary;
	features.insert({ "exchange", feature_exchange });

	CppFeature feature_quoted;
	feature_quoted.regex = R"(std::quoted)";
	feature_quoted.version = CppVersion::Cpp14;
	feature_quoted.type = CppFeatureType::StandardLibrary;
	features.insert({ "quoted", feature_quoted });

	// headers of C++14
	CppFeature shared_mutex;
	shared_mutex.regex = R"(#[ \t]*include[ \t]*<[ \t]*shared_mutex[ \t]*>)";
	shared_mutex.version = CppVersion::Cpp14;
	shared_mutex.type = CppFeatureType::Header;
	features.insert({ "shared_mutex", shared_mutex });

	return features;
}