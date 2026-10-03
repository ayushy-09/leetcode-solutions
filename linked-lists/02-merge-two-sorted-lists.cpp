struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } elseGot it! We need to populate all 4 topic directories (`arrays-strings`, `basic-algorithms`, `stacks`, `linked-lists`) so that each has **2 C++ solution files** and **2 corresponding `.md` documentation files**, plus update `PROGRESS.md` and `README.md` to match your existing repository structure.

Run this shell script directly inside your `~/Documents/dsinc/leetcode-solutions` directory to generate all required code and documentation files:

```bash
cd ~/Documents/dsinc/leetcode-solutions

# 1. Populate arrays-strings directory
cat << 'EOF' > arrays-strings/02-valid-anagram.cpp
#include 
#include 

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::vector count(26, 0);
        for (size_t i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int c : count) {
            if (c != 0) return false;
        }
        return true;
    }
};
