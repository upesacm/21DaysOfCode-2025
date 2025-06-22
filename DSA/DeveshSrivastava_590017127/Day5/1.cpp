/*Week 1 Day 5 (20/06/2025)*/
/*1. Find the Unique Element*/
/*A problem that requires finding the single element that appears only once
 * while all others*/
/*appear twice.*/
/*Problem Statement:*/
/*Given a non-empty array of integers nums, where every element appears exactly
 * twice except*/
/*for one element that appears only once, find and return the element that
 * appears only once.*/
/*This problem helps develop skills in frequency counting, bit manipulation, or
 * set-based*/
/*techniques, commonly used in data cleansing and error detection.*/
/*Your task:*/
/*Find and return the element that appears only once in the array.*/
/*Examples*/
/*Input:*/
/*nums = [2, 2, 1]*/
/*Output:*/
/*1*/
/*Input:*/
/*nums = [4, 1, 2, 1, 2]*/
/*Output:*/
/*4*/
/*Input:*/
/*nums = [1]*/
/*Output:*/
/*1*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findUniqueElement(const vector<int> &nums) {

  unordered_map<int, int> map;
  for (int num : nums) {
    map[num]++;
  }
  for (const auto &pair : map) {
    if (pair.second == 1) {
      return pair.first;
    }
  }
  return -1;
}

int main() {
  vector<int> nums1 = {2, 2, 1};
  cout << findUniqueElement(nums1) << endl;

  vector<int> nums2 = {4, 1, 2, 1, 2};
  cout << findUniqueElement(nums2) << endl;

  vector<int> nums3 = {1};
  cout << findUniqueElement(nums3) << endl;

  return 0;
}
