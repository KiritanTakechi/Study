package main

import "fmt"

func main()  {
	var name string="Li Yan Feng"
	var sum int = 0
	var i int
	for i=0;i<len(name);i++{
		sum=sum+int(name[i])
	}
	var sum_bytes [5]byte
	var j int
	for j=len(sum_bytes)-1;sum!=0;j--{
		sum_bytes[j]=byte(sum%10)+'0'
		sum=sum/10
	}
	var k int
	for k=j+1;k<len(sum_bytes);k++{
		fmt.Printf("%c",sum_bytes[k])
	} 
	fmt.Println()
}