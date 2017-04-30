// number_grouping.hpp --- number grouping
// This file is public domain software (PDS).
#ifndef NUMBER_GROUPING_HPP_
#define NUMBER_GROUPING_HPP_

#include <string>
#include <cstdio>

namespace ng
{
    template <typename T_STRING, typename T_VALUE, char t_comma = ',',
              int t_group_size = 3>
    T_STRING number_grouping(const T_VALUE& value);

    template <typename T_VALUE, typename T_STRING = std::string,
              char t_comma = ',', int t_group_size = 3>
    inline T_STRING number_grouping_string(const T_VALUE& value) {
        return number_grouping<T_STRING, T_VALUE, t_comma, t_group_size>(value);
    }

    namespace detail
    {
#if (__cplusplus >= 201103L)
        template <typename T_STRING>
        inline T_STRING _to_string(int value) {
            return std::to_string(value);
        }
        template <>
        inline std::wstring _to_string(int value) {
            return std::to_wstring(value);
        }
#else   // not C++11
        template <typename T_STRING>
        inline T_STRING _to_string(int value) {
            using namespace std;
            char buf[128];
            sprintf(buf, "%d", value);
            return buf;
        }
        template <>
        inline std::wstring _to_string(int value) {
            using namespace std;
            wchar_t buf[128];
            swprintf(buf, L"%d", value);
            return buf;
        }
#endif  // not C++11

        template <typename T_STRING, int t_group_size>
        inline T_STRING _group(int value) {
            typedef typename T_STRING::value_type T_CHAR;
            T_STRING str = _to_string<T_STRING>(value);
            return T_STRING(t_group_size - str.size(), T_CHAR('0')) + str;
        }

        template <typename T_VALUE, typename T_STRING, char t_comma, int t_group_size>
        inline T_STRING grouping_helper(const T_VALUE& value) {
            typedef typename T_STRING::value_type T_CHAR;
            int n = int(value % 1000);
            T_VALUE m = value / 1000;
            if (m == 0)
                return _to_string<T_STRING>(n);
            return grouping_helper<T_VALUE, T_STRING, t_comma, t_group_size>(m) +
                   T_CHAR(',') + _group<T_STRING, t_group_size>(n);
        }

        template <typename T_VALUE, typename T_STRING, char t_comma, int t_group_size>
        inline T_STRING grouping_helper2(const T_VALUE& value) {
            typedef typename T_STRING::value_type T_CHAR;
            int n = int(value % 1000);
            T_VALUE m = value / 1000;
            if (m == 0)
                return _to_string<T_STRING>(n);
            return grouping_helper<T_VALUE, T_STRING, t_comma, t_group_size>(m) +
                   T_CHAR(',') + _group<T_STRING, t_group_size>(n);
        }
    } // namespace detail

    template <typename T_STRING, typename T_VALUE, char t_comma, int t_group_size>
    inline T_STRING number_grouping(const T_VALUE& value) {
        typedef typename T_STRING::value_type T_CHAR;
        if (value < 0) {
            return T_CHAR('-') +
                   detail::grouping_helper2<T_VALUE, T_STRING,
                                            t_comma, t_group_size>(-value);
        }
        return detail::grouping_helper2<T_VALUE, T_STRING,
                                        t_comma, t_group_size>(value);
    }
} // namespace ng

#endif  // ndef NUMBER_GROUPING_HPP_
