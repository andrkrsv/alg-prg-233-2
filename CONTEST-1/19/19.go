package main

import "fmt"

func main() {

	var (
		b int
		a int
	)

	fmt.Scan(&b)
	fmt.Scan(&a)

	for i := 1; i <= b; i++ {
		for d := 1; d <= a; d++ {
			fmt.Print(i*d, "\t")
		}
		fmt.Println()
	}
}
