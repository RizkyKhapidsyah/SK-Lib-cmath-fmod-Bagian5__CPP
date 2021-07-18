#pragma warning(disable:4996)
#pragma fenv_access(on)

#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    std::cout << "fmod(+5.1, +3.0) = " << std::fmod(5.1, 3) << '\n'
        << "fmod(-5.1, +3.0) = " << std::fmod(-5.1, 3) << '\n'
        << "fmod(+5.1, -3.0) = " << std::fmod(5.1, -3) << '\n'
        << "fmod(-5.1, -3.0) = " << std::fmod(-5.1, -3) << '\n';

    // special values
    std::cout << "fmod(+0.0, 1.0) = " << std::fmod(0, 1) << '\n'
        << "fmod(-0.0, 1.0) = " << std::fmod(-0.0, 1) << '\n'
        << "fmod(5.1, Inf) = " << std::fmod(5.1, INFINITY) << '\n';

    // error handling
    std::feclearexcept(FE_ALL_EXCEPT);
    std::cout << "fmod(+5.1, 0) = " << std::fmod(5.1, 0) << '\n';

    if (std::fetestexcept(FE_INVALID)) {
        std::cout << "    FE_INVALID raised\n";
    }

    _getch();
    return 0;
}