package main

import (
	"fmt"
)

func main() {
	var (
		data  int
		data1 int
	)

	fmt.Scan(&data, &data1)
	finaldata := data * data1
	fmt.Println(finaldata)

}
