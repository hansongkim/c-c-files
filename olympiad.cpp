// C++ program for weighted job scheduling using Dynamic 
// Programming and Binary Search
#include <iostream>
#include <algorithm>
using namespace std;
   
// A Olympiad has s time, e time and r.
struct Olympiad
{
    int s, e, r;
};
   
   
Olympiad arr[200000] = { 0 };

// A utility function that is used for sorting events
// according to e time
bool myfunction(Olympiad o1, Olympiad o2)
{
    return (o1.e < o2.e);
}
   
// A Binary Search based function to find the latest Olympiad
// (before current Olympiad) that doesn't conflict with current
// Olympiad.  "index" is index of the current Olympiad.  This function
// returns -1 if all Olympiads before index conflict with it.
// The array Olympiads[] is sorted in increasing order of e
// time.
int binarySearch(Olympiad o[], int index)
{
    // Initialize 'lo' and 'hi' for Binary Search
    int lo = 0, hi = index - 1;
   
    // Perform binary Search iteratively
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (o[mid].e <= o[index].s)
        {
            if (o[mid + 1].e <= o[index].s)
                lo = mid + 1;
            else
                return mid;
        }
        else
            hi = mid - 1;
    }
   
    return -1;
}
   
// The main function that returns the maximum possible
// r from given array of Olympiads
long long MaxReward(Olympiad arr[], int n)
{
    // Sort Olympiads according to e time
    sort(arr, arr+n, myfunction);
   
    // Create an array to store solutions of subproblems.  table[i]
    // stores the r for Olympiads till arr[i] (including arr[i])
    long long *table = new long long[n];
    table[0] = arr[0].r;
   
    // Fill entries in table[] using recursive property
    for (int i=1; i<n; i++)
    {
        // Find r including the current Olympiad
        long long inclProf = arr[i].r;
        int l = binarySearch(arr, i);
        if (l != -1)
            inclProf += table[l];
   
        // Store maximum of including and excluding
        table[i] = max(inclProf, table[i-1]);
    }
   
    // Store result and free dynamic memory allocated for table[]
    long long result = table[n-1];
    delete[] table;
    
    return result;
}
   
// Driver program
int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		if(a!=1) a-=1;
		arr[i].s=a;
		cin >> arr[i].e;
		cin >> arr[i].r;
	}
    cout<< MaxReward(arr, n) << endl;
    return 0;
}
