//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_uncommon_elements.h"
using namespace std;

static void test_1_1() {
    int n = 0;
    cin >> n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(auto& item: vec1)
        cin >> item;
    for(auto& item: vec2)
        cin >> item;
    vector<int> res = find_uncommon_elements<vector>(vec1, vec2);
    for(const auto& item: res)
        cout << item << " ";
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}