#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "version of g++: "
        << __GNUC__ << "."
        << __GNUC_MINOR__ << "."
        << __GNUC_PATCHLEVEL__ << std::endl;

    if (__GNUC__ != 8 ||
        __GNUC_MINOR__ != 3 ||
        __GNUC_PATCHLEVEL__ != 0) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
