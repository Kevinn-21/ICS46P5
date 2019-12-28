#ifndef __PROJECT_5_HEADER___
#define __PROJECT_5_HEADER___


#include <iostream>
#include <string>
#include <vector>

// Returns true if and only if the given parameter,
// interpreted as a character array, is a min-heap.
// Use ASCII value ordering.  The natural < will serve this purpose.
bool isMinHeap(std::string s);

// Implement some sort, your choice.  
// It must run in some "reasonable" amount of time,
// but for the size of vectors I'm going to test this with,
// the O(n^2) solutions are fine.
// Ideally, you should implement this based on your own 
// understanding from lecture or from the textbook.
// I am aware you could find a solution online, and I'll
// remind you that submitting work that is not your own is 
// not okay for this class. 
// Also, you must implement it yourself:  calling 
// the sort function in the standard library is not okay.
void doSomeSort(std::vector<std::string> & vec);


// Return a SORTED vector of which elements of the
// given input stream are min heaps. 
std::vector<std::string> findHeaps(std::istream & in);







#endif 
