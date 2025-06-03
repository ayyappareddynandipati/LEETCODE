class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        auto getColor = [](string coord) {
            int column = coord[0] - 'a'; // 'a' is 0, 'b' is 1, ..., 'h' is 7
            int row = coord[1] - '1';    // '1' is 0, '2' is 1, ..., '8' is 7
            return (column + row) % 2;   // If sum is even -> white, odd -> black
        };

        return getColor(coordinate1) == getColor(coordinate2);
    }
};