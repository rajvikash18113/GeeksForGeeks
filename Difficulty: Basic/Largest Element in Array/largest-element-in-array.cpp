//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        if(n == 1)
        return arr[0];
        
        int maxi = 0;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] > arr[maxi])
            maxi = i;
        }
        return arr[maxi];
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends