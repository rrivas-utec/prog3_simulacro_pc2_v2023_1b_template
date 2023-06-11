//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_SIMULACRO_PC2_V2023_1B_FIND_IN_COLLECTION_H
#define PROG3_SIMULACRO_PC2_V2023_1B_FIND_IN_COLLECTION_H

#include<vector>
using namespace std;

template <typename Iterator, typename Unary, typename T = Iterator::value_type> //
vector<T> find_in_collection(Iterator start, Iterator stop, Unary unary_fn) {
    vector<T> result;
    copy_if(start, stop, back_inserter(result), unary_fn);
    return result;
}


#endif //PROG3_SIMULACRO_PC2_V2023_1B_FIND_IN_COLLECTION_H
