package main

import (
	"fmt"
	"sort"
)

func ChitatChisla(n int) []int {
	var chisla []int
	chislo := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&chislo)
		chisla = append(chisla, chislo)
	}
	return chisla
}

func main() {
	var n, x int

	fmt.Scan(&n)
	fmt.Scan(&x)

	chisla := ChitatChisla(n)
	sort.Ints(chisla)

	naydeno := false
	for i := 0; i < len(chisla)-1; i++ {
		if chisla[i] > x {
			break
		}
		for j := i + 1; j < len(chisla); j++ {
			if chisla[i]+chisla[j] == x {
				if chisla[i] > chisla[j] {
					fmt.Print(chisla[j], chisla[i])
				} else {
					fmt.Print(chisla[i], chisla[j])
				}
				naydeno = true
				break
			}
		}
		if naydeno {
			break
		}
	}
	if !naydeno {
		fmt.Print("0 0")
	}
}
