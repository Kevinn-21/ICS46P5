#include "gtest/gtest.h"
#include "proj5.hpp"
#include <string>
#include <fstream>

namespace{


// NOTE:  these are not intended as exhaustive tests.
// This should get you started testing.

TEST(HeapTests, Bedpost)
{
	EXPECT_TRUE(isMinHeap("bedpost"));
}

TEST(HeapTests, Pinhead)
{
	EXPECT_TRUE(! isMinHeap("pinhead")); // it's actually a max heap.
}

TEST(HeapTests, Chemistry)
{
    EXPECT_TRUE(isMinHeap("chemistry"));
}

TEST(HeapTests, Kevin)
{
    EXPECT_FALSE(isMinHeap("kevin"));
}



// test the sorting function.

TEST(Sorting, Sort1)
{
	std::vector<std::string> vec = {"bedpost", "adjusts", "adjourns", "despot"};
	doSomeSort(vec);

	std::vector<std::string> expected = {"adjourns", "adjusts", "bedpost", "despot"};

	EXPECT_TRUE( vec == expected );
}

TEST(Sorting, Sort2)
{
    std::vector<std::string> vec = {"aback", "abated", "abaft", "abash"};

    doSomeSort(vec);

    std::vector<std::string> expected = {"aback", "abaft", "abash", "abated"};

    EXPECT_TRUE(vec == expected);
}

TEST(Sorting, Sort3)
{
    std::vector<std::string> vec = {"e", "d", "c", "a", "b"};

    doSomeSort(vec);

    std::vector<std::string> expected = {"a","b","c","d","e"};

    EXPECT_TRUE(vec == expected);
}


// test the collection of heaps 

TEST(Collection, SetOfHeaps)
{
	std::string someWords = "bedpost despot pinhead\nadjourns adjusts\n";

	std::istringstream stream( someWords );

	std::vector<std::string> vec = findHeaps(stream);

	
	std::vector<std::string> expected = {"adjourns", "adjusts", "bedpost", "despot"};

	EXPECT_TRUE( vec == expected );
}

TEST(Collection, AnotherSetOfHeaps)
{
    std::string someWords = "hello chestnut chemistry pinhead ape\n";

    std::istringstream stream(someWords);

    std::vector <std::string> vec = findHeaps(stream);

    std::vector<std::string> expected = {"ape", "chemistry", "chestnut"};

    EXPECT_TRUE ( vec == expected );
}



}
