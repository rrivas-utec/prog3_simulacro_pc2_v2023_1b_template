//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_in_collection.h"
#include <deque>
using namespace std;

static void test_2_3() {
    int n = 0;
    cin >> n;
    deque<int> deq(n);
    for(auto& item: deq) cin >> item;
    auto result = find_in_collection(begin(deq), end(deq),
                                     [](auto value){ return value % 3 == 0 || value % 11 == 0; });
    copy(begin(result), end(result), ostream_iterator<int>(cout, " "));
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}