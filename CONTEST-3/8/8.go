package main

import (
	"fmt"
)

func readnumb(n int) []int {
	var massiv []int
	chislo := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&chislo)
		massiv = append(massiv, chislo)
	}
	return massiv
}

func unicalchifra(chisla []int) int {
	schet := make(map[int]int, 1)
	for _, element := range chisla {
		schet[element]++
		if schet[element] == 2 {
			schet[element] = 0
		}
	}
	for _, element := range chisla {
		if schet[element] == 1 {
			return element
		}
	}
	return 0

}

func main() {
	var n int

	fmt.Scan(&n)
	chisla := readnumb(n)
	fmt.Println(unicalchifra(chisla))

}
