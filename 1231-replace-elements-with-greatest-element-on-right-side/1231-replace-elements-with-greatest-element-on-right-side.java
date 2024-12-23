class Solution {
    public int[] replaceElements(int[] arr) {
        int n = arr.length,maxi=-1;
        int res[] = new int[n];
        for(int i=n-1;i>=0;i--)
        {
            res[i]=maxi;
            maxi=Math.max(maxi,arr[i]);
        }
        return res;
    }
}