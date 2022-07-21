class Solution {
    public int thirdMax(int[] nums) {
        int n =3;
        Set<Integer> set = new HashSet<>();
        Arrays.sort(nums);
        for(int i = nums.length - 1; i >= 0; i--)
        {
            if(!set.contains(nums[i]))
            {
                n--;
                set.add(nums[i]);
            }
            if(n == 0)
            {
                return nums[i];
            }
        }
        return nums[nums.length - 1];
    }
}