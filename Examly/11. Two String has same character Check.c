#include <stdio.h>
#include <stdbool.h>

bool has_same_characters(char* string1, char* string2) {
  // Create two arrays to store character counts.
  int counts1[26] = {0};
  int counts2[26] = {0};

  // Loop through the first string and increment the count for each character.
  for (int i = 0; string1[i] != '\0'; i++) {
    counts1[string1[i] - 'a']++;
  }

  // Loop through the second string and decrement the count for each character.
  for (int i = 0; string2[i] != '\0'; i++) {
    counts2[string2[i] - 'a']--;
  }

  // Compare the character counts. If any character count is not equal, the strings
  // don't have the same characters.
  for (int i = 0; i < 26; i++) {
    if (counts1[i] != counts2[i]) {
      return false;
    }
  }

  // All character counts are equal, so the strings have the same characters.
  return true;
}

int main() {
  char string1[] = "apple";
  char string2[] = "pplae";

  if (has_same_characters(string1, string2)) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
