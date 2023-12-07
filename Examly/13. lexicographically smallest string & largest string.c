#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char strings[n][1000];
    int lengths[n];
    
    for(int i=0;i<n;i++){
        scanf("%s",strings[i]);
        lengths[i]=strlen(strings[i]);
    }
    
    char smallest[100], largest[100];
    strcpy(smallest,strings[0]);
    strcpy(largest, strings[0]);
    
    for(int i=1;i<n;i++){
        if(strcmp(strings[i],smallest) < 0){
            strcpy(smallest, strings[i]);
            
        } else if(strcmp(strings[i],largest) > 0){
            strcpy(largest,strings[i]);
        }
    }
    
    printf("%s %s",smallest,largest);
    return 0;
}

