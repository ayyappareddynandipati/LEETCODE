class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int key=nums[i];
          hm.put(key,hm.getOrDefault(key,0)+1);
        }
        int ans=-1;
        int n=nums.length/2;
        for(int mama:hm.keySet()){
int value=hm.get(mama);
if(value>n){
    ans=mama;
    break;
}
        }
        return ans;
    }
}