//
// Created by Andrew Chupin on 2019-08-01.
//
#include <gtest/gtest.h>
#include "../src/bubble_sort.h"


TEST(BubbleSortTest, SortTest) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 5, 4, 3, 2, 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}


TEST(BubbleSortTest, SortTestEmpty) {
    std::vector<int32_t> dataValid = { };

    std::vector<int32_t> data = { };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestReady) {
    std::vector<int32_t> dataValid = { 1, 2, 3, 4, 5 };

    std::vector<int32_t> data = { 1, 2, 3, 4, 5 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestSingle) {
    std::vector<int32_t> dataValid = { 1 };

    std::vector<int32_t> data = { 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortTestEven) {
    std::vector<int32_t> dataValid = { 1, 2 };

    std::vector<int32_t> data = { 2, 1 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortRandomTest) {
    std::vector<int32_t> dataValid = { 1, 2, 4, 5, 6 };

    std::vector<int32_t> data = { 4, 5, 1, 2, 6 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(BubbleSortTest, SortBigTest) {
    int32_t count = 14'748; // TODO SOMETHING WRONG

    std::vector<int32_t> dataValid;
    dataValid.reserve(count);
    for (int32_t i = 0; i < count; i++) {
        dataValid.push_back(i);
    }

    std::vector<int32_t> data;
    data.reserve(count);
    int32_t size = count - 1;
    for (int32_t i = size; i >= 0; i--) {
        data.push_back(i);
    }

    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}

TEST(IntroSortTest, SortSameAndNegativeTest) {
    std::vector<int32_t> dataValid = { -313, -9, -9, 1, 3, 23, 23, 32, 233 };

    std::vector<int32_t> data = { 3, 1, 23, -9, 233, 23, -313, 32, -9 };
    bubble_sort<int32_t>(data);

    ASSERT_EQ(data, dataValid);
}
