public class Solution {
    public bool IsValidSudoku(char[][] board) {
        HashSet<string> seen = new HashSet<string>();

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.')
                    continue;

                char num = board[r][c];

                string row = num + " in row " + r;
                string col = num + " in col " + c;
                string box = num + " in box " + (r / 3) + "-" + (c / 3);

                if (!seen.Add(row) ||
                    !seen.Add(col) ||
                    !seen.Add(box))
                    return false;
            }
        }

        return true;
    }
}
