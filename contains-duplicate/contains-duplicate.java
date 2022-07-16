class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer>mp=new HashSet<Integer>();
        for(int i:nums){
            if(!mp.add(i)) return true;     
        }
        return false;
    }
}