// Use the default constructor.
std::unique_ptr<Vec3> v1 = std::make_unique<Vec3>();
// Use the constructor that matches these arguments.
std::unique_ptr<Vec3> v2 = std::make_unique<Vec3>(0, 1, 2);
// Create a unique_ptr to an array of 5 elements.
std::unique_ptr<Vec3[]> v3 = std::make_unique<Vec3[]>(5);

// Create a unique_ptr to an uninitialized array of 10 integers,
// then populate it with Fibonacci numbers.
std::unique_ptr<int[]> i1 = std::make_unique_for_overwrite<int[]>(10);

#include <shared_mutex>
# include < shared_mutex >

print_sequence(1, std::integer_sequence<unsigned, 9, 2, 5, 1, 9, 1, 6>{});
print_sequence(2, std::make_integer_sequence<int, 12>{});
print_sequence(3, std::make_index_sequence<10>{});
print_sequence(4, std::index_sequence_for<std::ios, float, signed>{});

constexpr std::array<int, 4> array{1, 2, 3, 4};

auto tuple1 = array_to_tuple(array);
static_assert(std::is_same_v<decltype(tuple1),
                             std::tuple<int, int, int, int>>, "");
std::cout << "5) tuple1: " << tuple1 << '\n';

constexpr auto tuple2 = array_to_tuple<int, 4,

std::integer_sequence<std::size_t, 1, 0, 3, 2>>(array);
std::cout << "6) tuple2: " << tuple2 << '\n';

std::exchange(v, {1, 2, 3, 4});

std::copy(begin(v), end(v), std::ostream_iterator<int>(std::cout, ", "));

std::cout << "\n\n";

void (*fun)();

// The default value of template parameter also makes possible to use a
// normal function as second argument. The expression below is equivalent to
// std::exchange(fun, static_cast<void(*)()>(f))
std::exchange(fun, f);
fun();

std::cout << "\n\nFibonacci sequence: ";
for (int a{0}, b{1}; a < 100; a = std::exchange(b, a + b))
std::cout << a << ", ";
std::cout << "...\n";



const char delim{'$'};
const char escape{'%'};

const std::string in = "std::quoted() quotes this string and embedded $quotes$ $too";
std::stringstream ss;
ss << std::quoted(in, delim, escape);
std::string out;
ss >> std::quoted(out, delim, escape);

std::cout << "Custom delimiter case:\n"
             "read in     [" << in << "]\n"
             "stored as   [" << ss.str() << "]\n"
             "written out [" << out << "]\n\n";