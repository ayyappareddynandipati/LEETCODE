class Solution {
    public boolean isValid(String s) {
        int n=s.length();
        if(n<3)
        {
            return false;
        }
        int vowels=0;
        int constants=0;
        for(char ch:s.toCharArray())
        {
            if(Character.isLetter(ch))
            {
                if("aeiouAEIOU".indexOf(ch)!=-1)
                {
                    vowels++;
                }
                else{
                    constants++;
                }
            }
            else if(!Character.isDigit(ch))
            {
                return false;
            }
        }
        return vowels>=1 && constants>=1;
        
    }
}