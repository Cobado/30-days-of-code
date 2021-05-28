#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    public:
    Difference(vector<int> elms)
    {
        elements = elms;
    }
    
    public:
    int computeDifference()
    {
        int max = 0, min = 100;
        for (int i = 0; i < elements.size(); ++i) {
            if (max < elements[i])
                max = elements[i];
            if (min > elements[i])
                min = elements[i];
        }
        maximumDifference = max - min;
        return maximumDifference;
    }
    
	// Add your code here

}; // End of Difference class
