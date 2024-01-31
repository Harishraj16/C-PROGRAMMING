#include <stdio.h>

int main() {
    int n,copy,rev=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    copy=n;
    
    while(copy>0)
    {
        rev=rev*10+(copy%10);
        copy /=10;
    }
    
    if(rev==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}


//Using recursion:
#include <stdio.h>

int ispalindrome(int n,int target) {
    static int sum = 0;

    if (n == 0) {
        if (sum == target) return 1;
        else return 0;
    }

    int rem = n % 10;
    sum = sum * 10 + rem;
    return ispalindrome(n / 10,target);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int check = ispalindrome(n,n);
    
    if (check) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}

