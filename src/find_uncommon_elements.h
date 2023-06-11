//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_SIMULACRO_PC2_V2023_1B_FIND_UNCOMMON_ELEMENTS_H
#define PROG3_SIMULACRO_PC2_V2023_1B_FIND_UNCOMMON_ELEMENTS_H

#include <type_traits>
#include <list>
#include <set>
using namespace std;

template <
        template <typename...> class CResult,
        template <typename...> class CFirst,
        template <typename...> class CSecond,
        typename T>
CResult<T> find_uncommon_elements(CFirst<T>& cnt1, CSecond<T>& cnt2) {
    CResult<T> result;
    set<T> s1(begin(cnt1), end(cnt1));
    set<T> s2(begin(cnt2), end(cnt2));
    set_symmetric_difference(begin(s1), end(s1),
                             begin(s2), end(s2),
                             back_inserter(result));
    return result;
}

#endif //PROG3_SIMULACRO_PC2_V2023_1B_FIND_UNCOMMON_ELEMENTS_H
