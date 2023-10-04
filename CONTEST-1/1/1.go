package main

import (
	"fmt"
)

func main() {
	var N int
	fmt.Scan(&N)

	dp := make([]int, N+1)
	for i := 1; i <= N; i++ {
		dp[i] = int(1e9)
	}
	dp[0] = 0

	for _, j := range []int{5000, 1000, 500, 200, 100} {
		for i := j; i <= N; i++ {
			if dp[i-j]+1 < dp[i] {
				dp[i] = dp[i-j] + 1
			}
		}
	}

	fmt.Println(dp[N-1], dp[N-2], dp[N-3], dp[N-4], dp[N-5])
}
