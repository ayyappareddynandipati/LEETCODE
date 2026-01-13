class Solution {
public:
    double separateSquares(std::vector<std::vector<int>>& squares) {
        int n = squares.size();
        double totalArea = 0;
        double low = 0;
        double high = 0;
        
        // Calculate total area and determine the search range.
        for (const auto& s : squares) {
            int yi = s[1];
            int li = s[2];
            double area = 1.0 * li * li;
            totalArea += area;
            high = std::max(high, static_cast<double>(yi + li));
        }
        
        double target = totalArea / 2.0;
        double tol = 1e-6;
        
        // Binary search for minimal L such that totalBelow(L) >= target.
        while (high - low > tol) {
            double mid = (low + high) / 2.0;
            double below = 0;
            // Compute total area below the line y = mid.
            for (const auto& s : squares) {
                int yi = s[1];
                int li = s[2];
                double top = yi + li;
                if (mid <= yi) {
                    // Entire square is above the line.
                    continue;
                } else if (mid >= top) {
                    // Entire square is below the line.
                    below += 1.0 * li * li;
                } else {
                    // Square is cut by the line.
                    below += 1.0 * li * (mid - yi);
                }
            }
            // If the area below is too low, we must raise the line.
            if (below < target) {
                low = mid;
            } else {
                high = mid;
            }
        }
        return high;
    }
};