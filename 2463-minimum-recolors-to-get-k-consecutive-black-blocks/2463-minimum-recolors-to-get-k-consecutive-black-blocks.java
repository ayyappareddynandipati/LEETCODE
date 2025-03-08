class Solution {
    public int minimumRecolors(String blocks, int k) {
        int min=k;
        int left=0;
        int count=0;
        for(int right=0;right<blocks.length();right++)
        {
            if(blocks.charAt(right)=='B')
            {
                count++;
            }
            if(right-left+1==k)
            {
                min=Math.min(min,k-count);
                if(blocks.charAt(left)=='B')
                {
                    count--;
                }
                left++;
            }
        }
        return min;
    }
}