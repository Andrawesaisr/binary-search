// binary search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<bitset>
using namespace std;
int main()
{
    /*
    wanted to know how many steps i'll take to find number in array 
    using binary search instead of simple search 
    */
    int list[10] = { 1,2,3,4,5,6,7,8,9,10 };//you can change the size and the elements as you like 
    int low=0, high=10-1;
    int number,counter=0;
    int check = 0;
    cin >> number;
    while (low <= high) {
        int mid = (low + high) / 2; // to get the mid size and mid element
        int guess = list[mid];
        if (guess == number) {
            cout << counter; 
            check = 1;
            break;
        }
        if (guess < number) {
            low = mid + 1;
               counter++;
        }
        else {
            high = mid - 1;
               counter++;
        }
    }   
    if (check == 0) {
        cout << "not exist" << endl;
    }
}
 