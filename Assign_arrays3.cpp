#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int countTripletsWithSum(std::vector<int>& arr, int x) {
    int count = 0;
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == x) {
                ++count;
                ++left;
                --right;
            } else if (sum < x) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return count;
}

// Find factorial of a large number
std::vector<int> factorial(int n) {
    std::vector<int> result;
    result.push_back(1);
    for (int x = 2; x <= n; ++x) {
        int carry = 0;
        for (int& digit : result) {
            int prod = digit * x + carry;
            digit = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

// Find first non-repeating element
int firstNonRepeatingElement(std::vector<int>& arr) {
    vector<int> v(arr.size(),-1);
    for(int i=0;i<arr.size();i++){
        if(v[i]!=-1) return arr[i];
        else v[i] = arr[i];
    }
    return -1;
}
int main(){
    return 0;
}    