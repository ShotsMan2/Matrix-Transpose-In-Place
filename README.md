# Matrix Transpose (In-Place)

This project implements a Linear Algebra algorithm in C to find the **Transpose** of a square matrix.

## ⚙️ Algorithm Logic

The algorithm converts rows into columns by swapping elements across the main diagonal:
* Swap `Matrix[i][j]` $\leftrightarrow$ `Matrix[j][i]`
* The Main Diagonal elements (1, 5, 9...) remain unchanged.

## 🚀 Example Output (N=3)

**Initial State:**
| 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
| 7 | 8 | 9 |

**Transposed State (Output):**
| 1 | 4 | 7 |
|---|---|---|
| 2 | 5 | 8 |
| 3 | 6 | 9 |

---
*This repository demonstrates nested loops and data swapping logic in C.*
