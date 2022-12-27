package main

import (
	"fmt"
	"runtime"

	"github.com/lalitkh/playground/models"
)

const (
	first = iota + 6 //1
	mid
	second = iota //"second"
	third
)

func main() {
	// simple hello world
	fmt.Println("Hello World!")

	// Primitive Data Types

	// Integer
	var i int
	i = 42
	fmt.Println(i)

	// Float
	var f float32 = 3.14
	fmt.Println(f)

	// String
	name := "Lalit"
	fmt.Println(name)

	// Boolean
	b := true
	fmt.Println(b)

	// Complex
	c := complex(3, 4)
	fmt.Println(c)
	r, im := real(c), imag(c)
	fmt.Println(r, im)

	// Pointers
	var firstName *string = new(string)
	*firstName = "Kaavya"
	fmt.Println(*firstName)

	lastName := "Khandelwal"
	ptr := &lastName
	fmt.Println(ptr, *ptr)

	// Constant
	const pi = 3.14
	fmt.Println(pi)
	fmt.Println(pi + 2)

	fmt.Println(first, mid, second, third)

	// Collections

	// Arrays
	var arr [4]int

	arr[0] = 0
	arr[1] = 1
	arr[2] = 2

	fmt.Println(arr)

	arr2 := [4]int{1, 2, 3, 4}
	fmt.Println(arr2)

	// Slices
	slice := []int{1, 2, 3, 4, 5}
	fmt.Println(slice)

	slice = append(slice, 6, 7, 8)

	fmt.Println(slice)
	fmt.Println(slice[:2], slice[2:4], slice[1:2])

	// Map
	m := map[string]int{"foo": 42}
	fmt.Println(m)
	fmt.Println(m["foo"])

	delete(m, "foo")
	fmt.Println(m)

	// Struct
	type user struct {
		ID        int
		FirstName string
		LastName  string
	}

	var u user
	u.ID = 1
	u.FirstName = "Lalit"
	u.LastName = "Khandelwal"
	fmt.Println(u)
	fmt.Println(u.FirstName)

	u2 := user{ID: 2, FirstName: "Kaavya", LastName: "Khandelwal"}
	fmt.Println(u2)

	// from other package

	u3 := models.User{
		ID:        2,
		FirstName: "Khushaboo",
		LastName:  "Khandelwal",
	}
	fmt.Println(u3)

	// function call
	status, err := startWebServer(3000)
	fmt.Println(status, err)

	// Web Service
	// controllers.RegisterControllers()
	// http.ListenAndServe(":3000", nil)

	// for loop
	var p int
	for p < 5 {
		println(p)
		p++
		if p == 3 {
			break
		}
	}

	// iterate over slice
	slice1 := []int{1, 2, 3, 4}

	for i, v := range slice1 {
		println(i, v)
	}

	// iterate over map
	ports := map[string]int{"http": 80, "https": 443}

	for k, v := range ports {
		println(k, v)
	}

	// Switch Case
	switch os := runtime.GOOS; os {
	case "darwin":
		fmt.Println("OS X")
		fallthrough
	case "linux":
		fmt.Println("Linux")
	default:
		fmt.Printf("%s.\n", os)
	}

}

func startWebServer(port int) (int, error) {
	fmt.Println("Starting Server...")

	fmt.Println("Server started at port", port)
	status := 200
	return status, nil
}
