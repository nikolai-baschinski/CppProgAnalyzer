[[gnualways_inline]] [	[gnuhot]] [[gnuconst]] [[nodiscard]]
inline int f();  declare f with four attributes
 
[[gnualways_inline, gnuconst, gnuhot, nodiscard]]
int f();  same as above, but uses a single attr specifier that contains four attributes
 
 C++17
[[using gnu  const, always_inline, hot]] [[nodiscard]]
int f[ [gnualways_inline]]();  an attribute may appear in multiple specifiers
 
int f() { return 0; }
 
int main() {}