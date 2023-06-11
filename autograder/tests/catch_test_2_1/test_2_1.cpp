//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_in_collection.h"
#include <vector>
#include <iterator>
using namespace std;

static void test_2_1() {
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    for(auto& item: vec) cin >> item;
    auto result = find_in_collection(begin(vec), end(vec),
                                     [](auto value) { return value % 2 == 0; });
    copy(begin(result), end(result), ostream_iterator<int>(cout, " "));
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}