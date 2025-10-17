https://en.cppreference.com/w/cpp/language/attributes.html

Standard attributes

The following attributes are defined by the C++ standard.
Standard attributes cannot be syntactically ignored: they cannot contain syntax errors, must be applied to the correct target, and entities in the arguments must be ODR-use.
Standard attributes cannot be semantically ignored either: the behavior with all instances of a particular standard attribute removed would have been a conforming behavior for the original program with the attribute present.

[[noreturn]]
(C++11)
	indicates that the function does not return

[[carries_dependency]]
(C++11)(removed in C++26)
	indicates that dependency chain in release-consume std::memory_order propagates in and out of the function

[[deprecated]][[deprecated("reason")]]
(C++14)(C++14)
	indicates that the use of the name or entity declared with this attribute is allowed, but discouraged for some reason

[[fallthrough]]
(C++17)
	indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fall-through

[[maybe_unused]]
(C++17)
	suppresses compiler warnings on unused entities, if any

[[nodiscard]][[nodiscard("reason")]]
(C++17)(C++20)
	encourages the compiler to issue a warning if the return value is discarded

[[likely]][[unlikely]]
(C++20)(C++20)
	indicates that the compiler should optimize for the case where a path of execution through a statement is more or less likely than any other path of execution

[[no_unique_address]]
(C++20)
	indicates that a non-static data member need not have an address distinct from all other non-static data members of its class

[[assume(expression)]]
(C++23)
	specifies that the expression will always evaluate to true at a given point

[[indeterminate]]
(C++26)
	specifies that an object has an indeterminate value if it is not initialized

[[optimize_for_synchronized]]
(TM TS)
	indicates that the function definition should be optimized for invocation from a synchronized statement


[[nodiscard, maybe_unused , fallthrough]]