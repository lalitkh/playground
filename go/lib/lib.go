package lib

// Find the greatest common divisor of two integers
func findGCD(num1 int, num2 int) int {
	if num2 == 0 {
		return num1
	}
	return findGCD(num2, num1%num2)
}

// merge string alternatively
func mergeAlternately(word1 string, word2 string) string {

	sizeWord1 := len(word1)
	sizeWord2 := len(word2)

	sizeFinalWord := sizeWord1 + sizeWord2

	mergedString := make([]byte, sizeFinalWord)

	for i := 0; i < sizeFinalWord; i++ {
		if i < sizeWord1 {
			mergedString = append(mergedString, word1[i])
		}
		if i < sizeWord2 {
			mergedString = append(mergedString, word2[i])
		}
	}

	return string(mergedString)

}

func mergeAlternately2(word1 string, word2 string) string {
	fstr := ""
	i, j := 0, 0
	for i < len(word1) && j < len(word2) {
		fstr += string(word1[i]) + string(word2[j])
		i++
		j++
	}

	fstr += word1[i:] + word2[j:]
	return fstr
}

// Rearrange an array such that arr[i] == i else -1
func rearrangeArray(arr []int, size int) []int {
	tempArr := make([]int, size)

	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			if arr[j] == i {
				tempArr[i] = i
				break
			} else {
				tempArr[i] = -1
			}
		}
	}
	return tempArr
}

// Rearrange an array such that arr[i] == i else -1
func rearrangeArrayInPlace(arr []int, size int) {

	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			if arr[j] == i {
				arr[i], arr[j] = arr[j], arr[i]
				break
			}
		}
	}
}

// Rotate an array using extra space
func rotateArrayClockwise(arr []int, size int) []int {
	tempArr := make([]int, len(arr))

	for i := 0; i < size; i++ {
		if i == 0 {
			tempArr[i] = arr[size-1]
		} else {
			tempArr[i] = arr[i-1]
		}
	}
	return tempArr
}

// Rotate array using constant space
func rotateArrayClockwiseConstantSpace(arr []int, size int) {
	last := arr[size-1]

	for i := size - 1; i > 0; i-- {
		arr[i] = arr[i-1]
	}
	arr[0] = last
}

// Rotate an array using reverse
func rotateArrayUsingReverse(arr []int, size int) {
	reverseArrayInPlace(arr, size-1)
	reverseArrayInPlace(arr, size)
}

// Reverse array using extra space
func reverseArray(arr []int, size int) []int {
	tempArr := make([]int, size)

	for i := 0; i < size; i++ {
		tempArr[i] = arr[size-i-1]
	}
	return tempArr
}

// Reverse array in place
func reverseArrayInPlace(arr []int, size int) {
	for i := 0; i < size/2; i++ {
		arr[i], arr[size-i-1] = arr[size-i-1], arr[i]

	}
}

// Reverse array using two pointer
func reverseArrayTwoPointer(arr []int, size int) {
	start := 0
	end := size - 1

	for start < end {
		arr[start], arr[end] = arr[end], arr[start]
		start++
		end--
	}
}
