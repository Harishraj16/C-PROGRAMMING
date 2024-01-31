// C program to check given number is
// Armstrong number or not using Sum
// of Digits
#include <stdio.h>

// Driver code
int main()
{
	int n = 153;
	int temp = n;
	int p = 0;

	// Calculating the sum of individual digits
	while (n > 0) {
		int rem = n % 10;
		p = (p) + (rem * rem * rem);
		n = n / 10;
	}

	// Condition to check whether the
	// value of P equals to user input
	// or not.
	if (temp == p) {
		printf("Yes. It is Armstrong No.");
	}
	else {
		printf("No. It is not an Armstrong No.");
	}
	return 0;
}

//Armstrong number using Recursion:

#include <stdio.h>
#include <math.h>
int isAmstrong(int n,int count,int target) {
    static int sum = 0;
    if(n==0){
        if(sum == target) return 1;
        else return 0;
    }
    int rem = n % 10;
    sum = sum + (pow(rem,count));
    return isAmstrong(n / 10,count,target);
}

int countCheck(int num){
    int count = 0;
    while(num){
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    int count  = countCheck(num);
    int check = isAmstrong(num,count,num);
    
    if (check) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    printf("%d",count);
    return 0;
}

