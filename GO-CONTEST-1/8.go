package main

import (
	"fmt"
)

var (
	a       int
	b       int
	c       int
	tempmax int
)

func main() {
	fmt.Scan(&a, &b, &c)

	if a > b {
		tempmax = a
	} else {
		tempmax = b
	}
	if tempmax < c {
		fmt.Println(c)
	} else {
		fmt.Println(tempmax)
	}
}
