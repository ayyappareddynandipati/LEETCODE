class Solution {
    public boolean squareIsWhite(String coordinates) {
        int a = coordinates.charAt(0);
        int b = coordinates.charAt(1);
        if ((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) return false;
        else return true;

    }
}