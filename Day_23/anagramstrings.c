#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    /*  anagram strings are those strings that contain same characters with same frequency
         but in different order.
         anagram strings can be found by sorting.
    */
   if(strlen(str1)!=strlen(str2)){
    printf("Strings cannot be anagram!!\n");
   } else{
    //sorting of first string
    for (int i = 0; i < strlen(str1) - 1; i++) 
    {
        for (int j = i + 1; j < strlen(str1); j++)
        {
            if (str1[i] > str1[j]) // swapping
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    } 
    //sorting of second string
    for (int i = 0; i < strlen(str2) - 1; i++) // sorting of first string
    {
        for (int j = i + 1; j < strlen(str2); j++)
        {
            if (str2[i] > str2[j]) // swapping
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    } 
}
    //now compare both strings 
    if (strcmp(str1, str2) == 0)//both strings are same by characters and length
    {
        printf("Both strings are anagram!!");
    }
    else
    {
        printf("Strings are not anagram!!");
    }
    return 0;
}
