#include <immintrin.h>   // Für AVX
#include <iostream>
#include <cstdint>

// Struktur mit 32-Byte Alignment
struct alignas(32) AlignedData {
    float values[8];  // 8 * 4 Bytes = 32 Bytes
};

int main() {
    AlignedData data;

    // Fülle mit Testwerten
    for (int i = 0; i < 8; ++i)
        data.values[i] = static_cast<float>(i);

    // Lade aligned in AVX-Register
    __m256 avxData = _mm256_load_ps(data.values);  // benötigt 32-Byte Alignment

    // Ein paar Operationen (z. B. Addition mit sich selbst)
    __m256 result = _mm256_add_ps(avxData, avxData);

    // Ergebnis ausgeben
    float output[8];
    _mm256_storeu_ps(output, result);

    for (int i = 0; i < 8; ++i)
        std::cout << output[i] << " ";
    std::cout << "\n";
	
	constexpr int n = alignof(int);

    return 0;
}
