package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()
	for i := 0; i < 1000000; i++ {
		fmt.Println(i)
	}
	end := time.Now()
	du := end.Sub(start)
	fmt.Printf("takes %s \n", du)
}
