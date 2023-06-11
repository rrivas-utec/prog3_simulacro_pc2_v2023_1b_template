//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_uncommon_elements.h"
#include <deque>
#include <list>
using namespace std;

static void test_1_3() {
    int n = 0;
    cin >>n;
    deque<int> deq1(n);
    list<int> lis1(n);
    for(auto& item: deq1)
        cin >> item;
    for(auto& item: lis1)
        cin >> item;
    list<int> res = find_uncommon_elements<list>(deq1, lis1);
    for(const auto& item: res)
        cout << item << " ";

}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}