#include <stdio.h>
#include <ctype.h>
int is_digits_only(const char *s)
{
    if (s[0] == '\0') 
    {
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++)
      {
        if (!isdigit((unsigned char)s[i])) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    const char *test1 = "123456";
      printf("Test 1 (\"%s\"): %s\n", test1, is_digits_only(test1) ? "Only digits" : "Not only digits");
    const char *test2 = "abc123";
      printf("Test 2 (\"%s\"): %s\n", test2, is_digits_only(test2) ? "Only digits" : "Not only digits");
    const char *test3 = "";
      printf("Test 3 (empty string): %s\n", is_digits_only(test3) ? "Only digits" : "Not only digits");
    const char *test4 = "007";
      printf("Test 4 (\"%s\"): %s\n", test4, is_digits_only(test4) ? "Only digits" : "Not only digits");
    return 0;
}
