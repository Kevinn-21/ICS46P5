//proj5.cpp

#include <iostream>
#include <sstream>
#include <string>
#include "proj5.hpp"

bool isMinHeap(std::string s)
{
    std::string newS = " " + s; //Added a whitespace so I can start index at 1

    for(int i=1; i<s.length(); i++)
    {
        if(newS[2*i]!=0 && newS[2*i+1]!=0)
        {
            if(newS[i]<newS[2*i] && newS[i]<newS[2*i+1])    //if s is less than left and right child,
            { }                                             //that subtree is a min heap. Check all of them
            else
                return false;   //one subtree is not min heap, return false
        }
    }
	return true;    //all checked and all min heaps, return true
}


void doSomeSort(std::vector<std::string> & vec)
{
    //bubble sort
    for(int i=1; i<vec.size(); i++)
    {
        for(int j=0; j<(vec.size()-i); j++)
        {
            if(vec[j+1] < vec[j])
            {
                //swap
                std::string temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}


std::vector<std::string> findHeaps(std::istream & in)
{
	std::vector<std::string> onlyMinHeaps;

    std::string s;  //holds current word being looked at

    while(in >> s)  //loop until no more words
    {
        if(isMinHeap(s))
        {
            onlyMinHeaps.push_back(s);
        }
    }

    doSomeSort(onlyMinHeaps);

	return onlyMinHeaps;
}
