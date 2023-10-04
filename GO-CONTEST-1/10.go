package main

import (
	"fmt"
)

func main() {
	var (
		plavaet   string
		krilya    string
		longsheya string
		temp      int
	)
	fmt.Scan(&plavaet, &krilya, &longsheya)
	if plavaet == "Нет" {
		temp = 0 + temp
	}
	if plavaet == "Да" {
		temp = temp + 1
	}
	if krilya == "Нет" {
		temp = 0 + temp
	}
	if krilya == "Да" {
		temp = 2 + temp
	}
	if longsheya == "Нет" {
		temp = 0 + temp
	}
	if longsheya == "Да" {
		temp = 3 + temp
	}
	if temp == 0 {
		fmt.Println("Кот")
	}
	if temp == 3 && longsheya == "Да" {
		fmt.Println("Жираф")
	}
	if temp == 2 {
		fmt.Println("Курица")
	}
	if temp == 5 {
		fmt.Println("Страус")
	}
	if temp == 1 {
		fmt.Println("Дельфин")
	}
	if temp == 4 {
		fmt.Println("Плезиозавры")
	}
	if temp == 3 && longsheya == "Нет" {
		fmt.Println("Пингвин")
	}
	if temp == 6 {
		fmt.Println("Утка")
	}

}
