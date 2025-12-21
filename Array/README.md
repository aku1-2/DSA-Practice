Array problems

### RotateArrayktimes.cpp (LeetCode 189)
     line:  `k=k%n`
     Explanation:  When k is greater than n (the number of elements), the loop runs unnecessarily.
                   Let's take an example n=5 and k=7, so when the array is rotated 5 times then array is back to the original position.
                   Rotating the array by k steps is equivalent to rotating by `k % n` steps.
     
