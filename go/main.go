package main

import (
	"fmt"
	"strings"
)

func main() {

	s := "  hello world  "

	sArr := strings.Fields(s)

	size := len(sArr)

	for i := 0; i < size/2; i++ {
		sArr[i], sArr[size-i-1] = sArr[size-i-1], sArr[i]
	}

	fmt.Println(sArr)

}
