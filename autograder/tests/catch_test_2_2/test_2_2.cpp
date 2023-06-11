//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_in_collection.h"
#include <list>
using namespace std;

static void test_2_2() {
    int n = 0;
    cin >> n;
    list<int> lst(n);
    for(auto& item: lst) cin >> item;
    auto result = find_in_collection(begin(lst), end(lst),
                                     [](auto value){ return abs(value) > 50; });
    copy(begin(result), end(result), ostream_iterator<int>(cout, " "));
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}