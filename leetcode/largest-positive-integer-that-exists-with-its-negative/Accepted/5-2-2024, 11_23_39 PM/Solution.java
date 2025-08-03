// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative

class Solution {
    public int findMaxK(int[] nums) {
        List<Integer> negative = new ArrayList<>();
        List<Integer> positive = new ArrayList<>();
        for(int num : nums) {
            if(num < 0)
            negative.add(-num);
            else if(num > 0)
            positive.add(num);
        }
        Collections.sort(negative);
        Collections.sort(positive);
        System.out.println(positive);
        System.out.println(negative);
        int number = -1;
        for(int num1 : negative) {
            for(int num2 : positive) {
                if(num1 == num2)
                number = Math.max(num1, number);
            }
        }
        return number;
    }
}