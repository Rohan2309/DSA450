/*
N meetings in one room 
Easy Accuracy: 43.1% Submissions: 64786 Points: 2
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
Output: 
4
Explanation:
Maximum four meetings can be held with
given start and end timings.
The meetings are - (1, 2),(3, 4), (5,7) and (8,9)
Example 2:

Input:
N = 3
start[] = {10, 12, 20}
end[] = {20, 25, 30}
Output: 
1
Explanation:
Only one meetings can be held
with given start and end timings.

 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
     static bool comp(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first; //if seond is equal then start time
        }
        return a.second < b.second;
    }
    //Function to find the maximum number of meetings that can
    
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
         vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = {start[i], end[i]};
        }
        sort(v.begin(), v.end(), comp);
        int i = 0; //iterator 1st
        int j = 1; //iterator 2nd
        int c = 1; //count will be 1 as we are always taking last element
        while (j < n)
        {
            if (v[i].second < v[j].first) //case when accepted
            {
                c++; //increasing counter
                i = j;
                j++;
            }
            else //otherwise
            {
                j++;
            }
        }
        return c;
    }
};
int main()
{
    
    return 0;
}