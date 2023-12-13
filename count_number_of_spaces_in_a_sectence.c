#include <stdio.h>
int count_space(char s[])
{
    int count = 0;
    for (int i = 0;s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            count++;
            return count;
        }
    }
}
int main()
{
    char Name[] = "Hi! My self Nishan.";
    // puts("Enter a sentence: ");
    // gets(Name);
    puts(Name);
    printf("No of space is: %d\n", count_space(Name));
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char ch[] = "HI! MY NAME IS NISHAN"; 
//     puts(ch);
//     int count = 0;
//     for (int i = 0; ch[i] != '\0'; i++)
//     {
//         if (ch[i] == ' ')
//         {
//             count++;
//         }
//     }

//     printf("number of spaces: %d\n", count);

//     return 0;
// }