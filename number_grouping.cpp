// number_grouping.hpp --- number grouping
// This file is public domain software (PDS).
#include <iostream>
#include "number_grouping.hpp"

int main(void) {
    std::cout << ng::number_grouping_string(0) << std::endl;
    std::cout << ng::number_grouping_string(1) << std::endl;
    std::cout << ng::number_grouping_string(12) << std::endl;
    std::cout << ng::number_grouping_string(123) << std::endl;
    std::cout << ng::number_grouping_string(1234) << std::endl;
    std::cout << ng::number_grouping_string(12345) << std::endl;
    std::cout << ng::number_grouping_string(123456) << std::endl;
    std::cout << ng::number_grouping_string(1234567) << std::endl;
    std::cout << ng::number_grouping_string(12345678) << std::endl;
    std::cout << ng::number_grouping_string(123456789) << std::endl;
    std::cout << ng::number_grouping_string(1234567890) << std::endl;
    std::cout << ng::number_grouping_string(12345678901) << std::endl;
    std::cout << ng::number_grouping_string(123456789012) << std::endl;
    std::cout << ng::number_grouping_string(1234567890123) << std::endl;
    std::cout << ng::number_grouping_string(12345678901234) << std::endl;
    std::cout << ng::number_grouping_string(123456789012345) << std::endl;
    std::cout << ng::number_grouping_string(1234567890123456) << std::endl;
    std::cout << ng::number_grouping_string(12345678901234567ULL) << std::endl;
    std::cout << ng::number_grouping_string(123456789012345678ULL) << std::endl;
    std::cout << ng::number_grouping_string(1234567890123456789ULL) << std::endl;
    std::cout << ng::number_grouping_string(12345678901234567890ULL) << std::endl;
    std::cout << ng::number_grouping_string(-1) << std::endl;
    std::cout << ng::number_grouping_string(-12) << std::endl;
    std::cout << ng::number_grouping_string(-123) << std::endl;
    std::cout << ng::number_grouping_string(-1234) << std::endl;
    std::cout << ng::number_grouping_string(-12345) << std::endl;
    std::cout << ng::number_grouping_string(-123456) << std::endl;
    std::cout << ng::number_grouping_string(-1234567) << std::endl;

    std::cout << ng::number_grouping<std::string>(0) << std::endl;
    std::cout << ng::number_grouping<std::string>(1) << std::endl;
    std::cout << ng::number_grouping<std::string>(12) << std::endl;
    std::cout << ng::number_grouping<std::string>(123) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345) << std::endl;
    std::cout << ng::number_grouping<std::string>(123456) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234567) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345678) << std::endl;
    std::cout << ng::number_grouping<std::string>(123456789) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234567890) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345678901) << std::endl;
    std::cout << ng::number_grouping<std::string>(123456789012) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234567890123) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345678901234) << std::endl;
    std::cout << ng::number_grouping<std::string>(123456789012345) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234567890123456) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345678901234567ULL) << std::endl;
    std::cout << ng::number_grouping<std::string>(123456789012345678ULL) << std::endl;
    std::cout << ng::number_grouping<std::string>(1234567890123456789ULL) << std::endl;
    std::cout << ng::number_grouping<std::string>(12345678901234567890ULL) << std::endl;
    std::cout << ng::number_grouping<std::string>(-1) << std::endl;
    std::cout << ng::number_grouping<std::string>(-12) << std::endl;
    std::cout << ng::number_grouping<std::string>(-123) << std::endl;
    std::cout << ng::number_grouping<std::string>(-1234) << std::endl;
    std::cout << ng::number_grouping<std::string>(-12345) << std::endl;
    std::cout << ng::number_grouping<std::string>(-123456) << std::endl;
    std::cout << ng::number_grouping<std::string>(-1234567) << std::endl;

    std::wcout << ng::number_grouping<std::wstring>(0) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123456) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234567) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345678) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123456789) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234567890) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345678901) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123456789012) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234567890123) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345678901234) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123456789012345) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234567890123456) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345678901234567ULL) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(123456789012345678ULL) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(1234567890123456789ULL) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(12345678901234567890ULL) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-1) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-12) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-123) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-1234) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-12345) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-123456) << std::endl;
    std::wcout << ng::number_grouping<std::wstring>(-1234567) << std::endl;
}